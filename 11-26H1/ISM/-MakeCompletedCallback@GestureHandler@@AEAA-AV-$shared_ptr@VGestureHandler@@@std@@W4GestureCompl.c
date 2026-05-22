/*
 * XREFs of ?MakeCompletedCallback@GestureHandler@@AEAA?AV?$shared_ptr@VGestureHandler@@@std@@W4GestureCompletedReason@@@Z @ 0x18006BD68
 * Callers:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x18006B61C (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x18006B75C (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x18014979C (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 * Callees:
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18008FC04 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA-AV-$shared_ptr@VSy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureHandler::MakeCompletedCallback(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h]
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = a2;
  std::enable_shared_from_this<SystemCursorService2>::shared_from_this(a1);
  v10 = a3;
  v8 = a1;
  v6 = *(_QWORD *)(a1 + 88);
  if ( !v6 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    JUMPOUT(0x18006BDD3LL);
  }
  (*(void (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v6 + 16LL))(v6, &v8, &v10);
  return a2;
}
