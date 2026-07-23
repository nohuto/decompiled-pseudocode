/*
 * XREFs of VslFinishSecureImageValidation @ 0x14040E350
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslFreePoolTransferObject @ 0x14040E44C (VslFreePoolTransferObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslFinishSecureImageValidation(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        _BYTE *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _DWORD *a9)
{
  int v13; // ebx
  _BYTE v15[8]; // [rsp+30h] [rbp-81h] BYREF
  __int64 v16; // [rsp+38h] [rbp-79h]
  __int64 v17; // [rsp+40h] [rbp-71h]
  int v18; // [rsp+48h] [rbp-69h]
  char v19; // [rsp+4Ch] [rbp-65h]
  char v20; // [rsp+4Dh] [rbp-64h]
  PVOID P; // [rsp+50h] [rbp-61h]
  __int64 v22; // [rsp+58h] [rbp-59h]
  int v23; // [rsp+60h] [rbp-51h]

  memset_0(v15, 0, 0x68uLL);
  v17 = a2;
  v16 = a1;
  v18 = a3;
  v19 = a4;
  P = 0LL;
  v13 = VslpEnterIumSecureMode(2u, 0x1Bu, 0, (__int64)v15);
  *a9 = v23;
  if ( v13 >= 0 )
  {
    *a5 = v20;
    *a8 = v22;
  }
  if ( P )
  {
    *a6 = VslFreePoolTransferObject(P);
  }
  else
  {
    *a6 = 0LL;
    *a7 = 0LL;
  }
  return (unsigned int)v13;
}
