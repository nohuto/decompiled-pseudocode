/*
 * XREFs of ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x18058BD50
 * Callers:
 *     ?InputHostHiding@TouchGestureComponent@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x18058BC70 (-InputHostHiding@TouchGestureComponent@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?OnRudeWindowStateChange@TouchGestureComponent@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z @ 0x18058BC90 (-OnRudeWindowStateChange@TouchGestureComponent@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateCha.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x18058C020 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_one_at_back@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAAEAUtagRECT@@$$QEAU2@@Z @ 0x180219984 (--$_Emplace_one_at_back@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAAEA.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 *     ?GetSuppressedDisplayRects@TouchGestureComponent@@AEAA?AV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@XZ @ 0x18058BA4C (-GetSuppressedDisplayRects@TouchGestureComponent@@AEAA-AV-$vector@URect@Foundation@Windows@winrt.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@URect@Foundation@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x18058E574 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@URect@Foundation@Windows@winrt@@@.c)
 *     ?SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x180592D20 (-SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV-$vector@URect@Foundation@Windows@winrt@@.c)
 *     ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x180595000 (-SuppressionRegions@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManag.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchGestureComponent::UpdateSuppressionRegions(TouchGestureComponent *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-60h] BYREF
  int v7; // [rsp+30h] [rbp-50h] BYREF
  void *v8[3]; // [rsp+38h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-30h] BYREF
  RECT rc; // [rsp+60h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 408) )
  {
    TouchGestureComponent::GetSuppressedDisplayRects((__int64)this, v8);
    v2 = *((_QWORD *)this + 15);
    if ( v2 )
    {
      v3 = v2 + 200;
      if ( *(_QWORD *)(v2 + 200) )
      {
        v4 = winrt::com_array<winrt::Windows::Foundation::Rect>::com_array<winrt::Windows::Foundation::Rect>(
               pv,
               v8[0],
               v8[1]);
        *(_QWORD *)&v6 = *(_QWORD *)v4;
        DWORD2(v6) = *(_DWORD *)(v4 + 8);
        winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::SuppressionRegions(
          v3,
          &v6);
        if ( pv[0] )
          CoTaskMemFree_0(pv[0]);
      }
    }
    v7 = 0;
    rc = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 17) + 40LL))(
           *((_QWORD *)this + 17),
           &rc,
           &v7) >= 0
      && !IsRectEmpty(&rc) )
    {
      *(float *)&v6 = (float)rc.left;
      *((float *)&v6 + 1) = (float)rc.top;
      *((float *)&v6 + 2) = (float)(rc.right - rc.left);
      *((float *)&v6 + 3) = (float)(rc.bottom - rc.top);
      std::vector<tagRECT>::_Emplace_one_at_back<tagRECT>((__int64)v8, &v6);
    }
    v5 = *((_QWORD *)this + 13);
    if ( v5 )
      TouchGestureProcessor::SetSuppressionRegions(v5, v8);
    if ( v8[0] )
      std::_Deallocate<16>(v8[0], (struct std::nothrow_t *)(((char *)v8[2] - (char *)v8[0]) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
