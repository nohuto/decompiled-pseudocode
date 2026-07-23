/*
 * XREFs of KiRundownMutants @ 0x1404AB48C
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // r13
  __int64 v6; // rbp
  __int64 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r12
  _QWORD *v9; // r14
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  char v20; // cl
  int v21; // eax
  unsigned __int64 *v22; // rbx
  __int64 v23; // rsi
  unsigned __int64 *v24; // rbx
  __int64 v25; // rdi
  int v26; // [rsp+30h] [rbp-158h]
  __int64 v27; // [rsp+38h] [rbp-150h] BYREF
  __int64 v28; // [rsp+40h] [rbp-148h]
  _QWORD v29[32]; // [rsp+50h] [rbp-138h] BYREF

  memset_0(v29, 0, sizeof(v29));
  v5 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v5 == v5 )
    return;
  v6 = 0LL;
  v26 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v28 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    goto LABEL_7;
  }
LABEL_8:
  CurrentPrcb = KeGetCurrentPrcb();
LABEL_9:
  while ( 2 )
  {
    LODWORD(v27) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v9 = (_QWORD *)*v5;
    v10 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      v11 = (unsigned __int64)(v9 - 3);
      if ( *((_BYTE *)v9 + 25) )
        KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v9 - 3), 0LL, 0LL);
      if ( !_interlockedbittestandset((volatile signed __int32 *)v11, 7u) )
      {
LABEL_22:
        v14 = *v9;
        v15 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v15 != v9 )
LABEL_51:
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        *(_DWORD *)(v11 + 4) = 1;
        *(_BYTE *)(v11 + 48) |= 1u;
        v16 = *(_QWORD **)(v11 + 8);
        *(_QWORD *)(v11 + 40) = 0LL;
        while ( 1 )
        {
          if ( v16 == (_QWORD *)(v11 + 8) )
          {
LABEL_37:
            if ( (*(_BYTE *)(v11 + 48) & 2) != 0 )
            {
              v29[v6] = v11;
              v6 = (unsigned int)(v6 + 1);
            }
            _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
            if ( ++v26 == 32 )
            {
              KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
              if ( (_DWORD)v6 )
              {
                v22 = v29;
                v23 = (unsigned int)v6;
                do
                {
                  KeAbPostRelease(*v22++);
                  --v23;
                }
                while ( v23 );
              }
              v26 = 0;
              v6 = 0LL;
              v3 = KeGetCurrentIrql();
              if ( (_BYTE)v3 != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
LABEL_7:
                LOBYTE(v2) = 2;
                KiRaiseIrqlProcessIrqlFlags(v3, v2);
              }
              goto LABEL_8;
            }
            goto LABEL_9;
          }
          v17 = (_QWORD *)*v16;
          v18 = (__int64)v16;
          v16 = v17;
          v19 = *(_QWORD **)(v18 + 8);
          if ( v17[1] != v18 || *v19 != v18 )
            goto LABEL_51;
          *v19 = v17;
          v17[1] = v19;
          v20 = *(_BYTE *)(v18 + 16);
          switch ( v20 )
          {
            case 1:
              if ( KiTryUnwaitThread((__int64)CurrentPrcb, v18, *(unsigned __int16 *)(v18 + 18), &v27) )
                goto LABEL_36;
              break;
            case 2:
              *(_BYTE *)(v18 + 17) = 5;
              KiInsertQueueInternal(*(_QWORD *)(v18 + 24), (_QWORD *)v18, v4);
LABEL_36:
              v21 = *(_DWORD *)(v11 + 4) - 1;
              *(_DWORD *)(v11 + 4) = v21;
              if ( !v21 )
                goto LABEL_37;
              break;
            case 4:
              *(_BYTE *)(v18 + 17) = 5;
              *(_DWORD *)(v11 + 4) = 0;
              KiInsertQueueDpc(*(_QWORD *)(v18 + 24), v11, v18, 0LL, 0);
              break;
            default:
              KiTryUnwaitThread((__int64)CurrentPrcb, v18, 256LL, 0LL);
              break;
          }
        }
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * ((v11 >> 4) & 0x3F)]);
      if ( v9 == (_QWORD *)*v5 )
      {
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v9 - 6, v12, v13);
        if ( *(_QWORD *)(v11 + 40) == BugCheckParameter1 )
        {
LABEL_18:
          ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * ((v11 >> 4) & 0x3F)]);
          LOBYTE(CurrentIrql) = v28;
          if ( !v10 )
            continue;
          LODWORD(v27) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v27);
            while ( *(_QWORD *)(BugCheckParameter1 + 64) );
          }
          LOBYTE(CurrentIrql) = v28;
          goto LABEL_22;
        }
        _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
      }
      v10 = 0LL;
      goto LABEL_18;
    }
    break;
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  if ( (_DWORD)v6 )
  {
    v24 = v29;
    v25 = (unsigned int)v6;
    do
    {
      KeAbPostRelease(*v24++);
      --v25;
    }
    while ( v25 );
  }
}
