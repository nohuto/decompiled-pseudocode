/*
 * XREFs of HvlGetRootVpSharedPages @ 0x1405BBB38
 * Callers:
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlGetRootVpSharedPages(unsigned int a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int16 v10; // bx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int64 v19; // [rsp+38h] [rbp-28h]
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  unsigned __int64 v22; // [rsp+58h] [rbp-8h]

  v3 = a1;
  v21 = 0LL;
  LODWORD(v22) = 0;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v20 = 0LL;
  v17 = 0LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v20, 1, 0LL, 24LL);
  v7 = HvlpAcquireHypercallPage((__int64)&v17, 2, 0LL, 4072LL);
  v8 = v22;
  *v6 = HvlPartitionId;
  v6[1] = 589829LL;
  v6[2] = v3;
  v10 = HvcallInitiateHypercall(257LL, v8);
  if ( !v10 )
  {
    *a2 = v7[1];
    *a3 = v7[2];
  }
  HvlpReleaseHypercallPage((unsigned int *)&v17, v9, v11, v12);
  HvlpReleaseHypercallPage((unsigned int *)&v20, v13, v14, v15);
  return HvlpHvToNtStatus(v10);
}
