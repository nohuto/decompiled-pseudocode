/*
 * XREFs of ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18065EFEC
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x18065FB48 (s_DrawThemeTextPPIAware.c)
 *     s_OnDrawItemHelper @ 0x180660190 (s_OnDrawItemHelper.c)
 *     _s_DrawThemeTextPPIAware_::_1_::dtor$0 @ 0x1806DCFF0 (_s_DrawThemeTextPPIAware_--_1_--dtor$0.c)
 *     _s_OnDrawItemHelper_::_1_::dtor$0 @ 0x1806DD026 (_s_OnDrawItemHelper_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18065F5C0 (-InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ.c)
 */

void __fastcall Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC(Microsoft::WRL::Wrappers::CompatibleDC *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::CompatibleDC::`vftable';
  Microsoft::WRL::Wrappers::CompatibleDC::InternalClose(this);
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ClientDCTraits>::`vftable';
}
