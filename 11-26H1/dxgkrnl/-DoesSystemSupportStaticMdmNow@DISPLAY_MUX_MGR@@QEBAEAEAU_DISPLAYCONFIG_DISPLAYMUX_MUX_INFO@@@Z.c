/*
 * XREFs of ?DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEAEAU_DISPLAYCONFIG_DISPLAYMUX_MUX_INFO@@@Z @ 0x1400173BC
 * Callers:
 *     ?DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ @ 0x1400153F4 (-DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ.c)
 *     ?LogMuxPairingStateTelemetry@DISPLAY_MUX_PAIRING@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J_N@Z @ 0x14008D120 (-LogMuxPairingStateTelemetry@DISPLAY_MUX_PAIRING@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS.c)
 * Callees:
 *     <none>
 */

char __fastcall DISPLAY_MUX_MGR::DoesSystemSupportStaticMdmNow(
        DISPLAY_MUX_MGR *this,
        struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *a2)
{
  char v2; // bl
  unsigned int v4; // r8d

  v2 = 0;
  v4 = 4;
  if ( *((_DWORD *)this + 1) <= 4u )
    v4 = *((_DWORD *)this + 1);
  if ( v4 >= *(_DWORD *)a2 )
    v4 = *(_DWORD *)a2;
  if ( v4 >= *((_DWORD *)a2 + 89) )
    v4 = *((_DWORD *)a2 + 89);
  if ( v4 >= *((_DWORD *)a2 + 178) )
    v4 = *((_DWORD *)a2 + 178);
  if ( v4 == 4 )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2987;
  }
  else
  {
    if ( v4 == 1 || !*(_BYTE *)this )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 2997;
      return v2;
    }
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2992;
  }
  v2 = 1;
  if ( *((_DWORD *)a2 + 180) != 2 )
  {
    WdLogSingleEntry1(4LL);
    v2 = 0;
    WdLogGlobalForLineNumber = 3005;
  }
  return v2;
}
