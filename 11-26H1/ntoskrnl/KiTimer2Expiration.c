/*
 * XREFs of KiTimer2Expiration @ 0x140338AC0
 * Callers:
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x1405FDA30 (KiTimerExpirationDpc.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckAndRearmForceIdle @ 0x140338EAC (KiCheckAndRearmForceIdle.c)
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     KiInsertTimer2 @ 0x1403397B0 (KiInsertTimer2.c)
 *     KiRemoveTimer2 @ 0x14037AC60 (KiRemoveTimer2.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiUpdateTimer2Flags @ 0x1403B4220 (KiUpdateTimer2Flags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiTimer2Expiration(
        struct _SINGLE_LIST_ENTRY *a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned __int64 result; // rax
  char v7; // si
  unsigned __int64 v8; // r13
  char v10; // r12
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  _QWORD *v15; // rbx
  volatile signed __int32 *v16; // rdi
  char v17; // al
  volatile signed __int32 *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  volatile signed __int32 *v21; // rsi
  unsigned __int32 i; // eax
  volatile signed __int32 **v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rax
  char inserted; // al
  char v27[8]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v28; // [rsp+38h] [rbp-80h] BYREF
  volatile signed __int32 *v29; // [rsp+40h] [rbp-78h]
  _QWORD v30[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v31; // [rsp+60h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  result = KiNextTimer2DueTime;
  v27[0] = 0;
  v7 = a3;
  v8 = a2;
  v31 = 0LL;
  if ( a2 >= KiNextTimer2DueTime )
  {
    v10 = 0;
    v29 = (volatile signed __int32 *)&v28;
    v28 = &v28;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    v14 = 0LL;
    v24 = 7LL;
    if ( !a4 )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        BYTE8(v31) = 1;
        v30[0] = &v31;
        *(_QWORD *)&v31 = v8;
        v30[1] = 16LL;
        EtwTraceKernelEvent((int)v30, 1, 0x40020000u, 3920, 1538);
      }
      v14 = 1LL;
      v24 = 3LL;
      if ( v7 )
        v24 = 4LL;
    }
    v11 = (unsigned __int64)&KiTimer2Collections + 24 * v14;
    do
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( (v12 & 1) != 0 )
      {
        if ( v12 == 1 )
          v13 = 0LL;
        else
          v13 = v12 ^ (v11 | 1);
      }
      else
      {
        v13 = *(_QWORD *)(v11 + 8);
      }
      while ( v13 )
      {
        v20 = 0LL;
        if ( v14 >= 3 )
          v20 = 24LL;
        v21 = (volatile signed __int32 *)(v13 - v20);
        if ( v8 < *((_QWORD *)v21 + 6) )
          break;
        KiRemoveTimer2(v21 - 6);
        a2 = *((unsigned int *)v21 - 6);
        for ( i = _InterlockedCompareExchange(v21 - 6, *(v21 - 6) & 0xFFFFF0FF | 0x200, *((_DWORD *)v21 - 6));
              (_DWORD)a2 != i;
              i = _InterlockedCompareExchange(v21 - 6, i & 0xFFFFF0FF | 0x200, i) )
        {
          a2 = i;
        }
        v23 = (volatile signed __int32 **)v29;
        if ( *(_QWORD ***)v29 != &v28 )
          __fastfail(3u);
        *((_QWORD *)v21 + 1) = v29;
        *(_QWORD *)v21 = &v28;
        *v23 = v21;
        v25 = *(_QWORD *)(v11 + 8);
        v29 = v21;
        if ( (v25 & 1) != 0 )
        {
          if ( v25 == 1 )
            v13 = 0LL;
          else
            v13 = v25 ^ (v11 | 1);
        }
        else
        {
          v13 = v25;
        }
      }
      ++v14;
      v11 += 24LL;
    }
    while ( v14 < v24 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiTimer2CollectionLock, retaddr);
    v15 = v28;
    if ( v28 != &v28 )
    {
      while ( 1 )
      {
        v16 = (volatile signed __int32 *)(v15 - 3);
        v15 = (_QWORD *)*v15;
        KiAcquireKobjectLockSafe(v16, a2, a3);
        v17 = *((_BYTE *)v16 + 1);
        v18 = v16;
        if ( (v17 & 2) != 0 )
          break;
        if ( (v17 & 8) != 0 )
        {
          inserted = KiInsertTimer2(v16, 0LL, v27);
          v18 = v16;
          if ( !inserted )
            break;
          KiUpdateTimer2Flags(v16, 1LL, 0LL);
        }
        else
        {
          KiUpdateTimer2Flags(v16, 0LL, 4LL);
        }
LABEL_18:
        if ( v15 == &v28 )
        {
          if ( v10 )
            KiCheckAndRearmForceIdle();
          goto LABEL_21;
        }
      }
      if ( (*((_BYTE *)v16 + 129) & 2) != 0 )
        v10 = 1;
      KiExpireTimer2(v18, a1, v8, a5);
      goto LABEL_18;
    }
LABEL_21:
    if ( a1[1441].Next )
      KiProcessThreadWaitList(a1, 1LL, 0LL, 2);
    v19 = qword_140F26DC8;
    if ( qword_140F26DE0 < (unsigned __int64)qword_140F26DC8 )
      v19 = qword_140F26DE0;
    result = MEMORY[0xFFFFF78000000008] + KeMaximumIncrement;
    if ( v19 < result )
    {
      if ( !KiClockOwnerOneShotRequest )
        return KiSendClockInterruptToTargetProcessor((unsigned int)KiClockTimerOwner);
      if ( v19 < KiClockOwnerOneShotRequest )
      {
        result = (unsigned int)KeMinimumIncrement;
        if ( KiClockOwnerOneShotRequest - v19 > (unsigned int)KeMinimumIncrement )
          return KiSendClockInterruptToTargetProcessor((unsigned int)KiClockTimerOwner);
      }
    }
  }
  return result;
}
