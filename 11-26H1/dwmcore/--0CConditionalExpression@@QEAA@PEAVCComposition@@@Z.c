/*
 * XREFs of ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18026B814
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z @ 0x1801A7F64 (--0CBaseExpression@@IEAA@PEAVCComposition@@@Z.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::CConditionalExpression(
        CConditionalExpression *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CBaseExpression::CBaseExpression(this, a2);
  *(_DWORD *)(v2 + 284) = 0x7FFFFFFF;
  *(_DWORD *)(v2 + 280) = -1;
  *(_QWORD *)v2 = &CConditionalExpression::`vftable';
  *(_QWORD *)(v2 + 288) = 0LL;
  *(_QWORD *)(v2 + 296) = 0LL;
  *(_QWORD *)(v2 + 304) = 0LL;
  *(_QWORD *)(v2 + 312) = 0LL;
  *(_QWORD *)(v2 + 320) = 0LL;
  *(_QWORD *)(v2 + 328) = 0LL;
  *(_QWORD *)(v2 + 336) = 0LL;
  *(_DWORD *)(v2 + 348) = *(_DWORD *)(v2 + 284);
  return (CConditionalExpression *)v2;
}
