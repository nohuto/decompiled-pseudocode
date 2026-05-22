/*
 * XREFs of ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x180043114
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x1800D4F58 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180044D10 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x18008FC98 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 */

// Hidden C++ exception states: #wind=11
SpatialRimDeviceCollection *__fastcall SpatialRimDeviceCollection::SpatialRimDeviceCollection(
        SpatialRimDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3,
        struct IMessageSession *a4)
{
  _QWORD *v7; // rax

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &SpatialRimDeviceCollection::`vftable';
  *((_QWORD *)this + 345) = a4;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 345);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 2768), 0, 0);
  *((_BYTE *)this + 2808) = 0;
  *((_QWORD *)this + 352) = &Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::`vftable';
  *((_QWORD *)this + 353) = 0LL;
  *((_QWORD *)this + 354) = 0LL;
  *((_DWORD *)this + 710) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 2848), 0, 0);
  *((_QWORD *)this + 361) = 0LL;
  *((_QWORD *)this + 362) = 0LL;
  *((_BYTE *)this + 2904) = 0;
  *((_DWORD *)this + 728) = 0;
  *((_QWORD *)this + 365) = 0LL;
  *((_QWORD *)this + 366) = 0LL;
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(40LL);
  *v7 = v7;
  v7[1] = v7;
  *((_QWORD *)this + 365) = v7;
  *((_QWORD *)this + 367) = 0LL;
  *((_QWORD *)this + 368) = 0LL;
  *((_QWORD *)this + 369) = 0LL;
  *((_QWORD *)this + 370) = 7LL;
  *((_QWORD *)this + 371) = 8LL;
  *((_DWORD *)this + 728) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 367,
    0x10uLL,
    *((_QWORD *)this + 365));
  *((_QWORD *)this + 372) = 0LL;
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    (char *)this + 2976,
    0LL);
  *((_QWORD *)this + 3) = a3;
  return this;
}
