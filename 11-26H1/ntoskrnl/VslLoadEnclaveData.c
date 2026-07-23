/*
 * XREFs of VslLoadEnclaveData @ 0x140794F50
 * Callers:
 *     PsLoadVsmEnclaveData @ 0x140619BC8 (PsLoadVsmEnclaveData.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14041084C (VslpLockMdlForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslLoadEnclaveData(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // r14
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // ebx
  __int64 *v12[10]; // [rsp+28h] [rbp-99h] BYREF
  _BYTE v13[8]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v14; // [rsp+80h] [rbp-41h]
  __int64 v15; // [rsp+88h] [rbp-39h]
  __int64 v16; // [rsp+90h] [rbp-31h]
  __int64 v17; // [rsp+98h] [rbp-29h]
  __int64 v18; // [rsp+A0h] [rbp-21h]
  __int64 *v19; // [rsp+A8h] [rbp-19h]

  v7 = a3;
  v9 = a4;
  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  if ( !a5 || (result = VslpLockMdlForTransfer((__int64)v12, a5, 0), (int)result >= 0) )
  {
    v19 = v12[7];
    v14 = a1;
    v15 = a2;
    v16 = v7;
    v17 = v9;
    v18 = a5;
    v11 = VslpEnterIumSecureMode(2u, 0x30u, 0, (__int64)v13);
    if ( a5 )
      VslpUnlockPagesForTransfer(v12);
    if ( v11 >= 0 )
      *a6 = v15;
    return (unsigned int)v11;
  }
  return result;
}
