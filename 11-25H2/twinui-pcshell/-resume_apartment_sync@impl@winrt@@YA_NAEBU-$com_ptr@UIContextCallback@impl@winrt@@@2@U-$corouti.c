/*
 * XREFs of ?resume_apartment_sync@impl@winrt@@YA_NAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x18033381C
 * Callers:
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802432E0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ?fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z @ 0x180332330 (-fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::resume_apartment_sync(__int64 *a1, __int64 a2, int *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a1;
  v7[0] = 0LL;
  v7[1] = a2;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(winrt::impl *, struct winrt::impl::com_callback_args *), _QWORD *, void *, int, _QWORD))(*(_QWORD *)v3 + 24LL))(
         v3,
         winrt::impl::resume_apartment_callback,
         v7,
         &winrt::impl::guid_v<winrt::impl::ICallbackWithNoReentrancyToApplicationSTA>,
         5,
         0LL);
  if ( v5 >= 0 )
    return 1;
  *a3 = v5;
  return 0;
}
