/*
 * XREFs of ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18023EC5C
 * Callers:
 *     ??_EBamoPeer@dataprovider_AutoBamos@@MEAAPEAXI@Z @ 0x18023EE10 (--_EBamoPeer@dataprovider_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_EBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x18023EE50 (--_EBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 11) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>((Microsoft::BamoImpl::BamoImplObject **)this + 3);
}
