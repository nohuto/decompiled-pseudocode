/*
 * XREFs of NdisGetVersion @ 0x140057D40
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 */

UINT NdisGetVersion(void)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      10,
      (struct _GUID *)&WPP_62bb86a69834379a64d7ef1de53e7034_Traceguids,
      89);
  return 393305;
}
