/*
 * XREFs of ??1GuidedSnapAssistControl@@QEAA@XZ @ 0x180582DF4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VGuidedSnapAssistControl@@@std@@EEAAXXZ @ 0x180584E90 (-_Destroy@-$_Ref_count_obj2@VGuidedSnapAssistControl@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall GuidedSnapAssistControl::~GuidedSnapAssistControl(GuidedSnapAssistControl *this)
{
  std::_Ref_count_base *v2; // rcx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 4);
  if ( *((_QWORD *)this + 3) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 3);
  if ( *((_QWORD *)this + 2) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 2);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
