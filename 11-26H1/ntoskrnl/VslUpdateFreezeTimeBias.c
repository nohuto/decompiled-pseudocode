/*
 * XREFs of VslUpdateFreezeTimeBias @ 0x140B26194
 * Callers:
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslUpdateFreezeTimeBias(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-80h]
  __int64 v8; // [rsp+30h] [rbp-78h]

  memset_0(v6, 0, 0x68uLL);
  v4 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
  v8 = a2;
  v7 = v4;
  return VslpEnterIumSecureMode(2u, 0x44u, 0, (__int64)v6);
}
