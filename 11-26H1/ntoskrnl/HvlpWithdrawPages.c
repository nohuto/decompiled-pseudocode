/*
 * XREFs of HvlpWithdrawPages @ 0x1405BDE84
 * Callers:
 *     HvlpAddRemovePhysicalMemory @ 0x1407231E0 (HvlpAddRemovePhysicalMemory.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HvlpWithdrawPages()
{
  _QWORD *v0; // rbx
  unsigned __int64 *v1; // r13
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r15
  unsigned int v8; // r12d
  unsigned int v9; // eax
  __int16 v10; // cx
  __int16 v11; // si
  signed __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+30h] [rbp-D8h]
  __int64 v21; // [rsp+38h] [rbp-D0h]
  unsigned __int64 *v22; // [rsp+40h] [rbp-C8h]
  __m256i v23; // [rsp+50h] [rbp-B8h] BYREF
  __m256i v24; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v25; // [rsp+90h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-70h] BYREF
  __int16 v27; // [rsp+A0h] [rbp-68h]
  __int16 v28; // [rsp+A2h] [rbp-66h]
  __int64 v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C4h] [rbp-44h]
  _BYTE v32[512]; // [rsp+C8h] [rbp-40h] BYREF

  LODWORD(v25) = 0;
  memset(&v24.m256i_u64[1], 0, 24);
  v24.m256i_i32[0] = 0;
  memset(&v23.m256i_u64[1], 0, 24);
  memset_0(&BugCheckParameter2, 0, 0x230uLL);
  v0 = HvlpAcquireHypercallPage((__int64)&v24.m256i_i64[1], 1, 0LL, 0LL);
  v22 = HvlpAcquireHypercallPage((__int64)&v23.m256i_i64[1], 2, 0LL, 0LL);
  v0[1] = 0LL;
  v1 = v22;
  v2 = v25;
  v3 = v25;
  *v0 = -1LL;
  v23.m256i_i64[0] = v3;
  if ( !(unsigned __int16)HvcallInitiateHypercall(74LL, v3) )
  {
    v7 = *v22;
    v4 = 4095LL;
    v0[1] = 0LL;
    LODWORD(v20) = 73;
    *v0 = -1LL;
    v8 = 0;
    do
    {
      if ( !v7 )
        break;
      v9 = v8;
      v10 = 512;
      if ( v7 < 0x200 )
        v10 = v7;
      v8 = v8 & 0xFFFFF000 | v10 & 0xFFF;
      HIDWORD(v20) = v9 & 0xFFFFF000 | v10 & 0xFFF;
      v21 = HvcallInitiateHypercall(v20, v2);
      v4 = 4095LL;
      v7 -= WORD2(v21) & 0xFFF;
      if ( (v21 & 0xFFF00000000LL) != 0 )
      {
        v11 = WORD2(v21);
        v12 = (char *)v1 - v32;
        do
        {
          BugCheckParameter2 = 0LL;
          v13 = v11 & 0xFFF;
          v28 = 0;
          v29 = 0LL;
          v31 = 0;
          if ( (unsigned int)v13 > 0x40 )
            v13 = 64LL;
          v30 = (_DWORD)v13 << 12;
          v27 = 8 * (v13 + 6);
          if ( (_DWORD)v13 )
          {
            v14 = v32;
            v15 = (unsigned int)v13;
            do
            {
              *v14 = *(_QWORD *)((char *)v14 + v12);
              ++v14;
              --v15;
            }
            while ( v15 );
          }
          MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0, 0, 0);
          v12 += 8 * v13;
          v4 = 4095LL;
          v11 = v11 & 0xF000 | (v11 - v13) & 0xFFF;
        }
        while ( (v11 & 0xFFF) != 0 );
        v8 = HIDWORD(v20);
        v1 = v22;
        v2 = v23.m256i_i64[0];
      }
    }
    while ( !(_WORD)v21 );
  }
  HvlpReleaseHypercallPage(&v23.m256i_u32[2], v4, v5, v6);
  return HvlpReleaseHypercallPage(&v24.m256i_u32[2], v16, v17, v18);
}
