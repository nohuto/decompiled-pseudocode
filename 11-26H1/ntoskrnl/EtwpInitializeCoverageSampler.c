/*
 * XREFs of EtwpInitializeCoverageSampler @ 0x140CE22D0
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectType @ 0x14077B990 (ObCreateObjectType.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09078, 0LL, 0LL);
  ExpSysDbgLock.ReadTransferCount = 0LL;
  *(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&ExpSysDbgLock.ThreadTimerDelay);
  _InterlockedExchange64((volatile __int64 *)&ExpSysDbgLock.ThreadTimerDelay, 1LL);
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
  result = ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&ExpSysDbgLock.OtherTransferCount);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Eu, 0xC0uLL, 0LL, 0LL, 0LL);
  return result;
}
