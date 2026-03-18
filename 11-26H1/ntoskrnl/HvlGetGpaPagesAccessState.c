/*
 * XREFs of HvlGetGpaPagesAccessState @ 0x1403E6828
 * Callers:
 *     VmpProcessAccessedBatch @ 0x1406C1788 (VmpProcessAccessedBatch.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall HvlGetGpaPagesAccessState(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v9; // r14d
  __int64 v10; // rsi
  _QWORD *v11; // rax
  const void *v12; // r12
  int v13; // eax
  int v14; // edi
  __int16 v15; // dx
  int v16; // ecx
  __int16 v17; // di
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 result; // rax
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int64 v30; // [rsp+38h] [rbp-28h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]
  unsigned __int64 v33; // [rsp+58h] [rbp-8h]
  __int64 v34; // [rsp+A0h] [rbp+40h]
  _QWORD *v35; // [rsp+A8h] [rbp+48h]

  v32 = 0LL;
  LODWORD(v33) = 0;
  v29 = 0LL;
  v9 = 0;
  LODWORD(v30) = 0;
  v31 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  v35 = HvlpAcquireHypercallPage((__int64)&v31, 1, 0LL, 0LL);
  v11 = HvlpAcquireHypercallPage((__int64)&v28, 2, 0LL, 0LL);
  *v35 = a1;
  v12 = v11;
  v35[1] = a2;
  v13 = 0;
  v14 = 0;
  LODWORD(v34) = 201;
  while ( 1 )
  {
    v15 = 4096;
    if ( a3 < 0x1000 )
      v15 = a3;
    else
      v14 = v13;
    v16 = v14;
    v17 = v15 ^ v14;
    v18 = v33;
    v14 = v16 ^ v17 & 0xFFF;
    v35[2] = v10 + a4;
    HIDWORD(v34) = v14;
    v19 = HvcallInitiateHypercall(v34, v18);
    v20 = WORD2(v19) & 0xFFF;
    if ( (_WORD)v19 )
      break;
    memmove((void *)(v10 + a6), v12, WORD2(v19) & 0xFFF);
    v10 += v20;
    v13 = v14;
    a3 -= v20;
    if ( !a3 )
      goto LABEL_7;
  }
  v10 += v20;
  v9 = HvlpHvToNtStatus((unsigned __int16)v19);
LABEL_7:
  HvlpReleaseHypercallPage((unsigned int *)&v28, v21, v22, v23);
  HvlpReleaseHypercallPage((unsigned int *)&v31, v24, v25, v26);
  result = v9;
  *a5 = v10;
  return result;
}
