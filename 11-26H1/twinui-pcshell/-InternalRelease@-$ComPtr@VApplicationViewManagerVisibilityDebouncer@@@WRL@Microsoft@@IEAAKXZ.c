/*
 * XREFs of ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18010B4F8
 * Callers:
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18004687C (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18010AF9C (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 *     _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator() @ 0x18010B050 (_lambda_5f803f865b4b07caa2d72f9fc7ffab60_--operator().c)
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18010B0EC (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::_scalar_deleting_destructor_ @ 0x18010B440 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--_scalar_deleting_destructo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::_scalar_deleting_destructor_ @ 0x18010B4B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--_scala.c)
 *     ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x18010B578 (--$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewColle.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(
        volatile signed __int32 **a1)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // r8
  signed __int32 v3; // edx
  unsigned __int32 v4; // edi

  v1 = 0;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    do
      v3 = *((_DWORD *)v2 + 17);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange(v2 + 17, v3 - 1, v3) );
    v4 = v3 - 1;
    if ( v3 == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v4;
  }
  return v1;
}
