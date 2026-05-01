/*
 * XREFs of ?AddRegionToViewModel@SnapAssistState@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x180224F5C
 * Callers:
 *     ?InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemListViewModelArgs@3456@@Z @ 0x1806C0010 (-InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Compos.c)
 * Callees:
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     ?GetRegionViewModelState@@YA?AW4SnapAssistRegionState@Switcher@Experiences@ComposableShell@WindowsInternal@@W41WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x1802C22EC (-GetRegionViewModelState@@YA-AW4SnapAssistRegionState@Switcher@Experiences@ComposableShell@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SnapAssistState::AddRegionToViewModel(float *a1, __int64 a2, __int64 a3)
{
  float v5; // xmm6_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  __int64 v10; // rcx
  unsigned int RegionViewModelState; // eax
  int v12; // eax
  _DWORD v13[4]; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(float *)(a3 + 8) - a1[30];
  if ( (unsigned int)Mirror_IsThreadRTL() )
    v5 = a1[32] - (float)(v5 + *(float *)(a3 + 16));
  v7 = *(float *)(a3 + 16);
  if ( v7 < 0.0 || (v8 = *(float *)(a3 + 20), v8 < 0.0) )
  {
    __abi_WinRTraiseInvalidArgumentException();
    __debugbreak();
    JUMPOUT(0x18022503ALL);
  }
  v9 = *(float *)(a3 + 12) - a1[31];
  v10 = *(unsigned int *)(a3 + 24);
  *(float *)v13 = v5;
  *(float *)&v13[2] = v7;
  *(float *)&v13[3] = v8;
  *(float *)&v13[1] = v9;
  RegionViewModelState = GetRegionViewModelState(v10);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD))(*(_QWORD *)a2 + 48LL))(
          a2,
          *(_QWORD *)a3,
          v13,
          RegionViewModelState);
  __abi_ThrowIfFailed(v12);
}
