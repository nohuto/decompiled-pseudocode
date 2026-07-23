/*
 * XREFs of KeKernelShadowStackRestoreContext @ 0x14036A1B0
 * Callers:
 *     RtlRestoreContext @ 0x140537140 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140537490 (RcFrameConsolidation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeKernelShadowStackRestoreContext(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // r15d
  _DWORD BugCheckParameter3[6]; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+48h] [rbp-B8h]
  __int64 v12; // [rsp+50h] [rbp-B0h]
  __int64 v13; // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  _BYTE v19[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v20; // [rsp+D8h] [rbp-28h]
  __int64 v21; // [rsp+E0h] [rbp-20h]
  __int64 v22; // [rsp+E8h] [rbp-18h]
  __int64 v23; // [rsp+F0h] [rbp-10h]
  __int64 v24; // [rsp+F8h] [rbp-8h]
  unsigned int v25; // [rsp+100h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 48) & 0x100080) == 0x100080 )
    v4 = *(_QWORD *)(*(int *)(a1 + 1256) + a1 + 1232);
  else
    v4 = a2;
  if ( a3 && *a3 == -2147483610 )
    v5 = 2;
  else
    v5 = 0;
  v6 = *(_QWORD *)(a1 + 248);
  memset_0(v19, 0, 0x68uLL);
  v20 = 1;
  v21 = 0LL;
  v22 = a2;
  LOBYTE(v7) = 2;
  v23 = v4;
  v24 = v6;
  v25 = v5;
  result = VslpEnterIumSecureMode(v7, 289LL, 0LL, v19);
  v9 = result;
  if ( (int)result < 0 )
  {
    memset_0(BugCheckParameter3, 0, 0x98uLL);
    v12 = 67LL;
    v18 = v5;
    BugCheckParameter3[0] = v9;
    v11 = 7;
    v13 = 1LL;
    v14 = 0LL;
    v15 = a2;
    v16 = v4;
    v17 = v6;
    KeBugCheckEx(0x139u, 0x43uLL, 0LL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  return result;
}
