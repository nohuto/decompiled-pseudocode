/*
 * XREFs of KdpSysWriteControlSpace @ 0x140C1C520
 * Callers:
 *     KdSystemDebugControl @ 0x14077FDF0 (KdSystemDebugControl.c)
 *     KdpWriteControlSpace @ 0x140C1B72C (KdpWriteControlSpace.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysWriteControlSpace(ULONG a1, __int64 a2, int a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  int v10; // r8d

  v6 = a1;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  v9 = KiProcessorBlock[v6];
  if ( !v9 || a2 != 2 )
    return 3221225473LL;
  v10 = 272;
  if ( a4 <= 0x110 )
    v10 = a4;
  return KdpCopyMemoryChunks(a3, (int)v9 + 256, v10, 0, 4, (__int64)a5);
}
