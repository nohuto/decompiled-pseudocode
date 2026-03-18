/*
 * XREFs of KdpCopyMemoryChunks @ 0x140C17780
 * Callers:
 *     KdpSetCommonState @ 0x14050A0C4 (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x14077D2F0 (KdSystemDebugControl.c)
 *     KdpCreateRemoteFile @ 0x140C136D0 (KdpCreateRemoteFile.c)
 *     KdpFillMemory @ 0x140C13EC8 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x140C145BC (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x140C147CC (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x140C14890 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140C14A2C (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x140C14B6C (KdpRestoreBreakPointEx.c)
 *     KdpWriteBreakPointEx @ 0x140C154E4 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140C15924 (KdpWritePhysicalMemory.c)
 *     KdpWriteVirtualMemory @ 0x140C159C4 (KdpWriteVirtualMemory.c)
 *     KdLogDbgPrint @ 0x140C15A40 (KdLogDbgPrint.c)
 *     KdpCopyCodeStream @ 0x140C16104 (KdpCopyCodeStream.c)
 *     KdpSysReadControlSpace @ 0x140C16434 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140C16520 (KdpSysWriteControlSpace.c)
 *     KdpPrintString @ 0x140C16AD8 (KdpPrintString.c)
 *     KdpPromptString @ 0x140C16BD4 (KdpPromptString.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x1406FEF24 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  unsigned int i; // ebx
  unsigned int v12; // edx

  v6 = 8;
  if ( a4 <= 8 )
  {
    v6 = a4;
    if ( !a4 )
      v6 = 4;
  }
  v10 = a3;
  for ( i = 1; v10; v10 -= i )
  {
    if ( i < v6 )
    {
      do
      {
        v12 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)a1) != 0 )
          break;
        i *= 2;
      }
      while ( v12 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)MmDbgCopyMemory(a1, a2, i, i, a5) < 0 )
      break;
    a1 += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
