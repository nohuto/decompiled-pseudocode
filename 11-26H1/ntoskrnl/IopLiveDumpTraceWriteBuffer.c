/*
 * XREFs of IopLiveDumpTraceWriteBuffer @ 0x1405DA4AC
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x140346114 (IopLiveDumpWriteBuffer.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405DA220 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceWriteBuffer(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4)
{
  const wchar_t *v5[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6[4]; // [rsp+40h] [rbp-38h] BYREF

  v6[0] = a1;
  v5[0] = L"Buffer";
  v6[2] = a3;
  v5[1] = L"Length";
  v5[2] = L"ByteOffset";
  v5[3] = L"SkipEncryption";
  v6[1] = a2;
  v6[3] = a4;
  return IopLiveDumpTraceEventGeneric(L"IopLiveDumpWriteBuffer", 4u, v5, v6);
}
