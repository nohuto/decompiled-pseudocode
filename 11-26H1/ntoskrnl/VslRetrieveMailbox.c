/*
 * XREFs of VslRetrieveMailbox @ 0x1405C67F0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslRetrieveMailbox(__int64 a1, _QWORD *a2, unsigned __int8 a3, struct _MDL *a4, __int64 **a5)
{
  int v6; // r14d
  __int64 *v9; // rax
  __int64 result; // rax
  __int128 v11; // xmm0
  unsigned int v12; // ebx
  __int64 *v13[10]; // [rsp+38h] [rbp-91h] BYREF
  char v14[8]; // [rsp+88h] [rbp-41h] BYREF
  __int64 *v15; // [rsp+90h] [rbp-39h]
  __int64 *v16; // [rsp+98h] [rbp-31h]
  __int128 v17; // [rsp+A0h] [rbp-29h]
  __int64 v18; // [rsp+B0h] [rbp-19h]
  int v19; // [rsp+B8h] [rbp-11h]

  v6 = a3;
  memset_0(v14, 0, 0x68uLL);
  memset_0(v13, 0, 0x48uLL);
  if ( !*a2 && !a2[1] )
    return 3221225485LL;
  v9 = *a5;
  if ( (unsigned __int64)*a5 > 0x1FA000 || !v9 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v13, a4, (unsigned int)v9, 2, 0);
  if ( (int)result >= 0 )
  {
    v11 = *(_OWORD *)a2;
    v15 = v13[0];
    v16 = v13[7];
    v17 = v11;
    v18 = a1;
    v19 = v6;
    v12 = VslpEnterIumSecureMode(2u, 0x14u, 0, (__int64)v14);
    VslpUnlockPagesForTransfer(v13);
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
      *a5 = v16;
    return v12;
  }
  return result;
}
