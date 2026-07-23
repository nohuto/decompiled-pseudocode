/*
 * XREFs of IopLiveDumpTraceIoCaptureLiveDumpEntry @ 0x1405DA340
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405DA220 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceIoCaptureLiveDumpEntry(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const wchar_t *v6[5]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7[5]; // [rsp+48h] [rbp-38h] BYREF

  v7[1] = a2;
  v6[0] = L"BugcheckCode";
  v7[2] = a3;
  v6[1] = L"BugCheckParameter1";
  v7[3] = a4;
  v6[2] = L"BugCheckParameter2";
  v6[3] = L"BugCheckParameter3";
  v6[4] = L"BugCheckParameter4";
  v7[0] = a1;
  v7[4] = a5;
  return IopLiveDumpTraceEventGeneric(L"IopCaptureLiveDumpEntry", 5u, v6, v7);
}
