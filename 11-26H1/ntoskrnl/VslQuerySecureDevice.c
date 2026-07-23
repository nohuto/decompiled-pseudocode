/*
 * XREFs of VslQuerySecureDevice @ 0x140795400
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslQuerySecureDevice(__int64 *a1, __int64 a2)
{
  int v4; // eax
  __int64 result; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+28h] [rbp-80h]
  int v8; // [rsp+30h] [rbp-78h]
  char v9; // [rsp+34h] [rbp-74h]
  char v10; // [rsp+35h] [rbp-73h]
  __int64 v11; // [rsp+38h] [rbp-70h]

  memset_0(v6, 0, 0x68uLL);
  *(_OWORD *)a2 = 0LL;
  v4 = *((_DWORD *)a1 + 2);
  v7 = *a1;
  v8 = v4;
  result = VslpEnterIumSecureMode(2u, 0x47u, 0, (__int64)v6);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)a2 = v9;
    *(_BYTE *)(a2 + 1) = v10;
    *(_QWORD *)(a2 + 8) = v11;
  }
  return result;
}
