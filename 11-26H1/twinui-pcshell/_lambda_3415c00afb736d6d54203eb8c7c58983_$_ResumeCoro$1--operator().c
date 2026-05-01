/*
 * XREFs of _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x18059E070
 * Callers:
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_::operator() @ 0x18059E190 (_lambda_3415c00afb736d6d54203eb8c7c58983_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18017A914 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?RevokeSnapIds@CShellSnapComponent@@AEAAXXZ @ 0x1805A15BC (-RevokeSnapIds@CShellSnapComponent@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_3415c00afb736d6d54203eb8c7c58983___ResumeCoro_1::operator()(__int64 a1)
{
  struct IWeakReference *v1; // rcx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
      case 5:
        goto LABEL_7;
      case 2:
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 56) + 8LL;
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_WORD *)(a1 + 8) = 4;
        if ( !winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 16), (void (*)(void *, void *))a1) )
          goto LABEL_4;
        return;
      case 4:
LABEL_4:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 16));
        v1 = **(struct IWeakReference ***)(a1 + 56);
        *(_QWORD *)(a1 + 32) = 0LL;
        wil::details::weak_query_policy::query(v1, &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab, (void **)(a1 + 32));
        if ( *(_QWORD *)(a1 + 32) )
          CShellSnapComponent::RevokeSnapIds((CShellSnapComponent *)((*(_QWORD *)(a1 + 32) - 120LL) & -(__int64)(*(_QWORD *)(a1 + 32) != 0LL)));
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 32));
LABEL_7:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_a1bf07eabb51e841d7b59a4e813e5668__const___::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
