/*
 * XREFs of HvlQueryNumaDistance @ 0x1405BBE00
 * Callers:
 *     KiComputeNumaCosts @ 0x140CCF47C (KiComputeNumaCosts.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  _DWORD *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int64 v22; // [rsp+38h] [rbp-28h]
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  unsigned __int64 v25; // [rsp+58h] [rbp-8h]

  v3 = a2;
  v4 = a1;
  v24 = 0LL;
  LODWORD(v25) = 0;
  v21 = 0LL;
  LODWORD(v22) = 0;
  v23 = 0LL;
  v20 = 0LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v23, 1, 0LL, 8LL);
  v7 = HvlpAcquireHypercallPage((__int64)&v20, 2, 0LL, 8LL);
  v8 = KeNodeBlock[v3];
  *v6 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[v4] + 2)] + 4);
  v9 = v25;
  v6[1] = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(v8 + 2)] + 4);
  v10 = HvcallInitiateHypercall(120LL, v9);
  if ( v10 )
    v14 = -1LL;
  else
    v14 = *v7;
  *a3 = v14;
  v15 = v10 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v20, v11, v12, v13);
  HvlpReleaseHypercallPage((unsigned int *)&v23, v16, v17, v18);
  return v15;
}
