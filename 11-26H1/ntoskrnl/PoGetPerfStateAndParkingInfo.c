/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x1404762E8
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x140A75F30 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     PpmGetThroughputInfoCallback @ 0x140254A70 (PpmGetThroughputInfoCallback.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmPerfGetCurrentState @ 0x1404764D4 (PpmPerfGetCurrentState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PoGetPerfStateAndParkingInfo(
        PPROCESSOR_NUMBER ProcNumber,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  _DWORD *v10; // rdi
  struct _KPRCB *v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // ecx
  unsigned int MHz; // r12d
  unsigned int v15; // eax
  unsigned __int64 SnapTimeLast; // rax
  unsigned __int8 CurrentIrql; // bl
  int v18; // esi
  ULONG v19; // eax
  int v21; // [rsp+30h] [rbp-178h] BYREF
  __int64 v22; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v23[264]; // [rsp+48h] [rbp-160h] BYREF

  memset_0(v23, 0, 0x100uLL);
  v21 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  v10 = *(_DWORD **)(Prcb + 35264);
  v11 = (struct _KPRCB *)Prcb;
  PpmPerfGetCurrentState(Prcb, a2 + 4, (unsigned int)&v21, a2 + 8, a2, a2 + 24);
  if ( v10 )
  {
    v13 = v10[138];
    MHz = v10[114];
    if ( v13 <= v10[139] )
      v13 = v10[139];
    *(_DWORD *)(a2 + 12) = v13;
    v15 = v10[137];
    v12 = (unsigned int)v10[136];
    if ( (unsigned int)v12 >= v15 )
      v12 = v15;
    *(_DWORD *)(a2 + 16) = v12;
    if ( v10[115] != v10[117] )
      *(_BYTE *)(a2 + 28) = 1;
    if ( (unsigned int)v12 < 0x64 )
      *(_DWORD *)(a2 + 24) |= 1u;
    LODWORD(SnapTimeLast) = (unsigned int)(100 * v21) / v10[114];
  }
  else
  {
    MHz = v11->MHz;
    LODWORD(SnapTimeLast) = 100;
  }
  *(_DWORD *)(a2 + 20) = SnapTimeLast;
  LOBYTE(SnapTimeLast) = v11->PowerState.Parked;
  *(_BYTE *)(a2 + 29) = SnapTimeLast;
  if ( a4 )
  {
    SnapTimeLast = v11->PowerState.SnapTimeLast;
    *a4 = SnapTimeLast;
  }
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v12, 2LL);
    }
    LODWORD(SnapTimeLast) = PpmGetThroughputInfoCallback(v11, a3, MHz);
    v18 = SnapTimeLast;
    if ( KiIrqlFlags )
      LOBYTE(SnapTimeLast) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v18 < 0 )
    {
      v22 = 2097153LL;
      memset_0(v23, 0, 0x100uLL);
      v19 = KeGetProcessorIndexFromNumber(ProcNumber);
      KeAddProcessorAffinityEx((unsigned __int16 *)&v22, v19);
      LOBYTE(SnapTimeLast) = PopExecuteOnTargetProcessors((__int64)&v22, (__int64)PpmGetThroughputInfoCallback, a3, MHz);
    }
  }
  return SnapTimeLast;
}
