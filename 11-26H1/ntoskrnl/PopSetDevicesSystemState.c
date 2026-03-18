/*
 * XREFs of PopSetDevicesSystemState @ 0x140C05C70
 * Callers:
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // eax
  _DWORD v2[6]; // [rsp+20h] [rbp-38h] BYREF
  char v3; // [rsp+38h] [rbp-20h]
  char v4; // [rsp+39h] [rbp-1Fh]
  char v5; // [rsp+3Ah] [rbp-1Eh]
  char v6; // [rsp+3Bh] [rbp-1Dh]

  v4 = byte_140F0FB89;
  v3 = byte_140F0FB62;
  v5 = byte_140F0FB88;
  v2[0] = dword_140F0FB98;
  v2[1] = dword_140F0FB94;
  v0 = dword_140F0FB8C;
  if ( (dword_140F0FB6C & 8) != 0 )
    v0 = 6;
  v2[5] = dword_140F0FB6C;
  v2[2] = v0;
  v2[3] = dword_140F0FB90;
  v2[4] = qword_140F0FB64;
  v6 = 0;
  return PoBroadcastSystemState(v2);
}
