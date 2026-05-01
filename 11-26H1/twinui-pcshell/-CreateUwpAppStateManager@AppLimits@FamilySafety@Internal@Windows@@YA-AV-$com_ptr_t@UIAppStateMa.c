/*
 * XREFs of ?CreateUwpAppStateManager@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18017CC04
 * Callers:
 *     ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x18017CA40 (--0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilyS.c)
 * Callees:
 *     ??$MakeOrThrow@VUwpAppStateManager@@$$V@wil@@YA?AV?$ComPtr@VUwpAppStateManager@@@WRL@Microsoft@@XZ @ 0x18017CF20 (--$MakeOrThrow@VUwpAppStateManager@@$$V@wil@@YA-AV-$ComPtr@VUwpAppStateManager@@@WRL@Microsoft@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C14E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager.c)
 */

_QWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::CreateUwpAppStateManager(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  v2 = (__int64 *)wil::MakeOrThrow<UwpAppStateManager,>(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release();
  }
  return a1;
}
