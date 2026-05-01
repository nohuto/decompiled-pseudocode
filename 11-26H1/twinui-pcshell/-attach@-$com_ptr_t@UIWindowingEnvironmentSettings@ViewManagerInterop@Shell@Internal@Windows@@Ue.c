/*
 * XREFs of ?attach@?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018BC8C
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800CE8C0 (-ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEn.c)
 *     ??0ComponentCreator@@QEAA@XZ @ 0x18018BAEC (--0ComponentCreator@@QEAA@XZ.c)
 *     ??$?4VLegacyWindowWrapper@@X@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@@Z @ 0x1801CF0F4 (--$-4VLegacyWindowWrapper@@X@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wi.c)
 *     ??4?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180413574 (--4-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180417410 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
