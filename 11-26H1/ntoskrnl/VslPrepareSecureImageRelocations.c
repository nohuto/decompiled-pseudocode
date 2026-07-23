/*
 * XREFs of VslPrepareSecureImageRelocations @ 0x14040E4A0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslPrepareSecureImageRelocations(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  int v13; // ebx
  _QWORD v17[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[10]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v19[10]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v20[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v21; // [rsp+138h] [rbp+38h]
  __int64 v22; // [rsp+140h] [rbp+40h]
  __int64 v23; // [rsp+148h] [rbp+48h]
  __int64 v24; // [rsp+150h] [rbp+50h]
  __int64 v25; // [rsp+158h] [rbp+58h]
  __int64 v26; // [rsp+160h] [rbp+60h]
  __int64 v27; // [rsp+168h] [rbp+68h]
  __int64 v28; // [rsp+170h] [rbp+70h]

  memset_0(v20, 0, 0x68uLL);
  memset_0(v19, 0, 0x48uLL);
  memset_0(v18, 0, 0x48uLL);
  memset_0(v17, 0, 0x48uLL);
  v10 = ((unsigned __int64)(a3 & 0xFFF) + a4 + 4095) >> 12;
  if ( v10 > 0x1FA )
    return 3221225485LL;
  v11 = ((unsigned __int64)(a7 & 0xFFF) + a8 + 4095) >> 12;
  if ( v11 > 0x1FA )
    return 3221225485LL;
  v12 = ((a5 & 0xFFF) + (unsigned __int64)a6 + 4095) >> 12;
  if ( v12 > 0x1FA )
    return 3221225485LL;
  if ( !v10 || (v13 = VslpLockPagesForTransfer((unsigned int)v19, a3, a4, 0, 0), v13 >= 0) )
  {
    if ( !v11 || (v13 = VslpLockPagesForTransfer((unsigned int)v18, a7, a8, 0, 0), v13 >= 0) )
    {
      if ( !v12 || (v13 = VslpLockPagesForTransfer((unsigned int)v17, a5, a6, 0, 0), v13 >= 0) )
      {
        v21 = a1;
        v22 = a2;
        v23 = v19[0];
        v24 = v19[7];
        v25 = v17[0];
        v26 = v17[7];
        v27 = v18[0];
        v28 = v18[7];
        v13 = VslpEnterIumSecureMode(2u, 0x1Du, 0, (__int64)v20);
      }
    }
  }
  if ( v17[0] )
    VslpUnlockPagesForTransfer(v17);
  if ( v18[0] )
    VslpUnlockPagesForTransfer(v18);
  if ( v19[0] )
    VslpUnlockPagesForTransfer(v19);
  return (unsigned int)v13;
}
