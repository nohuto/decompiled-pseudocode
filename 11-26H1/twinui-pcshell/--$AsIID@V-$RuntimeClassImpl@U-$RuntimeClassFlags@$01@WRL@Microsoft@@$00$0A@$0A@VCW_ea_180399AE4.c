/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180399AE4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18039C060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18039C060.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18039AA70 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIShouldSwitchToDesktop.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,IUpdateViewValueSet,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  int CanCastTo; // ebx
  __int64 v10; // r9
  __int64 v11; // r10

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
    {
      *v7 = v8;
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v6, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
      {
        *v7 = v10;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::CanCastTo(
                      v10 + 8,
                      v11);
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)CanCastTo;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
