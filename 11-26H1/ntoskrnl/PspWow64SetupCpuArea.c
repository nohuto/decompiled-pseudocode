/*
 * XREFs of PspWow64SetupCpuArea @ 0x1409EA6C0
 * Callers:
 *     PspSetupUserStack @ 0x1409EA234 (PspSetupUserStack.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1403D6D60 (RtlGetExtendedContextLength2.c)
 *     RtlpGetLegacyContextLength @ 0x14048CA10 (RtlpGetLegacyContextLength.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409EA900 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409EAAD0 (RtlpArchContextFlagFromMachine.c)
 *     PsWow64GetProcessMachine @ 0x1409EBB90 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PspWow64SetupCpuArea(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int16 ProcessMachine; // ax
  int v4; // eax
  __int64 CpuAreaEnabledFeatures; // rax
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v7[0] = 0;
  v9 = 0;
  ProcessMachine = PsWow64GetProcessMachine(a2);
  v4 = RtlpArchContextFlagFromMachine(ProcessMachine);
  v8 = v4;
  if ( !v4 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v4, 0LL, v7);
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&v8);
  RtlGetExtendedContextLength2(v8, &v9, CpuAreaEnabledFeatures);
  *a1 = ((~(v7[0] - 1LL) & (((((*a1 - 4) & 0xFFFFFFFFFFFFFFFCuLL) - 5) & 0xFFFFFFFFFFFFFFF8uLL) - v9)) - 4) & 0xFFFFFFFFFFFFFFF0uLL;
  return 0LL;
}
