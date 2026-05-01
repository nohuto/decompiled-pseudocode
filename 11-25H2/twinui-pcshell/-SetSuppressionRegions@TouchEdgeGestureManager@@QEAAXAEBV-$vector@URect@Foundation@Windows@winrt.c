/*
 * XREFs of ?SetSuppressionRegions@TouchEdgeGestureManager@@QEAAXAEBV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x180569C50
 * Callers:
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x180567F9C (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@URect@Foundation@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x18056A870 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@URect@Foundation@Windows@winrt@@@.c)
 *     ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x180571760 (-SuppressionRegions@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManag.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchEdgeGestureManager::SetSuppressionRegions(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  LPVOID pv[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a1 + 200;
  if ( *(_QWORD *)(a1 + 200) )
  {
    v3 = winrt::com_array<winrt::Windows::Foundation::Rect>::com_array<winrt::Windows::Foundation::Rect>(pv, *a2, a2[1]);
    v4 = *(_DWORD *)(v3 + 8);
    v5 = *(_QWORD *)v3;
    v6 = v4;
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::SuppressionRegions(
      v2,
      &v5);
    if ( pv[0] )
      CoTaskMemFree_0(pv[0]);
  }
}
