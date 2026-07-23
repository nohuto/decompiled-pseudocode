/*
 * XREFs of HvlGetMicrocodeLatency @ 0x1405BF900
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlGetMicrocodeLatency(_QWORD *a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v16; // [rsp+38h] [rbp-C8h]
  __int128 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  _BYTE v20[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[2064]; // [rsp+80h] [rbp-80h] BYREF

  v1 = 0;
  v15 = 0LL;
  *a1 = 0LL;
  LODWORD(v16) = 0;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v14 = 0LL;
  v17 = 0LL;
  v3 = HvlpAcquireHypercallPage((__int64)&v14, 1, (__int64)v20, 16LL);
  v4 = HvlpAcquireHypercallPage((__int64)&v17, 2, (__int64)v21, 1032LL);
  v5 = v16;
  *(_OWORD *)v3 = 0LL;
  *(_DWORD *)v3 = 48;
  v6 = v4;
  if ( (unsigned __int16)HvcallInitiateHypercall(123LL, v5) )
    v1 = -1073741823;
  else
    *a1 = *v6;
  HvlpReleaseHypercallPage((unsigned int *)&v14, v7, v8, v9);
  HvlpReleaseHypercallPage((unsigned int *)&v17, v10, v11, v12);
  return v1;
}
