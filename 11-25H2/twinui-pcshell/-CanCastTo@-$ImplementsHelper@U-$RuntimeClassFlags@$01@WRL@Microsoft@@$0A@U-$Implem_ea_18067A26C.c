/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIAllUpViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18067A26C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18067B130 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18067B130.c)
 *     ?XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18067C958 (-XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801C9B78 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotif.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAllUpViewHost>>,IAllUpViewHostInternal>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // r10
  __int64 result; // rax
  const struct _GUID *v7; // r10
  _QWORD *v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r11d

  if ( InlineIsEqualGUID(a2, &GUID_389221b7_bf28_4d25_9501_b4491d822be1)
    || InlineIsEqualGUID(v2, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9) )
  {
    *v3 = v4;
    return 0LL;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>::CanCastTo(
             v4 + 8,
             v5,
             v3);
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( InlineIsEqualGUID(v7, &GUID_24d6236f_83b7_4abc_b7a9_082c901b9839) )
  {
    *v8 = v9 + 120;
    return 0LL;
  }
  return v10;
}
