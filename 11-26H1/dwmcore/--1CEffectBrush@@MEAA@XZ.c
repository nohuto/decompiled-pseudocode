/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x1800FB84C
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x1800FB800 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x18021180C (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18021B9AC (--1-$vector_facade@PEAVCBrush@@V-$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail.c)
 */

void __fastcall CEffectBrush::~CEffectBrush(CEffectBrush *this)
{
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *((_QWORD *)this + 19) = &CEffectBrush::`vftable';
  CEffectBrush::ReleaseResources(this);
  detail::vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>::~vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>((char *)this + 216);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 168);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 20);
  CEffectBrushGeneratedT<CEffectBrush,CBrush>::~CEffectBrushGeneratedT<CEffectBrush,CBrush>(this);
}
