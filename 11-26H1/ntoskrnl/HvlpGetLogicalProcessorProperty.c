/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x1404DF648
 * Callers:
 *     HvlLpGetLogicalProcessorHwId @ 0x1404DF600 (HvlLpGetLogicalProcessorHwId.c)
 *     HvGetMachineCheckContext @ 0x1405BE290 (HvGetMachineCheckContext.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, _OWORD *a3)
{
  unsigned int v6; // r14d
  _DWORD *v7; // rbx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  _OWORD *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  unsigned __int64 v24; // [rsp+58h] [rbp-8h]

  v23 = 0LL;
  LODWORD(v24) = 0;
  v20 = 0LL;
  LODWORD(v21) = 0;
  v6 = 0;
  v22 = 0LL;
  v19 = 0LL;
  v7 = HvlpAcquireHypercallPage((__int64)&v22, 1, 0LL, 8LL);
  v8 = HvlpAcquireHypercallPage((__int64)&v19, 2, 0LL, 32LL);
  v9 = v24;
  v10 = v8;
  *v7 = a1;
  v7[1] = a2;
  if ( (unsigned __int16)HvcallInitiateHypercall(122LL, v9) )
  {
    v6 = -1073741823;
  }
  else
  {
    v14 = v10[1];
    *a3 = *v10;
    a3[1] = v14;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v19, v11, v12, v13);
  HvlpReleaseHypercallPage((unsigned int *)&v22, v15, v16, v17);
  return v6;
}
