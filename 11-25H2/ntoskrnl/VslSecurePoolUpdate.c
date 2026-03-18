/*
 * XREFs of VslSecurePoolUpdate @ 0x14058AE4C
 * Callers:
 *     ExSecurePoolUpdate @ 0x14064C610 (ExSecurePoolUpdate.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1402D45D0 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslSecurePoolUpdate(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _MDL *a7)
{
  int v11; // ebx
  __int64 *v13[10]; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE v14[8]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v15; // [rsp+90h] [rbp-49h]
  __int64 v16; // [rsp+98h] [rbp-41h]
  __int64 v17; // [rsp+A0h] [rbp-39h]
  __int64 v18; // [rsp+A8h] [rbp-31h]
  __int64 *v19; // [rsp+B0h] [rbp-29h]
  __int64 *v20; // [rsp+B8h] [rbp-21h]
  __int64 v21; // [rsp+C0h] [rbp-19h]
  int v22; // [rsp+C8h] [rbp-11h]

  memset_0(v14, 0, 0x68uLL);
  memset_0(v13, 0, 0x48uLL);
  v17 = a5;
  v18 = a6;
  v15 = a1;
  v16 = a3;
  v21 = a4;
  v22 = a2;
  v11 = VslpLockPagesForTransfer((__int64)v13, a7, a6, IoReadAccess, 0);
  if ( v11 >= 0 )
  {
    v19 = v13[0];
    v20 = v13[7];
    v11 = VslpEnterIumSecureMode(2u, 0x57u, 0, (__int64)v14);
  }
  if ( v13[0] )
    VslpUnlockPagesForTransfer(v13);
  return (unsigned int)v11;
}
