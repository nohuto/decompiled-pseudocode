/*
 * XREFs of ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800B6C10
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180075F98 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800B4F1C (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x1801F1580 (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801F622C (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18023A9B0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z @ 0x180306F70 (-GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803BCF74 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?TryGetTileIdForWindow@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@Z @ 0x180518230 (-TryGetTileIdForWindow@JointResize@@AEAA-AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B71B0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800B733C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800B7B7C (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetImmersiveAppIdFromWindow(CallerIdentity *this, HWND a2, unsigned __int16 **a3)
{
  const char *v5; // r9
  char *v6; // rax
  void *v7; // rdi
  unsigned int LastErrorFailHr; // ebx
  unsigned __int16 **v10; // r8
  const char *v11; // r9
  int WeakWindowAppId; // eax
  unsigned int v13; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  char *v17; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)a2 = 0LL;
  dwProcessId = 0;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x6C,
             (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
             v5);
  v6 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v7 = v6;
  v17 = v6;
  if ( ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr((wil::details *)(v6 + 1));
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v17);
    return LastErrorFailHr;
  }
  v16 = 0LL;
  if ( !(unsigned int)GetProcessUIContextInformation(v6, &v16) )
  {
    LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x72,
                        (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                        v11);
    CloseHandle(v7);
    return LastErrorFailHr;
  }
  if ( (_DWORD)v16 == 2
    && (WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(this, a2, v10), v13 = WeakWindowAppId, WeakWindowAppId < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
      (const char *)(unsigned int)WeakWindowAppId);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v17);
    return v13;
  }
  else
  {
    if ( !*(_QWORD *)a2 )
    {
      LastErrorFailHr = CallerIdentity::GetProcessAppId(v7, a2, v10);
      if ( (LastErrorFailHr & 0x80000000) != 0 )
      {
        CloseHandle(v7);
        return LastErrorFailHr;
      }
    }
    CloseHandle(v7);
    return 0LL;
  }
}
