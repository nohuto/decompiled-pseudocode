/*
 * XREFs of PopSetDevicesSystemState @ 0x140C0BE80
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // eax
  _DWORD v2[6]; // [rsp+20h] [rbp-38h] BYREF
  char v3; // [rsp+38h] [rbp-20h]
  char v4; // [rsp+39h] [rbp-1Fh]
  char v5; // [rsp+3Ah] [rbp-1Eh]
  char v6; // [rsp+3Bh] [rbp-1Dh]

  v4 = byte_140F10449;
  v3 = byte_140F10422;
  v5 = byte_140F10448;
  v2[0] = dword_140F10458;
  v2[1] = dword_140F10454;
  v0 = dword_140F1044C;
  if ( (dword_140F1042C & 8) != 0 )
    v0 = 6;
  v2[5] = dword_140F1042C;
  v2[2] = v0;
  v2[3] = dword_140F10450;
  v2[4] = qword_140F10424;
  v6 = 0;
  return PoBroadcastSystemState(v2);
}
