/*
 * XREFs of VslInitFunctionOverrideCapabilities @ 0x1405C49A8
 * Callers:
 *     MiInitializeFunctionOverrides @ 0x140CF351C (MiInitializeFunctionOverrides.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040FF88 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410B74 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslInitFunctionOverrideCapabilities(struct _MDL *a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 *v4[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v5[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v6; // [rsp+88h] [rbp-80h]
  __int64 *v7; // [rsp+90h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  memset_0(v4, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v4, a1, 0x5Au, 1, 6u);
  if ( (int)result >= 0 )
  {
    v6 = v4[0];
    v7 = v4[7];
    v3 = VslpEnterIumSecureMode(2u, 0xE4u, 0, (__int64)v5);
    VslpUnlockPagesForTransfer(v4);
    return v3;
  }
  return result;
}
