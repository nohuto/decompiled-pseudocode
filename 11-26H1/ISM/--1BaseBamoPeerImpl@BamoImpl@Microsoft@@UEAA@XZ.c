/*
 * XREFs of ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180026B70
 * Callers:
 *     ??_GBamoPeer@MPCManagerBamo_AutoBamos@@MEAAPEAXI@Z @ 0x180026B30 (--_GBamoPeer@MPCManagerBamo_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_GBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1800B6170 (--_GBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 11) - v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>((char *)this + 24);
}
