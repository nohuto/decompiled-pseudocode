/*
 * XREFs of HvlGetSyntheticMachineCheckContext @ 0x1405BBC28
 * Callers:
 *     HvGetMachineCheckContext @ 0x1405BE290 (HvGetMachineCheckContext.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlGetSyntheticMachineCheckContext(int a1, _OWORD *a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  _OWORD *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int64 v18; // [rsp+38h] [rbp-28h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  unsigned __int64 v21; // [rsp+58h] [rbp-8h]

  v20 = 0LL;
  LODWORD(v21) = 0;
  v17 = 0LL;
  LODWORD(v18) = 0;
  v4 = 0;
  v19 = 0LL;
  v16 = 0LL;
  v5 = HvlpAcquireHypercallPage((__int64)&v19, 1, 0LL, 4LL);
  v6 = HvlpAcquireHypercallPage((__int64)&v16, 2, 0LL, 32LL);
  v7 = v21;
  v8 = v6;
  *(_DWORD *)v5 = a1;
  if ( (unsigned __int16)HvcallInitiateHypercall(283LL, v7) )
  {
    v4 = -1073741823;
  }
  else
  {
    *a2 = *v8;
    a2[1] = v8[1];
  }
  HvlpReleaseHypercallPage((unsigned int *)&v16, v9, v10, v11);
  HvlpReleaseHypercallPage((unsigned int *)&v19, v12, v13, v14);
  return v4;
}
