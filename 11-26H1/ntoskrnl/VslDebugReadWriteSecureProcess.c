/*
 * XREFs of VslDebugReadWriteSecureProcess @ 0x140A2C2D8
 * Callers:
 *     MiCopyVmReadBytes @ 0x140A2BED0 (MiCopyVmReadBytes.c)
 *     MiCopyVmWriteBytes @ 0x140A2C1D0 (MiCopyVmWriteBytes.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslDebugReadWriteSecureProcess(
        __int64 a1,
        __int64 a2,
        struct _MDL *a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  __int64 v8; // r14
  char v10; // dl
  unsigned int v11; // r15d
  __int64 result; // rax
  unsigned __int64 v13; // rax
  int v14; // r14d
  __int64 *v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int64 *v21; // [rsp+B0h] [rbp-50h]
  __int64 *v22; // [rsp+B8h] [rbp-48h]
  __int64 v23; // [rsp+C0h] [rbp-40h]

  v8 = a1;
  memset_0(v17, 0, 0x68uLL);
  memset_0(v16, 0, 0x48uLL);
  *a6 = 0LL;
  v10 = a5 != 0;
  while ( a4 )
  {
    v11 = a4;
    if ( 2072576 - ((unsigned __int16)a3 & 0xFFFu) <= a4 )
      v11 = 2072576 - ((unsigned __int16)a3 & 0xFFF);
    result = VslpLockPagesForTransfer((__int64)v16, a3, v11, v10, 0);
    if ( (int)result < 0 )
      return result;
    v13 = *(_QWORD *)(v8 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
    v19 = a2;
    v18 = v13;
    v20 = a5;
    v21 = v16[0];
    v22 = v16[7];
    v23 = 0LL;
    v14 = VslpEnterIumSecureMode(2u, 0x29u, 0, (__int64)v17);
    VslpUnlockPagesForTransfer(v16);
    *a6 += v23;
    if ( v14 < 0 )
      return (unsigned int)v14;
    v10 = a5 != 0;
    v8 = a1;
    a2 += v11;
    a3 = (struct _MDL *)((char *)a3 + v11);
    a4 -= v11;
  }
  return 0LL;
}
