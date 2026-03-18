/*
 * XREFs of VslCaptureSecureImageIat @ 0x140A9AC50
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1402D45D0 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslCaptureSecureImageIat(__int64 a1, struct _MDL *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 *v8[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v9[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v10; // [rsp+88h] [rbp-80h]
  __int64 *v11; // [rsp+90h] [rbp-78h]
  __int64 *v12; // [rsp+98h] [rbp-70h]

  memset_0(v9, 0, 0x68uLL);
  memset_0(v8, 0, 0x48uLL);
  if ( ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v8, a2, a3, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v11 = v8[0];
    v12 = v8[7];
    v10 = a1;
    v7 = VslpEnterIumSecureMode(2u, 0x2Bu, 0, (__int64)v9);
    VslpUnlockPagesForTransfer(v8);
    return v7;
  }
  return result;
}
