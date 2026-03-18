/*
 * XREFs of VslKernelShadowStackAssist @ 0x140368500
 * Callers:
 *     KiProcessDeferredDpcWatchdogViolation @ 0x14032D1E8 (KiProcessDeferredDpcWatchdogViolation.c)
 *     KxContextToKframes @ 0x1403D52E0 (KxContextToKframes.c)
 *     KiProcessControlProtectionFromKernelMode @ 0x14052865C (KiProcessControlProtectionFromKernelMode.c)
 *     KiCheckForFreezeExecution @ 0x1405E79B0 (KiCheckForFreezeExecution.c)
 *     KiKernelShadowStackAssistMceAlternateReturn @ 0x1405FAC70 (KiKernelShadowStackAssistMceAlternateReturn.c)
 *     KiDebugTrapOrFault @ 0x140733480 (KiDebugTrapOrFault.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslKernelShadowStackAssist(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rdi
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // ebx
  _DWORD BugCheckParameter3[6]; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+48h] [rbp-B8h]
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  __int64 v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _BYTE v22[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  __int64 v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  int v28; // [rsp+100h] [rbp+0h]

  v7 = a1;
  memset_0(v22, 0, 0x68uLL);
  v27 = a5;
  LOBYTE(v10) = 2;
  v28 = a6;
  v23 = v7;
  v24 = a2;
  v25 = a3;
  v26 = a4;
  result = VslpEnterIumSecureMode(v10, 289LL, 0LL, v22);
  v12 = result;
  if ( (int)result < 0 )
  {
    memset_0(BugCheckParameter3, 0, 0x98uLL);
    BugCheckParameter3[0] = v12;
    v15 = 67LL;
    v14 = 7;
    v16 = v7;
    v17 = a2;
    v18 = a3;
    v19 = a4;
    v20 = a5;
    v21 = a6;
    KeBugCheckEx(0x139u, 0x43uLL, 0LL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  return result;
}
