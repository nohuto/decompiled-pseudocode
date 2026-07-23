/*
 * XREFs of EtwpInitializeCoverageSampler @ 0x140CE8670
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverageSampler()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int16 v2; // [rsp+40h] [rbp-29h] BYREF
  char v3; // [rsp+42h] [rbp-27h]
  int v4; // [rsp+48h] [rbp-21h]
  int v5; // [rsp+5Ch] [rbp-Dh]
  int v6; // [rsp+64h] [rbp-5h]
  int v7; // [rsp+68h] [rbp-1h]
  void (__fastcall *v8)(__int64, __int64, __int64, __int64); // [rsp+80h] [rbp+17h]
  void (__fastcall *v9)(__int64); // [rsp+88h] [rbp+1Fh]

  DestinationString = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09070, 0LL, 0LL);
  ExpSysDbgLock.AbWaitObject = 0LL;
  ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&ExpSysDbgLock.1008);
  _InterlockedExchange64((volatile __int64 *)&ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink, 1LL);
  RtlInitUnicodeString(&DestinationString, L"CoverageSampler");
  memset_0(&v2, 0, 0x78uLL);
  v3 |= 4u;
  v8 = EtwpCoverageSamplerClose;
  v2 = 120;
  v9 = EtwpCoverageSamplerDelete;
  v6 = 1;
  v7 = 1736;
  v4 = 402;
  v5 = 2031617;
  result = ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&ExpSysDbgLock.KernelWaitTime);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Eu, 0xC0uLL, 0LL, 0LL, 0LL);
  return result;
}
