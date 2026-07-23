/*
 * XREFs of HvlPrepareForHibernate @ 0x1405C1BB8
 * Callers:
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlPrepareForHibernate(__int128 *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 *a5)
{
  unsigned int v9; // r14d
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int128 v12; // xmm0
  _QWORD *v13; // rsi
  __int128 v14; // xmm1
  unsigned __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int64 v28; // [rsp+38h] [rbp-28h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  unsigned __int64 v31; // [rsp+58h] [rbp-8h]

  v30 = 0LL;
  LODWORD(v31) = 0;
  v27 = 0LL;
  LODWORD(v28) = 0;
  v9 = 0;
  v29 = 0LL;
  v26 = 0LL;
  v10 = HvlpAcquireHypercallPage((__int64)&v29, 1, 0LL, 88LL);
  v11 = HvlpAcquireHypercallPage((__int64)&v26, 2, 0LL, 32LL);
  v12 = *a1;
  v13 = v11;
  v14 = a1[1];
  v15 = v31;
  *(_DWORD *)((char *)v10 + 81) = 0;
  *(_WORD *)((char *)v10 + 85) = 0;
  *((_BYTE *)v10 + 87) = 0;
  *(_OWORD *)v10 = v12;
  *((_BYTE *)v10 + 80) = 0;
  v16 = a1[2];
  *((_OWORD *)v10 + 1) = v14;
  v17 = a1[3];
  *((_OWORD *)v10 + 2) = v16;
  v18 = a1[4];
  *((_OWORD *)v10 + 3) = v17;
  *((_OWORD *)v10 + 4) = v18;
  if ( (unsigned __int16)HvcallInitiateHypercall(134LL, v15) )
  {
    v9 = -1073741823;
  }
  else
  {
    *a2 = *v13;
    *a3 = v13[1];
    *a4 = v13[2];
    v19 = v13[3];
    *a5 = v19;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v26, v19, v20, v21);
  HvlpReleaseHypercallPage((unsigned int *)&v29, v22, v23, v24);
  return v9;
}
