/*
 * XREFs of ?_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x140280458
 * Callers:
 *     ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x14027FEC8 (-_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?_IsValidPacket@MonitorMipiDsiState@DxgMonitor@@CA_NPEBU_DXGK_DSI_PACKET@@_NI@Z @ 0x140280270 (-_IsValidPacket@MonitorMipiDsiState@DxgMonitor@@CA_NPEBU_DXGK_DSI_PACKET@@_NI@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_ValidateMipiDsiPackets(
        DxgMonitor::MonitorMipiDsiState *this,
        struct _DXGK_DSI_TRANSMISSION *a2)
{
  unsigned int v2; // edi
  unsigned __int8 i; // si
  int v5; // eax

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 205;
  }
  if ( !*((_BYTE *)a2 + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 206;
  }
  if ( *((_BYTE *)a2 + 4) > 0x80u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 207;
  }
  for ( i = 0; ; ++i )
  {
    v5 = *((unsigned __int8 *)a2 + 4);
    if ( i >= (unsigned __int8)v5 )
      break;
    if ( !DxgMonitor::MonitorMipiDsiState::_IsValidPacket(
            (struct _DXGK_DSI_TRANSMISSION *)((char *)a2 + 14 * i + 16),
            i == v5 - 1,
            *((unsigned __int16 *)a2 + 5)) )
    {
      *((_BYTE *)a2 + 5) = i;
      v2 = -1073741811;
      *((_WORD *)a2 + 7) = 512;
      return v2;
    }
  }
  return v2;
}
