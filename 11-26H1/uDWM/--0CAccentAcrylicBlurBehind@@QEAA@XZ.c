/*
 * XREFs of ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18008AFF8
 * Callers:
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800681AC (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180027638 (--0CSpriteVisual@@QEAA@XZ.c)
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 */

CAccentAcrylicBlurBehind *__fastcall CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(CAccentAcrylicBlurBehind *this)
{
  CAccentAcrylicBlurBehind *result; // rax

  CSpriteVisual::CSpriteVisual(this);
  CGraphicsResourceOwner::CGraphicsResourceOwner((CAccentAcrylicBlurBehind *)((char *)this + 184));
  *((_DWORD *)this + 52) = 0;
  *(_QWORD *)this = &CAccentAcrylicBlurBehind::`vftable'{for `CSpriteVisual'};
  *((_QWORD *)this + 23) = &CAccentAcrylicBlurBehind::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 27) = 0xBFF0000000000000uLL;
  result = this;
  *((_BYTE *)this + 224) = 0;
  return result;
}
