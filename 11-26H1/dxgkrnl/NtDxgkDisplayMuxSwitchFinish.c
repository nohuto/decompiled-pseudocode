/*
 * XREFs of NtDxgkDisplayMuxSwitchFinish @ 0x1401B97D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     DxgkDisplayMuxSwitchFinish @ 0x1400912B4 (DxgkDisplayMuxSwitchFinish.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtDxgkDisplayMuxSwitchFinish(char *Src)
{
  _QWORD v3[28]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v3, 0, sizeof(v3));
  RtlCopyFromUser(v3, Src, 0xE0uLL);
  DxgkDisplayMuxSwitchFinish(v3);
  RtlCopyToUser(Src + 64, &v3[8], 0xA0uLL);
  return 0LL;
}
