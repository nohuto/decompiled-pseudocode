/*
 * XREFs of ??4_variant_t@@QEAAAEAV0@AEBV0@@Z @ 0x1802BF854
 * Callers:
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x1801EB40C (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803F131C (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D77C4 (-_com_issue_error@@YAXJ@Z.c)
 */

VARIANTARG *__fastcall _variant_t::operator=(VARIANTARG *a1, const VARIANTARG *a2)
{
  HRESULT v3; // eax

  v3 = VariantCopy(a1, a2);
  if ( v3 < 0 )
    _com_issue_error((char *)(unsigned int)v3);
  return a1;
}
