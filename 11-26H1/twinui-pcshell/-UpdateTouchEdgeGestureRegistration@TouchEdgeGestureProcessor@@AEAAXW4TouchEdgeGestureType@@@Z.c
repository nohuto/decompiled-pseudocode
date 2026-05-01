/*
 * XREFs of ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1800B5AC4
 * Callers:
 *     wistd::__function::__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800B6160 (wistd--__function--__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_c.c)
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800B6E40 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ??1TouchEdgeGestureProcessor@@QEAA@XZ @ 0x1802B185C (--1TouchEdgeGestureProcessor@@QEAA@XZ.c)
 *     ?EnableTouchEdgeGesture@TouchEdgeGestureManager@@UEAAJ_N@Z @ 0x18058D730 (-EnableTouchEdgeGesture@TouchEdgeGestureManager@@UEAAJ_N@Z.c)
 * Callees:
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A0014 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??$UnregisterShellSource@I@TouchEdgeGestureTelemetry@@SAX$$QEAI@Z @ 0x1800B5A80 (--$UnregisterShellSource@I@TouchEdgeGestureTelemetry@@SAX$$QEAI@Z.c)
 *     ??$RegisterShellSource@I@TouchEdgeGestureTelemetry@@SAX$$QEAI@Z @ 0x1800B5C88 (--$RegisterShellSource@I@TouchEdgeGestureTelemetry@@SAX$$QEAI@Z.c)
 *     ?RegisterShellSource@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_KAEBW4InputGestureSourceType@Input@Internal@UI@Windows@3@AEBW4InputType@56783@@Z @ 0x1800B5D7C (-RegisterShellSource@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureMana.c)
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1800B5EB0 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800B5FDC (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(__int64 a1, char a2)
{
  struct wil::details::IFailureCallback *v4; // rax
  char *v5; // rdx
  __int64 v6; // rdi
  int *v7; // rbx
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int128 v10; // [rsp+28h] [rbp-19h] BYREF
  char *v11; // [rsp+38h] [rbp-9h]
  int v12; // [rsp+48h] [rbp+7h] BYREF
  const char *v13; // [rsp+50h] [rbp+Fh]
  __int64 v14; // [rsp+58h] [rbp+17h]
  char v15; // [rsp+60h] [rbp+1Fh]
  char v16[48]; // [rsp+68h] [rbp+27h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+67h] BYREF

  v4 = (struct wil::details::IFailureCallback *)wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
                                                  a1,
                                                  _lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
  v15 = 0;
  v12 = 0;
  v13 = "UpdateTouchEdgeGestureRegistration";
  v14 = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v16,
    v4,
    (struct wil::CallContextInfo *)&v12,
    1);
  if ( *(_QWORD *)(a1 + 104) )
  {
    v10 = 0LL;
    v11 = 0LL;
    LODWORD(v17) = 0;
    BYTE4(v17) = (a2 & 4) != 0;
    std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v10, 0LL, &v17);
    LODWORD(v17) = 2;
    BYTE4(v17) = (a2 & 8) != 0;
    if ( *((char **)&v10 + 1) == v11 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v10, *((_QWORD *)&v10 + 1), &v17);
      v5 = (char *)*((_QWORD *)&v10 + 1);
    }
    else
    {
      **((_QWORD **)&v10 + 1) = v17;
      v5 = (char *)(*((_QWORD *)&v10 + 1) + 8LL);
      *((_QWORD *)&v10 + 1) += 8LL;
    }
    LODWORD(v17) = 3;
    BYTE4(v17) = (a2 & 0x12) != 0;
    if ( v5 == v11 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v10, v5, &v17);
      v6 = *((_QWORD *)&v10 + 1);
    }
    else
    {
      *(_QWORD *)v5 = v17;
      v6 = *((_QWORD *)&v10 + 1) + 8LL;
      *((_QWORD *)&v10 + 1) += 8LL;
    }
    v7 = (int *)v10;
    if ( (_QWORD)v10 != v6 )
    {
      do
      {
        v8 = *v7;
        v9 = (__int64 *)(a1 + 104);
        if ( *((_BYTE *)v7 + 4) )
        {
          LODWORD(v17) = 2;
          winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::RegisterShellSource(
            v9,
            v8,
            v7,
            &v17);
          LODWORD(v17) = *v7;
          TouchEdgeGestureTelemetry::RegisterShellSource<unsigned int>(&v17);
        }
        else
        {
          winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore(v9);
          LODWORD(v17) = *v7;
          TouchEdgeGestureTelemetry::UnregisterShellSource<unsigned int>((int *)&v17);
        }
        v7 += 2;
      }
      while ( v7 != (int *)v6 );
      v7 = (int *)v10;
    }
    if ( v7 )
      std::_Deallocate<16>(v7, (v11 - (char *)v7) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)&v12);
}
