/*
 * XREFs of IopLiveDumpTraceRunPageCountLoop @ 0x1405DA404
 * Callers:
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CFBBC (IopLiveDumpAllocateFromIOSpace.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405DA220 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceRunPageCountLoop(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  const wchar_t *v6[5]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7[5]; // [rsp+48h] [rbp-38h] BYREF

  v7[3] = a4;
  v6[0] = L"RunCountIndex";
  v6[1] = L"RunPageLoopCount";
  v6[2] = L"RunPageCount";
  v6[3] = L"MdlPageCount";
  v6[4] = L"NextRunBasePage";
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  v7[4] = a5;
  return IopLiveDumpTraceEventGeneric(L"RunPageCountLoop", 5u, v6, v7);
}
