/*
 * XREFs of ?EnsureImmersiveShell@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C8980
 * Callers:
 *     ?EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C89F4 (-EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1803C8F98 (-GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x1803C9110 (-GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803C9248 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?GetStartSize@SearchAppDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1803C960C (-GetStartSize@SearchAppDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CBE50 (-RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CE098 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::EnsureImmersiveShell(SearchAppDesktopExperienceView *this)
{
  LPVOID *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ppv = (LPVOID *)((char *)this + 96);
  if ( *((_QWORD *)this + 12) )
    return 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               ppv);
  v3 = Instance;
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40E,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)Instance);
  return v3;
}
