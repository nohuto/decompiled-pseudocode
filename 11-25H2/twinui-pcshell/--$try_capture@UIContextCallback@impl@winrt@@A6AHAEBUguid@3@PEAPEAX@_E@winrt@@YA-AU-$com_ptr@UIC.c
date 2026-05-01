/*
 * XREFs of ??$try_capture@UIContextCallback@impl@winrt@@A6AHAEBUguid@3@PEAPEAX@_E@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@A6AHAEBUguid@0@PEAPEAX@_E@Z @ 0x1801B4CA0
 * Callers:
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800FAB4C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802432E0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 * Callees:
 *     ??$capture_to@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@impl@winrt@@YAHPEAPEAXP6AHAEBUguid@1@0@_E@Z @ 0x1801B4CDC (--$capture_to@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@impl@winrt@@YAHPEAPEAXP.c)
 */

_QWORD *__fastcall ___try_capture_UIContextCallback_impl_winrt__A6AHAEBUguid_3_PEAPEAX__E_winrt__YA_AU__com_ptr_UIContextCallback_impl_winrt___0_A6AHAEBUguid_0_PEAPEAX__E_Z(
        _QWORD *a1)
{
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  ___capture_to_UIContextCallback_impl_winrt__P6AHAEBUguid_3_PEAPEAX__E__V_impl_winrt__YAHPEAPEAXP6AHAEBUguid_1_0__E_Z(
    &v3,
    WINRT_IMPL_CoGetObjectContext);
  *a1 = v3;
  return a1;
}
