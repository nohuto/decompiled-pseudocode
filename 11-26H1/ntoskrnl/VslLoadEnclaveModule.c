/*
 * XREFs of VslLoadEnclaveModule @ 0x140B3597C
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslLoadEnclaveModule(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _MDL *a5,
        unsigned int a6,
        _BYTE *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  __int64 result; // rax
  int v13; // ebx
  __int64 *v15[10]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v16[8]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-68h]
  __int64 v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  __int64 v20; // [rsp+B8h] [rbp-50h]
  __int64 *v21; // [rsp+C0h] [rbp-48h]
  __int64 *v22; // [rsp+C8h] [rbp-40h]

  memset_0(v16, 0, 0x68uLL);
  memset_0(v15, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v15, a5, a6, 0, 0);
  if ( (int)result >= 0 )
  {
    v17 = a1;
    v21 = v15[0];
    v22 = v15[7];
    v18 = a2;
    v19 = a4;
    v20 = a3;
    v13 = VslpEnterIumSecureMode(2u, 0x31u, 0, (__int64)v16);
    VslpUnlockPagesForTransfer(v15);
    if ( v13 >= 0 )
    {
      if ( a7 )
        *a7 = v18;
      if ( a8 )
        *a8 = v19;
      if ( a9 )
        *a9 = v20;
    }
    return (unsigned int)v13;
  }
  return result;
}
