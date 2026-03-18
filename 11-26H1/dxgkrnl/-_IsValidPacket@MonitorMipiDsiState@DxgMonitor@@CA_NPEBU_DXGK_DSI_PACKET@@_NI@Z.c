/*
 * XREFs of ?_IsValidPacket@MonitorMipiDsiState@DxgMonitor@@CA_NPEBU_DXGK_DSI_PACKET@@_NI@Z @ 0x140280270
 * Callers:
 *     ?_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x140280458 (-_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DxgMonitor::MonitorMipiDsiState::_IsValidPacket(const struct _DXGK_DSI_PACKET *a1, char a2, int a3)
{
  unsigned int v6; // r9d
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  char v12; // al
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  unsigned int v16; // r9d

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 145;
  }
  v6 = *(_BYTE *)a1 & 0x3F;
  if ( v6 > 0x14 )
  {
    v13 = v6 - 21;
    if ( !v13 )
      return 1;
    v14 = v13 - 14;
    if ( !v14 )
      return 1;
    v15 = v14 - 1;
    if ( !v15 )
      return a2;
    v16 = v15 - 5;
    if ( !v16 || v16 == 16 && *((unsigned __int16 *)a1 + 1) <= (unsigned int)(a3 + 8) )
      return a2;
  }
  else
  {
    if ( v6 == 20 )
      return a2;
    v7 = v6 - 3;
    if ( !v7 )
      return 1;
    v8 = v7 - 1;
    if ( !v8 )
      return a2;
    v9 = v8 - 1;
    if ( !v9 )
      return 1;
    v10 = v9 - 1;
    if ( v10 )
      return v10 == 13;
    v12 = *((_BYTE *)a1 + 2);
    if ( v12 != 46 && v12 != 62 )
      return a2;
  }
  return 0;
}
