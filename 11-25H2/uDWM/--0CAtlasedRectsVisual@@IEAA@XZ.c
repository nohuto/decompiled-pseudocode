/*
 * XREFs of ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001167C
 * Callers:
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x1800115A8 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x180011DBC (--0CButton@@IEAA@XZ.c)
 *     ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x1800131E8 (-Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800086EC (--0CContainerVisual@@IEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  __int64 v2; // rdx

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)this = &CAtlasedRectsVisual::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 200, 0LL, 0);
  *((_QWORD *)this + 29) &= v2;
  return this;
}
