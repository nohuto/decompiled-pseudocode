/*
 * XREFs of KdpCopyCodeStream @ 0x140C16104
 * Callers:
 *     KdpAddBreakpoint @ 0x140C165CC (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x140C167DC (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140C16840 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x140C168F8 (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x140C169CC (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x140C175F0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140C17780 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCopyCodeStream(int a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  result = KdpCopyMemoryChunks(a1, a2, a3, a3, a4 | 0x80u, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  KdpOweBreakpoint = 1;
  if ( (a4 & 5) == 5 )
  {
    result = KdpCopyMemoryChunks(a1, a2, a3, a3, a4 | 0xC0u, 0LL);
    if ( (int)result >= 0 )
      return 259LL;
  }
  return result;
}
