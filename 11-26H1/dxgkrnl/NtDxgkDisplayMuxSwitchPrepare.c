/*
 * XREFs of NtDxgkDisplayMuxSwitchPrepare @ 0x1401B9940
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     DxgkDisplayMuxSwitchPrepare @ 0x1400913C4 (DxgkDisplayMuxSwitchPrepare.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtDxgkDisplayMuxSwitchPrepare(char *Src)
{
  __int64 v3[32]; // [rsp+50h] [rbp-118h] BYREF

  memset(v3, 0, 0xF8uLL);
  RtlCopyFromUser(v3, Src, 0xF8uLL);
  DxgkDisplayMuxSwitchPrepare((struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *)v3);
  RtlCopyToUser(Src + 80, &v3[10], 0xA0uLL);
  RtlWriteULong64ToUser((_QWORD *)Src + 30, v3[30]);
  return 0LL;
}
