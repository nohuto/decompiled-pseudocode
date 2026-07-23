/*
 * XREFs of PpmUpdatePlatformIdleVeto @ 0x140421350
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 *     PpmUpdateIdleVeto @ 0x140421540 (PpmUpdateIdleVeto.c)
 *     PpmEventPlatformVetoRequest @ 0x14042185C (PpmEventPlatformVetoRequest.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x140421C30 (KeFindFirstSetLeftAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmUpdatePlatformIdleVeto(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r12
  KIRQL v5; // al
  __int64 v6; // rcx
  KIRQL v7; // r15
  int updated; // edi
  __int64 v9; // r8
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _BYTE v16[16]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v18[33]; // [rsp+40h] [rbp-C8h] BYREF

  v16[0] = 0;
  memset_0(v18, 0, 0x100uLL);
  v2 = PpmPlatformStates;
  if ( !PpmPlatformStates )
    return (unsigned int)-1073741637;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v3 >= *(_DWORD *)PpmPlatformStates )
    return (unsigned int)-1073741811;
  v4 = 448 * v3;
  v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  LOBYTE(v6) = *(_BYTE *)(a1 + 12);
  v7 = v5;
  updated = PpmUpdateIdleVeto(v6, *(unsigned int *)(a1 + 8), v4 + v2 + 80, v16);
  if ( updated < 0 )
    goto LABEL_7;
  LOBYTE(v9) = *(_BYTE *)(a1 + 12);
  PpmEventPlatformVetoRequest(*(unsigned int *)(a1 + 4), *(unsigned int *)(a1 + 8), v9);
  if ( *(_DWORD *)(a1 + 4) != *(_DWORD *)PpmPlatformStates - 1 )
  {
LABEL_5:
    if ( !v16[0] || (unsigned int)KeCheckProcessorAffinityEx(v4 + v2 + 128, KeGetCurrentPrcb()->Number) )
      goto LABEL_7;
    KeReleaseSpinLock(&PpmIdleVetoLock, v7);
    v17 = 2097153LL;
    memset_0(v18, 0, 0x100uLL);
    v11 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock
          + (unsigned int)KeFindFirstSetLeftAffinityEx(v4 + v2 + 128));
    v12 = v11 & 0x3F;
    v13 = v11 >> 6;
    if ( (unsigned __int16)v17 <= (unsigned int)v13 )
    {
      if ( WORD1(v17) <= (unsigned int)v13 )
        goto LABEL_15;
      LOWORD(v17) = v13 + 1;
    }
    v14 = (unsigned int)v13;
    v15 = v18[v13];
    _bittestandset64(&v15, v12);
    v18[v14] = v15;
LABEL_15:
    PopExecuteOnTargetProcessors((__int64)&v17, (__int64)HalSystemVectorDispatchEntry, 0LL, 0LL);
    return (unsigned int)updated;
  }
  if ( v16[0] )
  {
    if ( *(_BYTE *)(a1 + 12) )
      PopDeepSleepSetDisengageReason(9u);
    else
      PopDeepSleepClearDisengageReason(9u);
    goto LABEL_5;
  }
LABEL_7:
  KeReleaseSpinLock(&PpmIdleVetoLock, v7);
  return (unsigned int)updated;
}
