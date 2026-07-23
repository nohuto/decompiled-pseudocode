/*
 * XREFs of HvlGetGpaPagesAccessState @ 0x1402F3708
 * Callers:
 *     VmpProcessAccessedBatch @ 0x1406C5368 (VmpProcessAccessedBatch.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140742080 (memmove.c)
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
  __int64 v11; // rax
  const void *v12; // r12
  int v13; // eax
  int v14; // edi
  __int16 v15; // dx
  int v16; // ecx
  __int16 v17; // di
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 result; // rax
  __int128 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+30h] [rbp-30h]
  __int64 v24; // [rsp+38h] [rbp-28h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+58h] [rbp-8h]
  __int64 v28; // [rsp+A0h] [rbp+40h]
  _QWORD *v29; // [rsp+A8h] [rbp+48h]

  v26 = 0LL;
  LODWORD(v27) = 0;
  v23 = 0LL;
  v9 = 0;
  LODWORD(v24) = 0;
  v25 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v29 = (_QWORD *)HvlpAcquireHypercallPage(&v25, 1LL, 0LL, 0LL);
  v11 = HvlpAcquireHypercallPage(&v22, 2LL, 0LL, 0LL);
  *v29 = a1;
  v12 = (const void *)v11;
  v29[1] = a2;
  v13 = 0;
  v14 = 0;
  LODWORD(v28) = 201;
  while ( 1 )
  {
    v15 = 4096;
    if ( a3 < 0x1000 )
      v15 = a3;
    else
      v14 = v13;
    v16 = v14;
    v17 = v15 ^ v14;
    v18 = v27;
    v14 = v16 ^ v17 & 0xFFF;
    v29[2] = v10 + a4;
    HIDWORD(v28) = v14;
    v19 = HvcallInitiateHypercall(v28, v18, v24);
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
  HvlpReleaseHypercallPage(&v22);
  HvlpReleaseHypercallPage(&v25);
  result = v9;
  *a5 = v10;
  return result;
}
