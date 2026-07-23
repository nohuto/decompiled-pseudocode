/*
 * XREFs of VslCreateSecureImageSection @ 0x14040E700
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslCreateSecureImageSection(
        unsigned int a1,
        int a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // r15
  __int64 v9; // r14
  __int64 result; // rax
  int v11; // ebx
  _QWORD v12[10]; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v14; // [rsp+88h] [rbp-51h]
  __int64 v15; // [rsp+90h] [rbp-49h]
  __int64 v16; // [rsp+98h] [rbp-41h]
  __int64 v17; // [rsp+A0h] [rbp-39h]
  __int64 v18; // [rsp+A8h] [rbp-31h]

  v7 = a3;
  v9 = a4;
  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  if ( a1 > 0x1FA )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((unsigned int)v12, a2, a1 << 12, 0, 0);
  if ( (int)result >= 0 )
  {
    v14 = v12[0];
    v15 = v12[7];
    v18 = a5;
    v16 = v7;
    v17 = v9;
    v11 = VslpEnterIumSecureMode(2u, 0x19u, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
    if ( v11 >= 0 )
      *a6 = v15;
    return (unsigned int)v11;
  }
  return result;
}
