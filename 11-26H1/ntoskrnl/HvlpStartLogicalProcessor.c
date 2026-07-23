/*
 * XREFs of HvlpStartLogicalProcessor @ 0x1405BDB6C
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1405BC94C (HvlpEnableNextLogicalProcessor.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpDepositPages @ 0x1405107E8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpStartLogicalProcessor(int a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  int v5; // r15d
  __int64 v7; // r14
  __int64 result; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  int v13; // edx
  unsigned __int64 v14; // rdx
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int16 v19; // bx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h]
  __int64 v25; // [rsp+38h] [rbp-28h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  unsigned __int64 v28; // [rsp+58h] [rbp-8h]

  v27 = 0LL;
  *(_OWORD *)a4 = 0LL;
  LODWORD(v28) = 0;
  *(_OWORD *)(a4 + 16) = 0LL;
  v24 = 0LL;
  v5 = a2;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  LODWORD(v25) = 0;
  v26 = 0LL;
  v23 = 0LL;
  v7 = *(unsigned __int16 *)(KeNodeBlock[a3] + 2);
  while ( 1 )
  {
    result = HvlpDepositPages(v7, a2, 0, 0);
    if ( (_DWORD)result )
      break;
    v9 = HvlpAcquireHypercallPage((__int64)&v26, 1, 0LL, 16LL);
    v10 = HvlpAcquireHypercallPage((__int64)&v23, 2, 0LL, 56LL);
    v11 = KeNodeBlock[v7];
    v12 = v10;
    *v9 = a1;
    v9[1] = v5;
    v13 = *(_DWORD *)(v11 + 4);
    LODWORD(v11) = v9[3] & 0xC0000001;
    v9[2] = v13;
    v14 = v28;
    v9[3] = v11 | 0x80000001;
    v15 = HvcallInitiateHypercall(118LL, v14);
    v19 = v15;
    if ( v15 != 11 )
    {
      *(_OWORD *)a4 = *(_OWORD *)v12;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)v12 + 1);
      *(_OWORD *)(a4 + 32) = *((_OWORD *)v12 + 2);
      *(_QWORD *)(a4 + 48) = v12[6];
      *(_WORD *)a4 = v15;
    }
    HvlpReleaseHypercallPage((unsigned int *)&v23, v16, v17, v18);
    HvlpReleaseHypercallPage((unsigned int *)&v26, v20, v21, v22);
    if ( v19 != 11 )
      return v19 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
