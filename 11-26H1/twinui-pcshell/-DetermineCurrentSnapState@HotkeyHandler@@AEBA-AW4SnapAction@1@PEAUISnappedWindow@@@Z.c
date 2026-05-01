/*
 * XREFs of ?DetermineCurrentSnapState@HotkeyHandler@@AEBA?AW4SnapAction@1@PEAUISnappedWindow@@@Z @ 0x1805AE82C
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AF390 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18016D02C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B54D0 (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyHandler::DetermineCurrentSnapState(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  struct IImmersiveMonitor *v6; // rdx
  int v7; // eax
  int SnapRegionAnchorLocations; // eax
  float v9; // xmm2_4
  int v10; // eax
  bool v11; // cc
  SnapRectHelpers *v12; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v14[4]; // [rsp+38h] [rbp-18h] BYREF

  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2) )
    return 17LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 104LL))(a2) )
    return 16LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
  if ( !(unsigned int)IsWindowArranged(v5) )
    return 15LL;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 48LL))(a2, v14);
  v13 = 0LL;
  (*(void (__fastcall **)(__int64, SnapRectHelpers **))(*(_QWORD *)a2 + 64LL))(a2, &v12);
  if ( (*(int (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)v12 + 88LL))(v12, &v13) >= 0 )
  {
    v7 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(v12, v6);
    SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(v14, &v13, v7);
    v9 = (float)(v14[2] - v14[0]) / (float)(DWORD2(v13) - v13);
    if ( SnapRegionAnchorLocations <= 10 )
    {
      switch ( SnapRegionAnchorLocations )
      {
        case 10:
          v3 = 13;
          goto LABEL_35;
        case 3:
          v3 = 1;
          goto LABEL_35;
        case 5:
          v3 = 10;
          goto LABEL_35;
        case 6:
          v3 = 7;
          goto LABEL_35;
        case 7:
          LOBYTE(v3) = v9 <= 0.34999999;
          v3 += 8;
          goto LABEL_35;
        case 9:
          v3 = 3;
          goto LABEL_35;
      }
LABEL_26:
      v3 = 15;
      goto LABEL_35;
    }
    v3 = 11;
    switch ( SnapRegionAnchorLocations )
    {
      case 11:
        v3 = 12;
        v10 = 2;
        break;
      case 12:
        v3 = 5;
        goto LABEL_35;
      case 13:
        v10 = 4;
        v11 = v9 <= 0.34999999;
        goto LABEL_33;
      case 14:
        v3 = 14;
        v10 = 6;
        break;
      case 15:
        v3 = 17;
        goto LABEL_35;
      default:
        goto LABEL_26;
    }
    v11 = (float)((float)(v14[3] - v14[1]) / (float)(HIDWORD(v13) - DWORD1(v13))) <= 0.34999999;
LABEL_33:
    if ( !v11 )
      v3 = v10;
  }
LABEL_35:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  return v3;
}
