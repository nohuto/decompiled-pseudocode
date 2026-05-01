/*
 * XREFs of ??4_variant_t@@QEAAAEAV0@AEBV0@@Z @ 0x1802C8304
 * Callers:
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x1801F5454 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803E79EC (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802DEAD4 (-_com_issue_error@@YAXJ@Z.c)
 */

VARIANTARG *__fastcall _variant_t::operator=(VARIANTARG *a1, const VARIANTARG *a2)
{
  HRESULT v3; // eax

  v3 = VariantCopy(a1, a2);
  if ( v3 < 0 )
    _com_issue_error((char *)(unsigned int)v3);
  return a1;
}
