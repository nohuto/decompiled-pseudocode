/*
 * XREFs of ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180170FA4
 * Callers:
 *     ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1800BD4A0 (-HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityI.c)
 *     ?HandleAllowInputPanelMdmPolicyUpdated@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18015CE10 (-HandleAllowInputPanelMdmPolicyUpdated@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequ.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180483870 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180483A50 (-HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@.c)
 *     ?HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180483B40 (-HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRe.c)
 *     ?HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180483BF0 (-HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@S.c)
 *     ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1804840A0 (-IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z @ 0x180484140 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z @ 0x180485670 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180485A78 (-find@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v2; // rdi
  char v5; // bl
  _BYTE *v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = this + 100;
  AcquireSRWLockShared(this + 100);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find(
    &this[92],
    &v6,
    &v7);
  if ( v6 == this[93].Ptr )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return 0;
  }
  else
  {
    v5 = v6[20];
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return v5;
  }
}
