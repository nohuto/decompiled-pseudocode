/*
 * XREFs of ?NdisPDRequestFetchNotification@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1400A6B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDRequestFetchNotification(struct PD_QUEUE_HANDLE__ *a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      29,
      101,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  _InterlockedExchange((volatile __int32 *)a1 + 14, 1);
}
