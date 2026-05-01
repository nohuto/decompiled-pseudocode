/*
 * XREFs of ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1800FC364
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800FB944 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     wistd::__function::__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800FBE50 (wistd--__function--__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_c.c)
 *     ??1TouchEdgeGestureProcessor@@QEAA@XZ @ 0x1802BA828 (--1TouchEdgeGestureProcessor@@QEAA@XZ.c)
 *     ?EnableTouchEdgeGesture@TouchEdgeGestureManager@@UEAAJ_N@Z @ 0x180569980 (-EnableTouchEdgeGesture@TouchEdgeGestureManager@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??$UnregisterShellSource@I@TouchEdgeGestureTelemetry@@SAX$$QEAI@Z @ 0x1800FC320 (--$UnregisterShellSource@I@TouchEdgeGestureTelemetry@@SAX$$QEAI@Z.c)
 *     ??$RegisterShellSource@I@TouchEdgeGestureTelemetry@@SAX$$QEAI@Z @ 0x1800FC524 (--$RegisterShellSource@I@TouchEdgeGestureTelemetry@@SAX$$QEAI@Z.c)
 *     ?RegisterShellSource@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_KAEBW4InputGestureSourceType@Input@Internal@UI@Windows@3@AEBW4InputType@56783@@Z @ 0x1800FC618 (-RegisterShellSource@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureMana.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800FC738 (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FC828 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ??$_Emplace_reallocate@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@?$vector@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@V?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@2@@std@@AEAAPEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@1@QEAU21@$$QEAU21@@Z @ 0x1800FD510 (--$_Emplace_reallocate@U-$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(__int64 a1, char a2)
{
  struct wil::details::IFailureCallback *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  int *v8; // rbx
  int *i; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-29h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-19h]
  int v14; // [rsp+40h] [rbp-9h] BYREF
  const char *v15; // [rsp+48h] [rbp-1h]
  __int64 v16; // [rsp+50h] [rbp+7h]
  char v17; // [rsp+58h] [rbp+Fh]
  char v18[48]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+67h] BYREF

  v4 = (struct wil::details::IFailureCallback *)wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
                                                  a1,
                                                  _lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
  v17 = 0;
  v14 = 0;
  v15 = "UpdateTouchEdgeGestureRegistration";
  v16 = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v18,
    v4,
    (struct wil::CallContextInfo *)&v14,
    1);
  if ( *(_QWORD *)(a1 + 104) )
  {
    v12 = 0LL;
    v13 = 0LL;
    LODWORD(v19) = 0;
    BYTE4(v19) = (a2 & 4) != 0;
    std::vector<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>::_Emplace_reallocate<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>(
      &v12,
      0LL,
      &v19);
    LODWORD(v19) = 2;
    BYTE4(v19) = (a2 & 8) != 0;
    v5 = *((_QWORD *)&v12 + 1);
    v6 = v13;
    if ( *((_QWORD **)&v12 + 1) == v13 )
    {
      std::vector<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>::_Emplace_reallocate<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>(
        &v12,
        *((_QWORD *)&v12 + 1),
        &v19);
      v6 = v13;
      v7 = (_QWORD *)*((_QWORD *)&v12 + 1);
    }
    else
    {
      **((_QWORD **)&v12 + 1) = v19;
      v7 = (_QWORD *)(v5 + 8);
      *((_QWORD *)&v12 + 1) = v7;
    }
    LODWORD(v19) = 3;
    BYTE4(v19) = (a2 & 0x12) != 0;
    if ( v7 == v6 )
    {
      std::vector<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>::_Emplace_reallocate<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>(
        &v12,
        v7,
        &v19);
      v6 = v13;
      v8 = (int *)*((_QWORD *)&v12 + 1);
    }
    else
    {
      *v7 = v19;
      v8 = (int *)(v7 + 1);
      *((_QWORD *)&v12 + 1) = v8;
    }
    for ( i = (int *)v12; i != v8; i += 2 )
    {
      v10 = *i;
      v11 = a1 + 104;
      if ( *((_BYTE *)i + 4) )
      {
        LODWORD(v19) = 2;
        winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::RegisterShellSource(
          v11,
          v10,
          i,
          &v19);
        LODWORD(v19) = *i;
        TouchEdgeGestureTelemetry::RegisterShellSource<unsigned int>(&v19);
      }
      else
      {
        winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore(
          v11,
          v10);
        LODWORD(v19) = *i;
        TouchEdgeGestureTelemetry::UnregisterShellSource<unsigned int>((int *)&v19);
      }
    }
    if ( (_QWORD)v12 )
      std::_Deallocate<16,0>((void *)v12, (const struct std::nothrow_t *)(8 * ((__int64)((__int64)v6 - v12) >> 3)));
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)&v14);
}
