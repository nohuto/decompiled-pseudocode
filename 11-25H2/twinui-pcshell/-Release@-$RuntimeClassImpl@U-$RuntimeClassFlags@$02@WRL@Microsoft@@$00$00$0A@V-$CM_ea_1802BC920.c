/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802BC920
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180687C80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CM_ea_180687C80.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180687C90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CM_ea_180687C90.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@WIA@EAAKXZ @ 0x180687CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CM_ea_180687CA0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@WII@EAAKXZ @ 0x180687CC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CM_ea_180687CC0.c)
 * Callees:
 *     ?InternalRelease@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802BC974 (-InternalRelease@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CMultit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>,IVirtualDesktopSwitcherViewHostInternal>::Release()
{
  unsigned int v0; // ebx
  __int64 v1; // r10

  v0 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>,IVirtualDesktopSwitcherViewHostInternal>::InternalRelease();
  if ( !v0 )
  {
    if ( v1 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 48LL))(v1, v0 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v0;
}
