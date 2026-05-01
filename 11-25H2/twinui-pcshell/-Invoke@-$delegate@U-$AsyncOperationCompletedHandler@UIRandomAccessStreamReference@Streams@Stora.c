/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1801DBFE0
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_IMPL_SetEvent @ 0x1802D3845 (WINRT_IMPL_SetEvent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _Invoke___delegate_U__AsyncOperationCompletedHandler_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____when_any_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__U1234__4_YA_AU__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___234_AEBU6234_0_Z__impl_winrt__UEAAHPEAXH_Z(
        __int64 a1,
        signed __int64 a2,
        int a3)
{
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), a2, 0LL) )
  {
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)a2 + 8LL))(a2);
    *(_DWORD *)(a1 + 24) = a3;
    WINRT_IMPL_SetEvent(*(HANDLE *)(a1 + 16));
  }
  return 0LL;
}
