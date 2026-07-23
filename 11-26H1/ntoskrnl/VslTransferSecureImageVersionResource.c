/*
 * XREFs of VslTransferSecureImageVersionResource @ 0x14040E250
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslTransferSecureImageVersionResource(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int v10; // ebx
  _QWORD v11[10]; // [rsp+30h] [rbp-A1h] BYREF
  _BYTE v12[8]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v13; // [rsp+88h] [rbp-49h]
  int v14; // [rsp+90h] [rbp-41h]
  __int64 v15; // [rsp+98h] [rbp-39h]
  __int64 v16; // [rsp+A0h] [rbp-31h]
  __int64 v17; // [rsp+A8h] [rbp-29h]

  memset_0(v12, 0, 0x68uLL);
  memset_0(v11, 0, 0x48uLL);
  if ( (((a3 & 0xFFF) + a4 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((unsigned int)v11, a3, a4, 0, 0);
  if ( (int)result >= 0 )
  {
    v15 = v11[0];
    v16 = v11[7];
    v17 = a5;
    v13 = a1;
    v14 = a2;
    v10 = VslpEnterIumSecureMode(2u, 0x21u, 0, (__int64)v12);
    VslpUnlockPagesForTransfer(v11);
    return v10;
  }
  return result;
}
