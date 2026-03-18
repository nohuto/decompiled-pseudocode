/*
 * XREFs of DbgkLkmdUnregisterCallback @ 0x14078B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140435D80 (ExDereferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x140463604 (ExCompareExchangeCallBack.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdUnregisterCallback(__int64 a1, signed __int64 a2)
{
  unsigned int i; // edi
  signed __int64 *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx

  for ( i = 0; i < 8; ++i )
  {
    v4 = (signed __int64 *)&stru_140E3E928.SavedApcState.ApcListHead[i + 2];
    v5 = ExReferenceCallBackBlock(v4, a2);
    v6 = v5;
    if ( v5 )
    {
      if ( a1 == v5[1].Count && ExCompareExchangeCallBack(v4, 0LL, (__int64)v5) )
      {
        ExDereferenceCallBackBlock(v4, v6);
        ExWaitForRundownProtectionRelease(v6);
        ExFreePoolWithTag(v6, 0);
        return 0LL;
      }
      ExDereferenceCallBackBlock(v4, v6);
    }
  }
  return 3221226021LL;
}
