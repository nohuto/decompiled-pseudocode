/*
 * XREFs of PpmUnlockProcessors @ 0x1402F9270
 * Callers:
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x140420840 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     PpmIdleUnlockProcessor @ 0x140605294 (PpmIdleUnlockProcessor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmUnlockProcessors(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int Number; // r12d
  unsigned __int16 v6; // bx
  unsigned __int64 i; // rdi
  unsigned __int16 j; // cx
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebp
  __int64 Prcb; // rax
  __int64 v12; // r14
  __int64 v13; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v14[33]; // [rsp+38h] [rbp-140h] BYREF

  memset_0(v14, 0, 0x100uLL);
  v13 = 2097153LL;
  result = (__int64)memset_0(v14, 0, 0x100uLL);
  Number = KeGetPcr()->Prcb.Number;
  v6 = 0;
  for ( i = *(_QWORD *)(a2 + 8); ; i = *(_QWORD *)(a2 + 8LL * v6 + 8) )
  {
    while ( i )
    {
      _BitScanForward64(&v9, i);
      i &= ~(1LL << v9);
      v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v6].Flink
            + (unsigned __int8)v9);
      Prcb = KeGetPrcb(v10);
      v12 = *(_QWORD *)(Prcb + 34880);
      if ( (unsigned __int8)PpmIdleUnlockProcessor(Prcb + 34972) == 6 )
        KeAddProcessorAffinityEx((unsigned __int16 *)&v13, v10);
      KeInterlockedClearProcessorAffinityEx(v12 + 72, Number);
      result = KeRemoveProcessorAffinityEx(a1, v10);
    }
    if ( ++v6 >= *(_WORD *)a2 )
      break;
    result = v6;
  }
  for ( j = 0; j < (unsigned __int16)v13; ++j )
  {
    result = j;
    if ( v14[j] )
      return HalRequestIpi(0LL, &v13);
  }
  return result;
}
