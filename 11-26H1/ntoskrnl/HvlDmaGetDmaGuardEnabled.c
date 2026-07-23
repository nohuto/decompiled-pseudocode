/*
 * XREFs of HvlDmaGetDmaGuardEnabled @ 0x1405BED70
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaGetDmaGuardEnabled(_BYTE *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  unsigned __int64 v4; // rdx
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  unsigned __int16 v7; // bx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __m256i v14; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v15; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp-A8h]
  _BYTE v17[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v18[2064]; // [rsp+88h] [rbp-80h] BYREF

  LODWORD(v16) = 0;
  v15.m256i_i32[0] = 0;
  memset(&v15.m256i_u64[1], 0, 24);
  memset(&v14.m256i_u64[1], 0, 24);
  v2 = HvlpAcquireHypercallPage((__int64)&v15.m256i_i64[1], 1, (__int64)v17, 16LL);
  v3 = HvlpAcquireHypercallPage((__int64)&v14.m256i_i64[1], 2, (__int64)v18, 1032LL);
  v4 = v16;
  *(_OWORD *)v2 = 0LL;
  *(_DWORD *)v2 = 20;
  v5 = v3;
  v7 = HvcallInitiateHypercall(123LL, v4);
  if ( !v7 )
    *a1 = *v5;
  HvlpReleaseHypercallPage(&v14.m256i_u32[2], v6, v8, v9);
  HvlpReleaseHypercallPage(&v15.m256i_u32[2], v10, v11, v12);
  return HvlpHvToNtStatus(v7);
}
