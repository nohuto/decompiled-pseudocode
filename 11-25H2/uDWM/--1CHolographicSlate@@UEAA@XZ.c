/*
 * XREFs of ??1CHolographicSlate@@UEAA@XZ @ 0x1800B69F8
 * Callers:
 *     ??_ECHolographicSlate@@UEAAPEAXI@Z @ 0x1800B6A30 (--_ECHolographicSlate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAXXZ @ 0x1800B6E70 (-UnbindWindow@CHolographicSlate@@AEAAXXZ.c)
 */

void __fastcall CHolographicSlate::~CHolographicSlate(CHolographicSlate *this)
{
  *(_QWORD *)this = &CHolographicSlate::`vftable';
  CHolographicSlate::UnbindWindow(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  CBaseObject::~CBaseObject(this);
}
