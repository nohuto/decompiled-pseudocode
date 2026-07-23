/*
 * XREFs of _alloca_probe @ 0x180163510
 * Callers:
 *     RtlWow64GetProcessMachines @ 0x180020110 (RtlWow64GetProcessMachines.c)
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180036C00 (RtlDispatchException.c)
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     RtlpQueryProcessMachine @ 0x1800757E4 (RtlpQueryProcessMachine.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18008F650 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlUnwind @ 0x1800B18E0 (RtlUnwind.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800BC668 (RtlpHpLfhSubsegmentWalk.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DB6B4 (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800E8050 (RtlWow64IsWowGuestMachineSupported.c)
 *     ReadStringDelimited_1 @ 0x1801369A8 (ReadStringDelimited_1.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
      StackLimit -= 4096;
    while ( v1 < StackLimit );
  }
  return result;
}
