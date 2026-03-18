/*
 * XREFs of ??1CCommonRenderingEffect@@MEAA@XZ @ 0x18001B5E4
 * Callers:
 *     ??_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z @ 0x180187650 (--_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 */

void __fastcall CCommonRenderingEffect::~CCommonRenderingEffect(CCommonRenderingEffect *this)
{
  CDrawListBitmap *v1; // rbx
  __int64 v2; // rdi

  v1 = (CCommonRenderingEffect *)((char *)this + 64);
  v2 = 2LL;
  do
  {
    v1 = (CDrawListBitmap *)((char *)v1 - 24);
    CDrawListBitmap::~CDrawListBitmap(v1);
    --v2;
  }
  while ( v2 );
}
