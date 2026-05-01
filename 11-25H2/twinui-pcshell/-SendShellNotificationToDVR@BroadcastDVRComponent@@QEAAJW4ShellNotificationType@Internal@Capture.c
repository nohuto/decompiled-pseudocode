/*
 * XREFs of ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800B2D18
 * Callers:
 *     ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x1800B1750 (-ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800B3CA0 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     _lambda_398c59650b4848a9090526bc8733f68c_::operator() @ 0x1802044E4 (_lambda_398c59650b4848a9090526bc8733f68c_--operator().c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x180238D58 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     ?OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z @ 0x1803174E0 (-OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x1800B2FBC (-BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800B325C (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?IsGameBarShowStartupPanelEnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800B3418 (-IsGameBarShowStartupPanelEnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1801C7B98 (-LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRAc.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180315D24 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BroadcastDVRComponent::SendShellNotificationToDVR(
        __int64 a1,
        int a2,
        HWND a3,
        unsigned int a4,
        bool a5,
        _BYTE *a6,
        struct BroadcastDVRActiveAppInfo *a7)
{
  unsigned __int64 v9; // rsi
  bool v11; // r14
  int ActivationFactory; // ebx
  const unsigned __int16 *v13; // rdx
  BroadcastDVRComponent *v14; // rcx
  BroadcastDVRComponent *v15; // rcx
  __int64 v16; // rcx
  HSTRING v18; // rbx
  unsigned int v19; // r8d
  unsigned int v20; // [rsp+40h] [rbp-51h] BYREF
  __int16 v21; // [rsp+44h] [rbp-4Dh]
  __int64 v22; // [rsp+48h] [rbp-49h] BYREF
  bool v23[8]; // [rsp+50h] [rbp-41h]
  struct BroadcastDVRActiveAppInfo *v24; // [rsp+58h] [rbp-39h]
  _BYTE v25[8]; // [rsp+60h] [rbp-31h] BYREF
  HSTRING string; // [rsp+68h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-21h] BYREF

  v20 = a4;
  v9 = a2;
  v24 = a7;
  v22 = 0LL;
  v11 = 0;
  ActivationFactory = 0;
  *(_DWORD *)v23 = a4 & 1;
  if ( BroadcastDVRComponent::IsGameDVREnabled((BroadcastDVRComponent *)a1)
    && ((unsigned int)(v9 - 12) <= 0x14
     || (*(_BYTE *)(a1 + 433) || *a6)
     && (unsigned int)(v9 - 1) <= 2
     && (!*(_DWORD *)(a1 + 436) || *(_BYTE *)(a1 + 434))
     && (!*(_DWORD *)(a1 + 440) || *(_BYTE *)(a1 + 435))) )
  {
    v11 = 1;
  }
  if ( v9 >= 0x21 )
    v13 = L"UNKNOWN";
  else
    v13 = off_1806EB3B0[v9];
  GameDVRTraceProvider::BroadcastDVRComponent_SendShellNotificationToDVR(v9, v13, a3, v23[0], a5, v11, a4);
  if ( v11 )
  {
    if ( WindowsCreateStringReference(L"Windows.Media.Capture.Internal.AppCaptureShell", 0x2Eu, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v18 = string;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    ActivationFactory = RoGetActivationFactory(v18, &GUID_1fc4ea77_38de_44ba_8dff_74ba9b15674d, &v22);
    if ( ActivationFactory >= 0 )
    {
      *a6 = 1;
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD, _QWORD))(*(_QWORD *)v22 + 56LL))(
                            v22,
                            a3,
                            v20,
                            (unsigned int)v9);
    }
    v19 = `wil::Feature<__WilFeatureTraits_Feature_UWPGameBar>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_UWPGameBar>::GetImpl'::`2'::impl & 4) == 0 )
    {
      *(_QWORD *)v23 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UWPGameBar>::GetCachedFeatureEnabledState(
                                    &`wil::Feature<__WilFeatureTraits_Feature_UWPGameBar>::GetImpl'::`2'::impl,
                                    v25);
      v19 = *(_DWORD *)v23;
    }
    v20 = 0;
    v21 = 3;
    wil::details::ReportUsageToService(
      (__int64)&unk_18089D960,
      0xCF8F1Cu,
      (v19 >> 10) & 1,
      (v19 >> 11) & 1,
      (__int64)&v20,
      1u,
      3);
  }
  if ( BroadcastDVRComponent::IsGameDVREnabled((BroadcastDVRComponent *)a1)
    && BroadcastDVRComponent::IsGameBarShowStartupPanelEnabled(v14)
    && a3
    && a5
    && (_DWORD)v9 == 2 )
  {
    *a6 = 1;
    ActivationFactory = BroadcastDVRComponent::LaunchGameOverlayWithStartupTipsFlag(v15, a3, v24);
  }
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)ActivationFactory;
}
