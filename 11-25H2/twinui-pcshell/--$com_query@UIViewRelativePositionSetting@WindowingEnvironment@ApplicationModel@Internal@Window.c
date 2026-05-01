/*
 * XREFs of ??$com_query@UIViewRelativePositionSetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEBV?$ComPtr@UISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIViewRelativePositionSetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEBV?$ComPtr@UISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180406CD0
 * Callers:
 *     ?AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Z @ 0x1804091A0 (-AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU-$IVectorView@PEAUISetti.c)
 *     ?AddWindowingEnvironmentSettings@UwpWindowingEnvironmentSettings@@UEAAXPEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z@std@@@Z @ 0x180417A90 (-AddWindowingEnvironmentSettings@UwpWindowingEnvironmentSettings@@UEAAXPEAU-$IVectorView@PEAUISe.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_query<Windows::Internal::ApplicationModel::WindowingEnvironment::IViewRelativePositionSetting,Microsoft::WRL::ComPtr<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting> const &>(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  v4 = (**v3)(v3, &GUID_41920a3f_6122_4d5c_a075_7fc79d9f7f2d, a1);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a1;
}
