/*
 * XREFs of ??1CVolumeSoftware@@EEAA@XZ @ 0x18011761C
 * Callers:
 *     ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x1801177C0 (--_ECVolumeSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x18001C238 (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 */

void __fastcall CVolumeSoftware::~CVolumeSoftware(CVolumeSoftware *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  v2 = *((_QWORD *)this + 38);
  if ( v2 )
    std::default_delete<_RecurringTask>::operator()((__int64)this, v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 31);
  CVolumeControlBase::~CVolumeControlBase(this);
}
