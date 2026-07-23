/*
 * XREFs of KiAllocateForceParkingData @ 0x1405FB2A0
 * Callers:
 *     KiAllocateAndStartBootProcessorSchedulerStructures @ 0x1405EC424 (KiAllocateAndStartBootProcessorSchedulerStructures.c)
 *     KiAllocateProcessorSchedulerStructures @ 0x1405EC84C (KiAllocateProcessorSchedulerStructures.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateForceParkingData(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  LOBYTE(v6) = 3;
  *(_QWORD *)&v6 = v6 | 0x100;
  DWORD2(v6) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL) | 0x80000000;
  v2 = ExAllocatePool3(64LL, 344LL, 1346791755LL, &v6, 1);
  v3 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_DWORD *)v2 = 275;
  *(_QWORD *)(v2 + 24) = &KiForceParkDutyCycleDpcCallback;
  *(_QWORD *)(v2 + 56) = 0LL;
  v5 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v3 + 32) = a1;
  *(_QWORD *)(v3 + 16) = 0LL;
  if ( !v5 )
    *(_WORD *)(v3 + 2) = *(_DWORD *)(a1 + 36) + 2048;
  *(_QWORD *)(v3 + 336) = 0LL;
  *(_WORD *)(v3 + 66) = 0;
  KiInitializeTimer2(v3 + 64, (__int64)KiStartForceParkSingleDutyCycleTimerCallback, a1, 0);
  *(_WORD *)(v3 + 202) = 0;
  KiInitializeTimer2(v3 + 200, (__int64)KiStopForceParkSingleDutyCycleTimerCallback, a1, 0);
  result = 0LL;
  *(_QWORD *)(a1 + 34544) = v3;
  return result;
}
