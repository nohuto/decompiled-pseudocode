/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAIXZ @ 0x1800E9EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@QEAA@XZ @ 0x1800E9EEC (--1-$implements_delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EAE8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall _Release___implements_delegate_U__AsyncOperationCompletedHandler_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____when_any_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__U1234__4_YA_AU__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___234_AEBU6234_0_Z__impl_winrt__UEAAIXZ(
        char *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference((winrt::impl::implements_delegate_base *)(a1 + 8));
  if ( !v2 && a1 )
  {
    __1__implements_delegate_U__AsyncOperationCompletedHandler_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____when_any_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__U1234__4_YA_AU__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___234_AEBU6234_0_Z__impl_winrt__QEAA_XZ(a1);
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  }
  return v2;
}
