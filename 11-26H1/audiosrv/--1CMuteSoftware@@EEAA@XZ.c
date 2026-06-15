/*
 * XREFs of ??1CMuteSoftware@@EEAA@XZ @ 0x180108A20
 * Callers:
 *     ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x180108D10 (--_ECMuteSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x18001C238 (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 */

void __fastcall CMuteSoftware::~CMuteSoftware(CMuteSoftware *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CMuteSoftware::`vftable';
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    std::default_delete<_RecurringTask>::operator()((__int64)this, v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 6);
  CMuteControlBase::~CMuteControlBase((void **)this);
}
