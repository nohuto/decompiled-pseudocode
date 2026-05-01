/*
 * XREFs of WINRT_IMPL_SetEvent @ 0x1802D3845
 * Callers:
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1801DBFE0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Stora.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x18022EF30 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x18031B7F0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIDataSourceAdapter@Multitasking@Composable.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1805C30F0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetEvent(HANDLE hEvent)
{
  return SetEvent(hEvent);
}
