/*
 * XREFs of ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z @ 0x1801A7F64
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801A7F24 (--0CExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CScrollAnimation@@IEAA@PEAVCComposition@@@Z @ 0x18020C100 (--0CScrollAnimation@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180218C90 (--0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18026B814 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CBaseExpression *__fastcall CBaseExpression::CBaseExpression(CBaseExpression *this, struct CComposition *a2)
{
  CBaseExpression *result; // rax

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  result = this;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_BYTE *)this + 216) |= 1u;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  return result;
}
