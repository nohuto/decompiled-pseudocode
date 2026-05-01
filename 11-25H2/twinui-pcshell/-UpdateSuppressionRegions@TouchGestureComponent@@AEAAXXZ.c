/*
 * XREFs of ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x180567F9C
 * Callers:
 *     ?InputHostHiding@TouchGestureComponent@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180567DB0 (-InputHostHiding@TouchGestureComponent@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?OnRudeWindowStateChange@TouchGestureComponent@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z @ 0x180567DD0 (-OnRudeWindowStateChange@TouchGestureComponent@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateCha.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180568280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_one_at_back@URect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAAEAURect@Foundation@Windows@winrt@@$$QEAU2345@@Z @ 0x1802CBC98 (--$_Emplace_one_at_back@URect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@winrt.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetSuppressedDisplayRects@TouchGestureComponent@@AEAA?AV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@XZ @ 0x180567B9C (-GetSuppressedDisplayRects@TouchGestureComponent@@AEAA-AV-$vector@URect@Foundation@Windows@winrt.c)
 *     ?SetSuppressionRegions@TouchEdgeGestureManager@@QEAAXAEBV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x180569C50 (-SetSuppressionRegions@TouchEdgeGestureManager@@QEAAXAEBV-$vector@URect@Foundation@Windows@winrt.c)
 *     ?SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x18056F484 (-SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV-$vector@URect@Foundation@Windows@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureComponent::UpdateSuppressionRegions(TouchGestureComponent *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // [rsp+20h] [rbp-50h] BYREF
  __int128 v5; // [rsp+24h] [rbp-4Ch] BYREF
  void *v6[3]; // [rsp+38h] [rbp-38h] BYREF
  RECT rc; // [rsp+50h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 408) )
  {
    TouchGestureComponent::GetSuppressedDisplayRects((__int64)this, v6);
    v2 = *((_QWORD *)this + 15);
    if ( v2 )
      TouchEdgeGestureManager::SetSuppressionRegions(v2, v6);
    v4 = 0;
    rc = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 17) + 40LL))(
           *((_QWORD *)this + 17),
           &rc,
           &v4) >= 0
      && !IsRectEmpty(&rc) )
    {
      *(float *)&v5 = (float)rc.left;
      *((float *)&v5 + 1) = (float)rc.top;
      *((float *)&v5 + 2) = (float)(rc.right - rc.left);
      *((float *)&v5 + 3) = (float)(rc.bottom - rc.top);
      std::vector<winrt::Windows::Foundation::Rect>::_Emplace_one_at_back<winrt::Windows::Foundation::Rect>(
        (__int64)v6,
        &v5);
    }
    v3 = *((_QWORD *)this + 13);
    if ( v3 )
      TouchGestureProcessor::SetSuppressionRegions(v3, v6);
    if ( v6[0] )
      std::_Deallocate<16,0>(
        v6[0],
        (const struct std::nothrow_t *)(((char *)v6[2] - (char *)v6[0]) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
