/*
 * XREFs of ?NdisGetVersion640Shim@@YAIXZ @ 0x1400B16E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 */

__int64 NdisGetVersion640Shim(void)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      12,
      (struct _GUID *)&WPP_de660bc3d878310dfb6252d632ae88c1_Traceguids);
  return 393256LL;
}
