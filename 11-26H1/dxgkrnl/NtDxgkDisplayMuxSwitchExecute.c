/*
 * XREFs of NtDxgkDisplayMuxSwitchExecute @ 0x1401B9650
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     DxgkDisplayMuxSwitchExecute @ 0x1400911A0 (DxgkDisplayMuxSwitchExecute.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtDxgkDisplayMuxSwitchExecute(char *Src)
{
  _QWORD v3[30]; // [rsp+50h] [rbp-108h] BYREF

  memset(v3, 0, 0xE8uLL);
  RtlCopyFromUser(v3, Src, 0xE8uLL);
  DxgkDisplayMuxSwitchExecute(v3);
  RtlCopyToUser(Src + 64, &v3[8], 0xA0uLL);
  RtlWriteULongToUser((_DWORD *)Src + 56, v3[28]);
  return 0LL;
}
