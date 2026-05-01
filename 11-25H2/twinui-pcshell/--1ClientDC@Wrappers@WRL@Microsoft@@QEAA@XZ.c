/*
 * XREFs of ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18065EFB8
 * Callers:
 *     s_OnMeasureItem @ 0x180660D14 (s_OnMeasureItem.c)
 *     _s_OnMeasureItem_::_1_::dtor$0 @ 0x1806DD038 (_s_OnMeasureItem_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalClose@ClientDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18065F590 (-InternalClose@ClientDC@Wrappers@WRL@Microsoft@@MEAA_NXZ.c)
 */

void __fastcall Microsoft::WRL::Wrappers::ClientDC::~ClientDC(Microsoft::WRL::Wrappers::ClientDC *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::ClientDC::`vftable';
  Microsoft::WRL::Wrappers::ClientDC::InternalClose(this);
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ClientDCTraits>::`vftable';
}
