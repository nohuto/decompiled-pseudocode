/*
 * XREFs of ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x1800BE9AC
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800BE360 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800BE254 (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800BEA18 (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 */

void __fastcall CProjectionBorderManager::_RemoveInactiveVisuals(CProjectionBorderManager *this, __int64 a2)
{
  CProjectionBorderManager *v2; // rsi
  int v3; // ebx
  __int64 v4; // rdi

  v2 = this;
  LOBYTE(this) = 0;
  v3 = *((_DWORD *)v2 + 106) - 1;
  if ( v3 >= 0 )
  {
    v4 = 56LL * v3;
    do
    {
      if ( !*(_BYTE *)(*((_QWORD *)v2 + 50) + v4 + 48) )
      {
        CProjectionBorderManager::_RemoveVisualByIndex(v2, v3);
        LOBYTE(this) = 1;
      }
      v4 -= 56LL;
      --v3;
    }
    while ( v3 >= 0 );
    if ( (_BYTE)this )
      WindowFrameLoggingTelemetry::ScreenDuplicationDisabled((__int64)this, a2);
  }
}
