/*
 * XREFs of ??1?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@MEAA@XZ @ 0x180218378
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800FB84C (--1CEffectBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CEffectBrushGeneratedT<CEffectBrush,CBrush>::~CEffectBrushGeneratedT<CEffectBrush,CBrush>(
        struct CResource **this)
{
  struct CResource *v2; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  this[14] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  this[15] = 0LL;
  v2 = this[16];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (this[18] - v2) & 0xFFFFFFFFFFFFFFFCuLL);
    this[16] = 0LL;
    this[17] = 0LL;
    this[18] = 0LL;
  }
  CBrush::~CBrush((CBrush *)this);
}
