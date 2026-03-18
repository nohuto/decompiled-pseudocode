/*
 * XREFs of ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800787AC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180222AEC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x180078818 (--$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetPointer(const unsigned __int16 *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v3 = wil::details_abi::SemaphoreValue::TryGetValue<unsigned __int64>(a1, &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = (void *)(4 * v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6D, (unsigned int)"wil", (const char *)(unsigned int)v3, v6);
    return v4;
  }
}
