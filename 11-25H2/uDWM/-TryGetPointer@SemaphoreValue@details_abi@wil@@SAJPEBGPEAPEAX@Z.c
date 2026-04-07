/*
 * XREFs of ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18009F4A0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180082D1C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18009D470 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800763C0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetPointer(char *a1, void **a2, __int64 a3, bool *a4)
{
  int ValueInternal; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(a1, (__int64)a2, &v9, a4);
  v6 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    *a2 = (void *)(4 * v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x64, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6D, (__int64)"wil", (const char *)v6);
    return v6;
  }
}
