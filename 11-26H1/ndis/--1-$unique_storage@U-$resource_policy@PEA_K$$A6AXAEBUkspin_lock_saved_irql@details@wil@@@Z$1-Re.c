/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400CE200
 * Callers:
 *     ndisIfUpdateExternalInterface @ 0x1400CE2B0 (ndisIfUpdateExternalInterface.c)
 *     NdisIfUpdateInterface @ 0x1400CE890 (NdisIfUpdateInterface.c)
 * Callees:
 *     ??$invoke@P6AXAEBUkspin_lock_saved_irql@details@wil@@@ZAEAU123@@wistd@@YAX$$QEAP6AXAEBUkspin_lock_saved_irql@details@wil@@@ZAEAU123@@Z @ 0x1400CE1E4 (--$invoke@P6AXAEBUkspin_lock_saved_irql@details@wil@@@ZAEAU123@@wistd@@YAX$$QEAP6AXAEBUkspin_loc.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(
        __int128 *a1)
{
  __int128 v1; // xmm0
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  void (__fastcall *v4)(const struct wil::details::kspin_lock_saved_irql *); // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = wil::details::kspin_lock_saved_irql::Release;
    v3 = v1;
    return wistd::invoke<void (*)(wil::details::kspin_lock_saved_irql const &),wil::details::kspin_lock_saved_irql &>(
             (__int64 (__fastcall **)(__int64))&v4,
             (__int64)&v3);
  }
  return result;
}
