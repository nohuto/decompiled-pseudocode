/*
 * XREFs of ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180063490
 * Callers:
 *     ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180063300 (-OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007AB64 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CD2E0 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z @ 0x1800CDB10 (-OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z.c)
 *     ?OnGamepadMouseModeEnabledChanged@GameControllerRawInputProvider@@UEAAX_N@Z @ 0x1800CDB30 (-OnGamepadMouseModeEnabledChanged@GameControllerRawInputProvider@@UEAAX_N@Z.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800CE010 (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAKAEA_N@ISMTracing@@SAXAEAK00AEBK0000AEA_N@Z @ 0x1800CD21C (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAKAEA_N@ISMTraci.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix@@@details@wil@@QEAA_NXZ @ 0x1800CE0CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_Li.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall GameControllerRawInputProvider::UpdateFocusPids(GameControllerRawInputProvider *this)
{
  char IsEnabled; // al
  unsigned int *v3; // r14
  DWORD CurrentProcessId; // edx
  __int64 v5; // rcx
  void *v6; // rcx
  const char *v7; // r9
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  unsigned int v14; // [rsp+90h] [rbp+38h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+40h] BYREF
  DWORD InBuffer; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+50h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::GetImpl'::`2'::impl);
  v3 = (unsigned int *)((char *)this + 160);
  CurrentProcessId = *((_DWORD *)this + 40);
  if ( IsEnabled )
  {
    if ( !CurrentProcessId )
    {
      CurrentProcessId = *((_DWORD *)this + 42);
      if ( !CurrentProcessId )
      {
        CurrentProcessId = *((_DWORD *)this + 41);
        if ( !CurrentProcessId )
        {
          if ( *((_BYTE *)this + 176) )
          {
            CurrentProcessId = GetCurrentProcessId();
            goto LABEL_11;
          }
          goto LABEL_10;
        }
      }
    }
  }
  else if ( !CurrentProcessId )
  {
    CurrentProcessId = *((_DWORD *)this + 42);
    if ( !CurrentProcessId )
    {
      CurrentProcessId = *((_DWORD *)this + 41);
      if ( !CurrentProcessId )
LABEL_10:
        CurrentProcessId = *((_DWORD *)this + 39);
    }
  }
LABEL_11:
  InBuffer = CurrentProcessId;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  v6 = (void *)*((_QWORD *)this + 10);
  if ( v6 != (void *)-1LL && v6 && !DeviceIoControl(v6, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x395,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             v7);
  v9 = *v3;
  if ( !*v3 )
    v9 = *((_DWORD *)this + 39);
  v15 = v9;
  v10 = RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v15, 4LL);
  if ( v10 < 0 )
  {
    v11 = 945LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             (const char *)(unsigned int)v10,
             0);
  }
  v12 = *((_DWORD *)this + 42);
  if ( !v12 )
    v12 = *((_DWORD *)this + 41);
  if ( *v3 )
    v12 = 0;
  v14 = v12;
  v17 = *((_DWORD *)this + 43);
  if ( v12 != v17 )
  {
    v10 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v14, 4LL);
    if ( v10 < 0 )
    {
      v11 = 973LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontr"
                             "ollerrawinputprovider.cpp",
               (const char *)(unsigned int)v10,
               0);
    }
    *((_DWORD *)this + 43) = v14;
  }
  ISMTracing::GameControllerRawInputProvider_UpdateFocusPids<unsigned long &,unsigned long &,unsigned long &,unsigned long const &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,bool &>(
    (unsigned int *)this + 39,
    (unsigned int *)this + 40,
    (unsigned int *)this + 41,
    &v17,
    &InBuffer,
    &v15,
    &v14,
    (unsigned int *)this + 42,
    (bool *)this + 176);
  return 0;
}
