/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ChainInterfaces@UIVirtualDesktopAnimationSyncNotificationServicePrivate@@UIVirtualDesktopAnimationSyncNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180215868
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopAnimationSyncNotificationServicePrivate@@UIVirtualDesktopAnimationSyncNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802157F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802157F0.c)
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1802A1838 (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopAnimationSyncNotificationServicePrivate,IVirtualDesktopAnimationSyncNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( (*a2 != 1551202879
     || a2[1] != *(_DWORD *)&GUID_5c757a3f_6157_41b3_a760_926c0b131916.Data2
     || a2[2] != *(_DWORD *)GUID_5c757a3f_6157_41b3_a760_926c0b131916.Data4
     || a2[3] != *(_DWORD *)&GUID_5c757a3f_6157_41b3_a760_926c0b131916.Data4[4])
    && (*a2 != 232452824
     || a2[1] != *(_DWORD *)&GUID_0ddaf2d8_c38f_4638_95fc_fb9c6ddae52f.Data2
     || a2[2] != *(_DWORD *)GUID_0ddaf2d8_c38f_4638_95fc_fb9c6ddae52f.Data4
     || a2[3] != *(_DWORD *)&GUID_0ddaf2d8_c38f_4638_95fc_fb9c6ddae52f.Data4[4]) )
  {
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::CanCastTo(
             a1 + 8,
             a2,
             a3);
  }
  *a3 = a1;
  return 0LL;
}
