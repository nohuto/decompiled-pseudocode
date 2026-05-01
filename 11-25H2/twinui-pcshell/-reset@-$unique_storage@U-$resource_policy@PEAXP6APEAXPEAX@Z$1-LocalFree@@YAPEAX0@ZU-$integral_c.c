/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1803B43B4
 * Callers:
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x18009ADFC (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802CFCC8 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalF.c)
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1803A699C (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1803A79F8 (-EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803AFDC0 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x180337494 (-close_reset@-$close_invoke_helper@$00P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZPEAX@details@wil@@SAXP.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( v4 )
    wil::details::close_invoke_helper<1,void * (*)(void *),&void * LocalFree(void *),void *>::close_reset(v4);
  *a1 = a2;
}
