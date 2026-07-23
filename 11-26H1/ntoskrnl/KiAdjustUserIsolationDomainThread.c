/*
 * XREFs of KiAdjustUserIsolationDomainThread @ 0x1404CCE24
 * Callers:
 *     PspSynchronizeThreadIsolationDomains @ 0x1404BFAD8 (PspSynchronizeThreadIsolationDomains.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1404CCBF0 (KeEnableCoreIsolationMitigationPolicyThread.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140253150 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiSetUserIsolationDomainThreadUnsafe @ 0x1404CD340 (KiSetUserIsolationDomainThreadUnsafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiAdjustUserIsolationDomainThread(__int64 a1, __int64 a2, char a3)
{
  char v3; // r13
  __int64 v4; // rdi
  __int64 v6; // r8
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rsi
  volatile signed __int32 *v10; // rdi
  int v11; // r15d
  char v12; // al
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // r8
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int8 v22; // dl
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 CurrentIrql; // rcx
  __int64 v28; // rcx
  __int64 v29; // r14
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int64 *v34; // [rsp+58h] [rbp-A8h]
  __int128 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v37)(); // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v39[33]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+1E8h] [rbp+E8h] BYREF

  v40 = a2;
  v3 = a3;
  v4 = a2;
  memset_0(&v38, 0, 0x108uLL);
  v6 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( !v3 )
  {
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v4 = v40;
    v6 = 0LL;
    v3 = a3;
  }
  v7 = *(_QWORD *)(a1 + 1816);
  if ( v7 == v4 )
    goto LABEL_15;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    KiSetUserIsolationDomainThreadUnsafe(a1, v40, 0LL);
    goto LABEL_15;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(a1 + 388);
      v9 = 0LL;
      v10 = 0LL;
      v11 = v8;
      if ( v8 == 1 )
        break;
      switch ( v8 )
      {
        case 2:
LABEL_51:
          v29 = *(unsigned int *)(a1 + 536);
          if ( (int)v29 >= 0 )
          {
            v9 = KiProcessorBlock[v29];
            KiAcquirePrcbLocksForIsolationUnit(v9, 0, (unsigned __int64 *)&v32 + 1);
            if ( a1 == *(_QWORD *)(v9 + 8) )
              goto LABEL_12;
            if ( *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == (_DWORD)v29 )
              __fastfail(0x4Au);
            goto LABEL_54;
          }
          break;
        case 3:
          v16 = *(unsigned int *)(a1 + 536);
          if ( (int)v16 >= 0 )
          {
            v9 = KiProcessorBlock[v16];
            KiAcquirePrcbLocksForIsolationUnit(v9, 0, (unsigned __int64 *)&v32 + 1);
            if ( a1 == *(_QWORD *)(v9 + 16) )
              goto LABEL_12;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
              __fastfail(0x1Eu);
LABEL_54:
            KiReleasePrcbLocksForIsolationUnit((__int64 *)&v32 + 1);
LABEL_35:
            v6 = 0LL;
          }
          break;
        case 5:
          v12 = *(_BYTE *)(a1 + 112) & 7;
          if ( v12 == 1 || (unsigned __int8)(v12 - 3) <= 3u )
            goto LABEL_12;
          v11 = 2;
          goto LABEL_51;
        default:
          goto LABEL_12;
      }
    }
    v17 = *(unsigned int *)(a1 + 536);
    if ( (int)v17 >= 0 )
    {
      v9 = KiProcessorBlock[v17];
      KiAcquirePrcbLocksForIsolationUnit(v9, 0, (unsigned __int64 *)&v32 + 1);
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
        goto LABEL_12;
      goto LABEL_54;
    }
    v18 = (unsigned int)v17;
    LODWORD(v18) = v17 & 0x7FFFFFFF;
    v19 = KiProcessorBlock[v18];
    v10 = *(volatile signed __int32 **)(v19 + 36488);
    if ( (KiVelocityFlags & 0x200000) == 0 )
    {
      v31 = 0;
      while ( _interlockedbittestandset64(v10, 0LL) )
      {
        do
          KeYieldProcessorEx(&v31);
        while ( *(_QWORD *)v10 );
      }
      v3 = a3;
      goto LABEL_56;
    }
    v34 = *(volatile signed __int64 **)(v19 + 36488);
    *((_QWORD *)&v33 + 1) = 0LL;
    v20 = _InterlockedExchange64((volatile __int64 *)v10, (__int64)&v33 + 8);
    if ( v20 )
    {
      KxWaitForLockOwnerShip((signed __int64)&v33 + 8, v20, 0LL);
LABEL_56:
      v6 = 0LL;
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw((char *)&v33 + 8);
      v21 = *((_QWORD *)&v33 + 1);
      if ( *((_QWORD *)&v33 + 1) )
      {
LABEL_33:
        *((_QWORD *)&v33 + 1) = 0LL;
        v22 = (unsigned __int8)v34;
        if ( ((v22 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v21 + 8), (__int64)v34)) & 4) != 0 )
        {
          KeWakeAddressAll();
          goto LABEL_35;
        }
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(v34, 0LL, (signed __int64)&v33 + 8) != (__int128 *)((char *)&v33 + 8) )
      {
        v21 = KxWaitForLockChainValid((__int64 *)&v33 + 1, 2LL, 0LL);
        v6 = 0LL;
        goto LABEL_33;
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    }
  }
  v9 = 0LL;
LABEL_12:
  *(_QWORD *)&v33 = v10;
  *(_QWORD *)&v32 = v9;
  if ( v11 != 2 )
  {
    KiSetUserIsolationDomainThreadUnsafe(a1, v40, v6);
    goto LABEL_14;
  }
  v38 = 2097153LL;
  memset_0(v39, 0, 0x100uLL);
  v23 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + *(unsigned int *)(v9 + 36)) & 0x3F;
  v24 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + *(unsigned int *)(v9 + 36)) >> 6;
  if ( (unsigned __int16)v38 <= (unsigned int)v24 )
  {
    if ( WORD1(v38) > (unsigned int)v24 )
    {
      LOWORD(v38) = v24 + 1;
      goto LABEL_41;
    }
  }
  else
  {
LABEL_41:
    v25 = (unsigned int)v24;
    v26 = v39[v24];
    _bittestandset64(&v26, v23);
    v39[v25] = v26;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
  *((_QWORD *)&v35 + 1) = &v40;
  *(_QWORD *)&v35 = a1;
  v37 = KiIpiUpdateUserIsolationDomain;
  v36 = 0LL;
  KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 0LL, (char *)&v38, &v35, 5LL);
  KiIpiStallOnPacketTargetsPrcb(v28, (__int64)KeGetCurrentPrcb());
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
  __writecr8(2uLL);
LABEL_14:
  KiReleaseThreadStateLock(v13, (__int64)&v32, v14);
LABEL_15:
  if ( !v3 )
    *(_QWORD *)(a1 + 64) = 0LL;
  return v7;
}
