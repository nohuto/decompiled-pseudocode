/*
 * XREFs of VslCreateSecureThread @ 0x140B27928
 * Callers:
 *     KeSecureThread @ 0x1404F8EE8 (KeSecureThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslCreateSecureThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned __int64 v11; // rax
  __int64 result; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+40h] [rbp-88h]
  __int64 v18; // [rsp+48h] [rbp-80h]
  __int64 v19; // [rsp+50h] [rbp-78h]
  __int64 v20; // [rsp+58h] [rbp-70h]

  memset_0(v13, 0, 0x68uLL);
  v11 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
  v15 = a2;
  v14 = v11;
  v16 = *(_QWORD *)(a3 + 48);
  v19 = a5;
  v20 = a6;
  v17 = a3;
  v18 = a4;
  result = VslpEnterIumSecureMode(2u, 8u, 0, (__int64)v13);
  if ( (int)result >= 0 )
    *a7 = v15;
  return result;
}
