/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1402263CC
 * Callers:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameStatistics @ 0x1400BC410 (NtDCompositionGetFrameStatistics.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E4978 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

char **__fastcall DirectComposition::CConnection::`scalar deleting destructor'(char **Buffer)
{
  DirectComposition::CConnection::~CConnection(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
