/*
 * XREFs of PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14082538C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140825080 (PerfDiagpProxyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x140824F9C (PerfDiagpInitializeLoggerInfo.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __fastcall PerfDiagpUpdatePerfDiagLoggerEnableFlags(int a1, __int64 a2)
{
  NTSTATUS result; // eax
  unsigned int v5; // ebx
  ULONG OutputBufferLength; // [rsp+20h] [rbp-79h]
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-69h] BYREF
  int v8[4]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v9; // [rsp+50h] [rbp-49h]
  _OWORD *v10; // [rsp+58h] [rbp-41h]
  int v11; // [rsp+60h] [rbp-39h]
  _OWORD Src[3]; // [rsp+B0h] [rbp+17h] BYREF

  ReturnLength[0] = 0;
  memset(Src, 0, sizeof(Src));
  memset_0(v8, 0, 0x70uLL);
  v8[2] = 32;
  v9 = a2;
  v10 = Src;
  v11 = 3;
  LODWORD(Src[0]) = 48;
  result = RtlpQueryRegistryValues(2, a1, (int)v8, 0, OutputBufferLength, 1);
  if ( result >= 0 )
  {
    if ( DWORD1(Src[0]) == 3 )
    {
      v5 = Src[0];
      if ( LODWORD(Src[0]) <= 0x28 )
      {
        memmove((void *)&stru_140F042A0.Queue, (char *)Src + 8, LODWORD(Src[0]));
        PerfDiagpInitializeLoggerInfo(1, v5 >> 2);
        return NtTraceControl(
                 EtwUpdateLoggerCode,
                 (PVOID)&stru_140F042A0.StackLimit,
                 (ULONG)stru_140F042A0.StackLimit,
                 (PVOID)&stru_140F042A0.StackLimit,
                 (ULONG)stru_140F042A0.StackLimit,
                 ReturnLength);
      }
      else
      {
        return -1073741789;
      }
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
