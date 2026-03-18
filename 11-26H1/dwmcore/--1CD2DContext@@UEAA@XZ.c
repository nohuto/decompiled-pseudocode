/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x180135878
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x180134D3C (--1CD3DDevice@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x180299010 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18013686C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this)
{
  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 320);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 39);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 272);
  CDrawListBatchManager::~CDrawListBatchManager((CD2DContext *)((char *)this + 8));
}
