/*
 * XREFs of NdisDeregisterPoll @ 0x1400CC930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x140145EC0 (--_GNdisPoll@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisDeregisterPoll(PVOID P)
{
  KIRQL CurrentIrql; // al
  int v3; // edx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    ndisBugCheckEx(0x2EuLL, 2uLL, CurrentIrql, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      1,
      13,
      (struct _GUID *)&WPP_6e9ab13774253042015e4c400df4b426_Traceguids,
      (char)P);
  }
  NdisPoll::`scalar deleting destructor'(P, 0);
  ExFreePoolWithTag(P, 0);
}
