/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x14021C500
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021CAF0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140253150 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r14
  int v8; // edi
  __int64 v9; // rdi
  __int64 v10; // r14
  char v11; // al
  volatile unsigned __int64 CycleTime; // rdi
  unsigned __int64 v13; // rbx
  __int64 NextProcessor; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  volatile __int64 *v17; // rdi
  __int64 v18; // rax
  unsigned __int8 v19; // dl
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 *v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 CurrentIrql; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdi
  _BYTE v29[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int64 *v32; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall *v36)(); // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v38[33]; // [rsp+98h] [rbp-68h] BYREF

  memset_0(&v37, 0, 0x108uLL);
  v29[0] = 0;
  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( Thread == KeGetCurrentThread() )
    return KeUpdateTotalCyclesCurrentThread(Thread, CycleTimeStamp);
  KiAcquireThreadLockRaiseToDpc(Thread, v29);
  do
  {
    while ( 1 )
    {
      v6 = Thread->WaitBlockFill6[68];
      v7 = 0LL;
      v8 = v6;
      if ( v6 == 5 )
        break;
      v5 = (unsigned int)(v6 - 1);
      if ( v6 == 1 )
      {
        NextProcessor = Thread->NextProcessor;
        if ( (int)NextProcessor >= 0 )
        {
          v28 = KiProcessorBlock[NextProcessor];
          KiAcquirePrcbLocksForIsolationUnit(v28, 0LL, (char *)&v30 + 8);
          if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)NextProcessor )
          {
            *(_QWORD *)&v30 = v28;
            *(_QWORD *)&v31 = 0LL;
            goto LABEL_15;
          }
          goto LABEL_42;
        }
        v15 = (unsigned int)NextProcessor;
        LODWORD(v15) = NextProcessor & 0x7FFFFFFF;
        v16 = KiProcessorBlock[v15];
        v17 = *(volatile __int64 **)(v16 + 36488);
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          v32 = *(volatile signed __int64 **)(v16 + 36488);
          *((_QWORD *)&v31 + 1) = 0LL;
          if ( _InterlockedExchange64(v17, (__int64)&v31 + 8) )
            KxWaitForLockOwnerShip((char *)&v31 + 8);
        }
        else
        {
          v33 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
          {
            do
              KeYieldProcessorEx(&v33);
            while ( *v17 );
          }
        }
        if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)NextProcessor )
        {
          *(_QWORD *)&v30 = 0LL;
          *(_QWORD *)&v31 = v17;
          goto LABEL_15;
        }
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          _m_prefetchw((char *)&v31 + 8);
          v18 = *((_QWORD *)&v31 + 1);
          if ( *((_QWORD *)&v31 + 1) )
          {
LABEL_30:
            v5 = v18 + 8;
            *((_QWORD *)&v31 + 1) = 0LL;
            v19 = (unsigned __int8)v32;
            if ( ((v19 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v18 + 8), (__int64)v32)) & 4) != 0 )
              KeWakeAddressAll();
          }
          else
          {
            v5 = (__int64)&v31 + 8;
            if ( (__int128 *)_InterlockedCompareExchange64(v32, 0LL, (signed __int64)&v31 + 8) != (__int128 *)((char *)&v31 + 8) )
            {
              v18 = KxWaitForLockChainValid((char *)&v31 + 8);
              goto LABEL_30;
            }
          }
        }
        else
        {
          _InterlockedAnd64(v17, 0LL);
        }
      }
      else
      {
        v5 = (unsigned int)(v6 - 2);
        if ( v6 == 2 )
          goto LABEL_39;
        if ( v6 != 3 )
          goto LABEL_14;
        v9 = Thread->NextProcessor;
        if ( (int)v9 >= 0 )
        {
          v10 = KiProcessorBlock[v9];
          KiAcquirePrcbLocksForIsolationUnit(v10, 0LL, (char *)&v30 + 8);
          if ( Thread == *(PKTHREAD *)(v10 + 16) )
          {
            *(_QWORD *)&v30 = v10;
LABEL_61:
            *(_QWORD *)&v31 = 0LL;
LABEL_15:
            if ( Thread->Running )
            {
              LOBYTE(v5) = 1;
              KeFlushProcessWriteBuffers(v5);
            }
            *CycleTimeStamp = __rdtsc();
            CycleTime = Thread->CycleTime;
            KiReleaseThreadStateLock(v5, &v30);
            Thread->ThreadLock = 0LL;
            goto LABEL_18;
          }
          if ( Thread->WaitBlockFill6[68] == 3 && Thread->NextProcessor == (_DWORD)v9 )
            __fastfail(0x1Eu);
LABEL_42:
          KiReleasePrcbLocksForIsolationUnit((char *)&v30 + 8);
        }
      }
    }
    v11 = Thread->WaitRegister.Flags & 7;
    if ( v11 == 1 )
      goto LABEL_14;
    if ( (unsigned __int8)(v11 - 3) <= 3u )
    {
      *(_QWORD *)&v30 = 0LL;
      goto LABEL_61;
    }
    v8 = 2;
LABEL_39:
    v20 = Thread->NextProcessor;
  }
  while ( (int)v20 < 0 );
  v7 = KiProcessorBlock[v20];
  KiAcquirePrcbLocksForIsolationUnit(v7, 0LL, (char *)&v30 + 8);
  if ( Thread != *(PKTHREAD *)(v7 + 8) )
  {
    if ( Thread->WaitBlockFill6[68] == 2 && Thread->NextProcessor == (_DWORD)v20 )
      __fastfail(0x4Au);
    goto LABEL_42;
  }
LABEL_14:
  *(_QWORD *)&v30 = v7;
  *(_QWORD *)&v31 = 0LL;
  if ( v8 != 2 )
    goto LABEL_15;
  v21 = Thread->NextProcessor;
  KiReleaseThreadStateLock(v5, &v30);
  Thread->ThreadLock = 0LL;
  v37 = 2097153LL;
  memset_0(v38, 0, 0x100uLL);
  v23 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v21) & 0x3F;
  v24 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v21) >> 6;
  if ( (unsigned __int16)v37 <= (unsigned int)v24 )
  {
    if ( WORD1(v37) > (unsigned int)v24 )
    {
      LOWORD(v37) = v24 + 1;
      goto LABEL_44;
    }
  }
  else
  {
LABEL_44:
    v22 = &v38[v24];
    v25 = *v22;
    _bittestandset64(&v25, v23);
    *v22 = v25;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v22) = 12;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v22);
  }
  v36 = xHalTimerWatchdogStop;
  v35 = 0LL;
  v34 = 0LL;
  KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), 0, (unsigned int)&v37, (unsigned int)&v34, 5LL);
  KiIpiStallOnPacketTargetsPrcb(v27, KeGetCurrentPrcb());
  *CycleTimeStamp = __rdtsc();
  CycleTime = Thread->CycleTime;
LABEL_18:
  v13 = v29[0];
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29[0]);
  __writecr8(v13);
  return CycleTime;
}
