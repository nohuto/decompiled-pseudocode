/*
 * XREFs of GetData @ 0x1401CD670
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 GetData()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( (int)PsTlsGetValue(0LL, &v3) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1186);
    goto LABEL_5;
  }
  result = v3;
  if ( !v3 )
  {
    if ( PsGetCurrentThreadWin32Thread(v1, v0) )
LABEL_5:
      KeBugCheckEx(0x164u, 0x2CuLL, 0LL, 0LL, 0LL);
    return v3;
  }
  return result;
}
