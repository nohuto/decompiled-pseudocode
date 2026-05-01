/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EFF10
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800C3A48 (--$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@UEAAKXZ @ 0x1800EFF00 (-Release@CPeopleBarFlyoutExperienceManager@@UEAAKXZ.c)
 *     ??1?$ComPtr@VCPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180216274 (--1-$ComPtr@VCPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180381DB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeo_ea_180381DB0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180381DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeo_ea_180381DC0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180381DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeo_ea_180381DD0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180381DE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeo_ea_180381DE0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180381DF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeo_ea_180381DF0.c)
 * Callees:
 *     ?DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800F0544 (-DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v5; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 - 1, v1);
    if ( v5 == v1 )
      goto LABEL_4;
  }
  v3 = Microsoft::WRL::Details::StrongReference::DecrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
LABEL_4:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
