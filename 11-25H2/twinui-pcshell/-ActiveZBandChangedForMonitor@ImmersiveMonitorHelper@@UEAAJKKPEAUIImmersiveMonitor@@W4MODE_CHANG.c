/*
 * XREFs of ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18005F3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z @ 0x180046BD0 (--$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z.c)
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x18005E4D4 (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18005F628 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceConditi.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180108940 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::ActiveZBandChangedForMonitor(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  char v7; // bp
  char v8; // r14
  bool v10; // di
  HWND ForegroundWindow; // rax
  TabletModeHelpers *v12; // rcx
  void (*v13)(void); // rax
  int v14[14]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  if ( *(_QWORD *)(a1 + 48) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetImpl'::`2'::impl);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48)) )
    {
      v7 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(*(_QWORD *)(a1 + 48))
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48)) )
      {
        v8 = 1;
      }
      else
      {
        v8 = 0;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 144LL))(*(_QWORD *)(a1 + 48)) )
        {
          return 0LL;
        }
      }
      v10 = 1;
      ForegroundWindow = GetForegroundWindow();
      v15 = 0;
      if ( (unsigned int)GetWindowBand(ForegroundWindow, &v15) )
        v10 = v15 != 13;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
        && v15 == 6
        && a3 == 6 )
      {
        v10 = 0;
      }
      if ( !v8
        && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 144LL))(*(_QWORD *)(a1 + 48))
         || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))) )
      {
        v7 = 0;
      }
      if ( !v10 )
        return 0LL;
      if ( v7 && ZBandHelpers::IsBelowImmersiveLauncher(a3) )
      {
        v14[0] = a5;
        StartWindowTelemetry::StartDismissedByZBandChange<unsigned long &,unsigned long &,int>(&v16, &v17, v14);
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 72LL))(*(_QWORD *)(a1 + 48), 7LL);
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
        || !ZBandHelpers::IsBelowImmersiveLauncher(a3) && a3 != 6 )
      {
        return 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(*(_QWORD *)(a1 + 48))
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48)) )
      {
        if ( TabletModeHelpers::IsTabletMode(v12)
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 152LL))(*(_QWORD *)(a1 + 48)) )
        {
          return 0LL;
        }
        v13 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 96LL);
        goto LABEL_23;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 152LL))(*(_QWORD *)(a1 + 48)) )
      {
        v13 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 80LL);
LABEL_23:
        v13();
      }
    }
    return 0LL;
  }
  return 2147943568LL;
}
