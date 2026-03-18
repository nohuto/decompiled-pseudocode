/*
 * XREFs of ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801A7F24
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z @ 0x1801A7F64 (--0CBaseExpression@@IEAA@PEAVCComposition@@@Z.c)
 */

CExpression *__fastcall CExpression::CExpression(CExpression *this, struct CComposition *a2)
{
  CExpression *v2; // rcx

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)v2 = &CExpression::`vftable';
  *((_QWORD *)v2 + 35) = 0LL;
  *((_QWORD *)v2 + 36) = 0LL;
  *((_QWORD *)v2 + 37) = 0LL;
  *((_QWORD *)v2 + 38) = 0LL;
  return v2;
}
