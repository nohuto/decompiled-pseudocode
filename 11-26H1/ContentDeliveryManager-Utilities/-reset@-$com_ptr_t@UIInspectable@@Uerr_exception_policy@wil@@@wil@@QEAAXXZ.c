/*
 * XREFs of ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18006BAE0
 * Callers:
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180065E54 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180065F08 (--$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherOptions@S.c)
 *     _lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator() @ 0x18008EC5C (_lambda_de7ca9b0ec13d6a85971aebf8330bbf3_--operator().c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18008EEE0 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x180090320 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x180090858 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800923E8 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800923E8.c)
 *     ??$GetActivationFactory@UIInspectable@@@wil@@YA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18009249C (--$GetActivationFactory@UIInspectable@@@wil@@YA-AV-$com_ptr_t@UIInspectable@@Uerr_exception_poli.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180094A5C (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     ??$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UILockScreenRegistrySettingProvider@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A29A8 (--$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA-AV-$com_ptr_.c)
 *     ??$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UISecondaryTile@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A57F4 (--$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA-AV-$com_ptr_t@UISecondaryTi.c)
 *     ??$ActivateInstance@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800AC94C (--$ActivateInstance@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Wind.c)
 *     ??$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@wil@@YA?AV?$com_ptr_t@UIXmlDocument@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800ACA00 (--$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@wil@@YA-AV-$com_ptr_t@UIXmlDocument@Dom.c)
 *     ?GetStartDefaultPins@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@PEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1800AF394 (-GetStartDefaultPins@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScre.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
