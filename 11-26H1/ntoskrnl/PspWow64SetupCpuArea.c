/*
 * XREFs of PspWow64SetupCpuArea @ 0x1409E6E90
 * Callers:
 *     PspSetupUserStack @ 0x1409E6A04 (PspSetupUserStack.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 *     RtlpGetLegacyContextLength @ 0x140486550 (RtlpGetLegacyContextLength.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E70D0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409E72A0 (RtlpArchContextFlagFromMachine.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PspWow64SetupCpuArea(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int16 ProcessMachine; // ax
  ULONG v4; // eax
  ULONG64 CpuAreaEnabledFeatures; // rax
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF
  ULONG ContextFlags; // [rsp+50h] [rbp+18h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+20h] BYREF

  v7[0] = 0;
  ContextLength = 0;
  ProcessMachine = PsWow64GetProcessMachine(a2);
  v4 = RtlpArchContextFlagFromMachine(ProcessMachine);
  ContextFlags = v4;
  if ( !v4 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v4, 0LL, v7);
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&ContextFlags);
  RtlGetExtendedContextLength2(ContextFlags, &ContextLength, CpuAreaEnabledFeatures);
  *a1 = ((~(v7[0] - 1LL) & (((((*a1 - 4) & 0xFFFFFFFFFFFFFFFCuLL) - 5) & 0xFFFFFFFFFFFFFFF8uLL) - ContextLength)) - 4) & 0xFFFFFFFFFFFFFFF0uLL;
  return 0LL;
}
