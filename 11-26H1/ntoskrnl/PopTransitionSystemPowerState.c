/*
 * XREFs of PopTransitionSystemPowerState @ 0x140C0B030
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 */

__int64 __fastcall PopTransitionSystemPowerState(int a1, int a2, int a3)
{
  _DWORD v7[3]; // [rsp+20h] [rbp-188h] BYREF
  _BYTE v8[340]; // [rsp+2Ch] [rbp-17Ch] BYREF

  memset_0(v8, 0, 0x14CuLL);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  return PopTransitionSystemPowerStateEx(v7);
}
