/*
 * XREFs of ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802AF694
 * Callers:
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802344F0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 * Callees:
 *     ?submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z @ 0x1801E6D5C (-submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall winrt::impl::resume_apartment_on_threadpool(__int64 *a1, __int64 a2, __int64 a3)
{
  void (*v6)(void *, void *); // rsi
  void *v7; // r8
  __int64 v8; // rcx

  v6 = (void (*)(void *, void *))operator new(0x18uLL);
  v8 = *a1;
  *(_QWORD *)v6 = *a1;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *((_QWORD *)v6 + 1) = a2;
  *((_QWORD *)v6 + 2) = a3;
  return winrt::impl::submit_threadpool_callback(
           (winrt::impl *)winrt::impl::fallback_submit_threadpool_callback,
           v6,
           v7);
}
