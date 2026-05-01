/*
 * XREFs of _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$46 @ 0x1806DAE3F
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@1@XZ @ 0x180284DAC (--C-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802B0C18 (--1-$test_data_control@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$capture@UIImmersiveMonitor@@AEAU?$com_ptr@UIImmersiveMonitorManager@@@winrt@@P8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@1PEAPEAX@Z$$TAEBU6@@winrt@@YA?AU?$com_ptr@UIImmersiveMonitor@@@0@AEAU?$com_ptr@UIImmersiveMonitorManager@@@0@$$QEAP8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@2PEAPEAX@Z$$QEA$$T2@Z @ 0x180593E5C (--$capture@UIImmersiveMonitor@@AEAU-$com_ptr@UIImmersiveMonitorManager@@@winrt@@P8IImmersiveMoni.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch_46(wil *a1, __int64 a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, char *); // rbx
  void **v6; // rax
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, char *); // rbx
  void **v9; // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, char *); // rdi
  void **v12; // rax

  if ( (unsigned int)wil::ResultFromCaughtException(a1) != -2147023728 )
    throw;
  *((_BYTE *)*tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::operator->(
                (void **)(a2 + 64),
                (void **)(a2 + 376))
  + 288) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>((__int64 *)(a2 + 376));
  v3 = *(__int64 **)(a2 + 352);
  v4 = *v3;
  v5 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)*v3 + 24LL);
  v6 = tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::operator->(
         (void **)(a2 + 64),
         (void **)(a2 + 376));
  v5(v4, (char *)*v6 + 292);
  tip2::test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>((__int64 *)(a2 + 376));
  v7 = *v3;
  v8 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)*v3 + 32LL);
  v9 = tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::operator->(
         (void **)(a2 + 64),
         (void **)(a2 + 376));
  v8(v7, (char *)*v9 + 296);
  tip2::test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>((__int64 *)(a2 + 376));
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 72) =  winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator,void>::type::`vcall'{72,{flat}};
  winrt::capture<IImmersiveMonitor,winrt::com_ptr<IImmersiveMonitorManager> &,long (IImmersiveMonitorManager::*)(HMONITOR__ *,_GUID const &,_GUID const &,void * *),std::nullptr_t,_GUID const &>(
    (_QWORD *)(a2 + 376),
    v3,
    (__int64 (__fastcall **)(__int64, __int64, GUID *, void *, __int64 *))(a2 + 72),
    (__int64 *)(a2 + 80));
  v10 = *(_QWORD *)(a2 + 376);
  v11 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 72LL);
  v12 = tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::operator->(
          (void **)(a2 + 64),
          (void **)(a2 + 80));
  v11(v10, (char *)*v12 + 300);
  tip2::test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>((__int64 *)(a2 + 80));
  tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)(a2 + 64));
  if ( v10 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a2 + 376));
  return 0LL;
}
