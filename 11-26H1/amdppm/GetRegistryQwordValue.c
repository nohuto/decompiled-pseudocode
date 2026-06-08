/*
 * XREFs of GetRegistryQwordValue @ 0x140024460
 * Callers:
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     memset @ 0x14000EA40 (memset.c)
 *     GetRegistryDwordValue @ 0x1400243B4 (GetRegistryDwordValue.c)
 */

__int64 __fastcall GetRegistryQwordValue(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v6; // [rsp+B8h] [rbp+67h] BYREF
  unsigned int v7; // [rsp+C0h] [rbp+6Fh] BYREF
  int v8; // [rsp+C4h] [rbp+73h]

  v8 = HIDWORD(a2);
  v7 = 0;
  v6 = 4294967288LL;
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[1]) = 292;
  v5[3] = &v6;
  v5[2] = L"Capabilities";
  LODWORD(v5[4]) = 184549376;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
              v5,
              0LL,
              0LL) < 0 )
  {
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"Capabilities",
      &v7);
    result = v7;
  }
  else
  {
    result = v6;
  }
  *a3 = result;
  return result;
}
