/*
 * XREFs of VslLiveDumpCaptureProcess @ 0x140B480F8
 * Callers:
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslLiveDumpCaptureProcess(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
  return VslpEnterIumSecureMode(2u, 0x41u, 0, (__int64)v3);
}
