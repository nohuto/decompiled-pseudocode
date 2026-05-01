/*
 * XREFs of ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18040B120
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180107440 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18040AF88 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x18040CE48 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FocusApplicationView(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2,
        unsigned __int8 a3)
{
  int v3; // edi
  std::_Ref_count_base *v5; // r8
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  *(_OWORD *)v7 = 0LL;
  if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView((__int64)this, (__int64)a2, v7) >= 0 )
  {
    v5 = v7[0];
    if ( *((_BYTE *)v7[0] + 56) == 1 )
    {
      if ( *((_QWORD *)v7[0] + 3) > 7uLL )
        v5 = *(std::_Ref_count_base **)v7[0];
      PeoplePaneViewManager::NotifyListeners(this, (v3 ^ 1u) + 2, v5, *((unsigned int *)v7[0] + 10));
    }
  }
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  return 0LL;
}
