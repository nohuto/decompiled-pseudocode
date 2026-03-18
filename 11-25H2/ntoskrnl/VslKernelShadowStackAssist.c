/*
 * XREFs of VslKernelShadowStackAssist @ 0x140263EB0
 * Callers:
 *     KxContextToKframes @ 0x140263370 (KxContextToKframes.c)
 *     KeKernelShadowStackRestoreContext @ 0x140263E40 (KeKernelShadowStackRestoreContext.c)
 *     KiProcessDeferredDpcWatchdogViolation @ 0x140279214 (KiProcessDeferredDpcWatchdogViolation.c)
 *     KiProcessControlProtectionFromKernelMode @ 0x14043E53C (KiProcessControlProtectionFromKernelMode.c)
 *     KiCheckForFreezeExecution @ 0x1405AF800 (KiCheckForFreezeExecution.c)
 *     KiKernelShadowStackAssistMceAlternateReturn @ 0x1405C28E0 (KiKernelShadowStackAssistMceAlternateReturn.c)
 *     KiDebugTrapOrFault @ 0x1406AAE80 (KiDebugTrapOrFault.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslKernelShadowStackAssist(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rdi
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // ebx
  _BYTE v13[8]; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+40h] [rbp-C0h]
  __int64 v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+60h] [rbp-A0h]
  _DWORD BugCheckParameter3[6]; // [rsp+A0h] [rbp-60h] BYREF
  int v21; // [rsp+B8h] [rbp-48h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int64 v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]

  v7 = a1;
  memset_0(v13, 0, 0x68uLL);
  v18 = a5;
  LOBYTE(v10) = 2;
  v19 = a6;
  v14 = v7;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  result = VslpEnterIumSecureMode(v10, 274LL, 0LL, v13);
  v12 = result;
  if ( (int)result < 0 )
  {
    memset_0(BugCheckParameter3, 0, 0x98uLL);
    BugCheckParameter3[0] = v12;
    v22 = 67LL;
    v21 = 7;
    v23 = v7;
    v24 = a2;
    v25 = a3;
    v26 = a4;
    v27 = a5;
    v28 = a6;
    KeBugCheckEx(0x139u, 0x43uLL, 0LL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  return result;
}
