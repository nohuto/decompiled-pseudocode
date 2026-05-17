/*
 * XREFs of _alloca_probe @ 0x180163610
 * Callers:
 *     RtlWow64GetProcessMachines @ 0x180034FB0 (RtlWow64GetProcessMachines.c)
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18006F200 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     RtlpQueryProcessMachine @ 0x180090A84 (RtlpQueryProcessMachine.c)
 *     RtlUnwind @ 0x1800B43C0 (RtlUnwind.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800BEC08 (RtlpHpLfhSubsegmentWalk.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DE744 (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800E8E40 (RtlWow64IsWowGuestMachineSupported.c)
 *     ReadStringDelimited_1 @ 0x180136C34 (ReadStringDelimited_1.c)
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
