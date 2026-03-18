/*
 * XREFs of ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1801369EC
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18013686C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1801E01E0 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi

  v1 = (__int64 *)((char *)this + 216);
  v2 = 7LL;
  do
  {
    ReleaseInterface<ID2D1Geometry>(v1++);
    --v2;
  }
  while ( v2 );
}
