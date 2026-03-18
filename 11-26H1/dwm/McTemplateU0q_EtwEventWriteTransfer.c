/*
 * XREFs of McTemplateU0q_EtwEventWriteTransfer @ 0x14000CD70
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x1400044E0 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14000CD0C (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0q_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+38h] [rbp-30h] BYREF

  v4 = 0;
  v5[2] = &v4;
  v5[3] = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(a1, (__int64)&StartDWMTransport, a3, 2LL, (__int64)v5);
}
