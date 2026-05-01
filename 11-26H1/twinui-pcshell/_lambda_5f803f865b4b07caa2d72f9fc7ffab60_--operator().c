/*
 * XREFs of _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator() @ 0x18010B050
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x18010B040 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 * Callees:
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18010B0EC (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18010B4F8 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_03cd8f9c11c3b75e9e31d9155b53654a_::_lambda_03cd8f9c11c3b75e9e31d9155b53654a_ @ 0x180309B40 (_lambda_03cd8f9c11c3b75e9e31d9155b53654a_--_lambda_03cd8f9c11c3b75e9e31d9155b53654a_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID Ptr; // rcx
  __int64 v4; // rax
  __int64 v5; // r11
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1 + 14;
  AcquireSRWLockExclusive(v2);
  Ptr = (*a1)[22].Ptr;
  if ( Ptr )
  {
    (*a1)[22].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v4 = lambda_03cd8f9c11c3b75e9e31d9155b53654a_::_lambda_03cd8f9c11c3b75e9e31d9155b53654a_(v6, a1 + 1);
  NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(v5, v4);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(v6);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
