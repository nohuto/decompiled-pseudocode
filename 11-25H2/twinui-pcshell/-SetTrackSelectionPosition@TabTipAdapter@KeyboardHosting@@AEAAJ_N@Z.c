/*
 * XREFs of ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1800A7148
 * Callers:
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800945E4 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800A7510 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18014CFF0 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnCoreKeyboardSpeechProcessorActiveChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerSpeechProcessorActiveChangedEventArgs@45678@@Z @ 0x180239B40 (-OnCoreKeyboardSpeechProcessorActiveChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboar.c)
 *     ?OnAccessibilityKeyboardRequestHide@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18046C82C (-OnAccessibilityKeyboardRequestHide@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18046C8C8 (-OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs@45678@@Z @ 0x18046C9A0 (-OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUI.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x18046D610 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18046E230 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x18046E4F4 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEA_N@Z @ 0x18046EC30 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x18046EDC8 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1800A726C (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800A733C (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?InvokeIsAnyViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x1801F39A4 (-InvokeIsAnyViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180290A68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180290D38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@QEAAX_NW4Report.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // si
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v10; // eax
  unsigned int v11; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v13; // [rsp+40h] [rbp+8h] BYREF
  char v14; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  v5 = 0;
  LOBYTE(a2) = 1;
  LOBYTE(a3) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbSh1>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MTestAbSh1>::GetImpl'::`2'::impl,
    a2,
    a3);
  v14 = 0;
  wil::wnf_query_nothrow<bool>(&WNF_SHEL_SHELLHANDWRITING_ENABLED, &v13, &v14);
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShMUS>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MTestAbShMUS>::GetImpl'::`2'::impl,
    v6);
  if ( IsActiveSessionCountLimited() )
    v5 = v14 != 0;
  if ( v3
    || *((_BYTE *)this + 450)
    || *((_BYTE *)this + 451)
    || *((_BYTE *)this + 452)
    || KeyboardHosting::TabTipAdapter::InvokeIsAnyViewShown(this)
    || *((_BYTE *)this + 448)
    || v5 )
  {
    v5 = 1;
  }
  if ( v5 == *((_BYTE *)this + 453) )
    return 0LL;
  LOBYTE(v8) = v5;
  LOBYTE(v7) = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 4) + 624LL))(
          *((_QWORD *)this + 4),
          v7,
          v8);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *((_BYTE *)this + 453) = v5;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x712,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
