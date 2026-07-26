/*
 * XREFs of NdisLWMDeregisterMiniportDriver @ 0x140094E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140139848 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisLWMDeregisterMiniportDriver(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  int v2; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      136,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
  if ( SLOBYTE(a1->Flags) >= 0 )
    ndisBugCheckEx(0x29uLL, 1uLL, (ULONG_PTR)a1, 0LL);
  ndisInternalDeregisterMiniportDriver(a1);
  ExFreePoolWithTag(a1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      1,
      137,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids);
  }
}
