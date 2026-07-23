/*
 * XREFs of VslQuerySecureKernelProfileInformation @ 0x140528D00
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslQuerySecureKernelProfileInformation(__int64 a1, struct _MDL *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v9; // edi
  __int64 *v10[10]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v11[8]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+88h] [rbp-A0h]
  __int64 *v13; // [rsp+90h] [rbp-98h]
  __int64 *v14; // [rsp+98h] [rbp-90h]

  memset_0(v11, 0, 0x68uLL);
  memset_0(v10, 0, 0x48uLL);
  if ( !*(_QWORD *)&HvlpVsmVtlCallVa )
    return 3224698910LL;
  if ( a3 > 0x1FA000 )
    return 3221225476LL;
  if ( !a3 || (result = VslpLockPagesForTransfer((__int64)v10, a2, a3, 2, 0), (int)result >= 0) )
  {
    v13 = v10[0];
    v14 = v10[7];
    v12 = a1;
    v9 = VslpEnterIumSecureMode(2u, 0x43u, 0, (__int64)v11);
    if ( v9 >= 0 )
      *a4 = (_DWORD)v13;
    if ( a3 )
      VslpUnlockPagesForTransfer(v10);
    return (unsigned int)v9;
  }
  return result;
}
