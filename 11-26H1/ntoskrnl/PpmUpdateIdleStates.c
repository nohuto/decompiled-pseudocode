/*
 * XREFs of PpmUpdateIdleStates @ 0x140B00820
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PpmHvUseNativeAlgorithms @ 0x1404E55AC (PpmHvUseNativeAlgorithms.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmUpdateIdleContext @ 0x1407778DC (PpmUpdateIdleContext.c)
 */

__int64 __fastcall PpmUpdateIdleStates(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v6; // rdi
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  void *v12; // rdx
  __int64 v13; // r8
  unsigned int updated; // eax
  unsigned int v15; // ebx
  __int64 v17; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v18[33]; // [rsp+30h] [rbp-D8h] BYREF

  memset_0(&v17, 0, 0x108uLL);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, v2, v3, v4);
  if ( !a1
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4)),
        v6 = ProcessorIndexFromNumber,
        ProcessorIndexFromNumber == -1) )
  {
    v15 = -1073741811;
    goto LABEL_14;
  }
  if ( !PpmHvUseNativeAlgorithms() )
  {
    if ( (HvlEnlightenments & 0x10000000) == 0 )
    {
      updated = PpmUpdateIdleContext(v6, a1);
      goto LABEL_13;
    }
    *(_QWORD *)(a1 + 48) = PpmIdleGuestPreExecute;
    *(_QWORD *)(a1 + 72) = PpmIdleGuestComplete;
  }
  v17 = 2097153LL;
  memset_0(v18, 0, 0x100uLL);
  v7 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v6) & 0x3F;
  v8 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v6) >> 6;
  if ( (unsigned __int16)v17 > (unsigned int)v8 )
    goto LABEL_7;
  if ( WORD1(v17) > (unsigned int)v8 )
  {
    LOWORD(v17) = v8 + 1;
LABEL_7:
    v9 = (unsigned int)v8;
    v10 = v18[v8];
    _bittestandset64(&v10, v7);
    v18[v9] = v10;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v11 = 0LL;
    v12 = PpmUpdateIdleStatesInplace;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 96) )
    {
      v11 = 0LL;
      v12 = PpmRemoveIdleStates;
      v13 = 0LL;
      goto LABEL_12;
    }
    v11 = 3LL;
    v12 = PpmInstallNewIdleStates;
  }
  v13 = a1;
LABEL_12:
  updated = PopExecuteOnTargetProcessors((__int64)&v17, (__int64)v12, v13, v11);
LABEL_13:
  v15 = updated;
LABEL_14:
  PopReleaseRwLock(&PpmIdlePolicyLock);
  return v15;
}
