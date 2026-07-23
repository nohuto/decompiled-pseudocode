/*
 * XREFs of HvlLpReadCpuid @ 0x1404EF9C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlLpReadCpuid(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v10; // rbx
  _DWORD *v11; // rdi
  unsigned __int64 v12; // rdx
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h]
  __int64 v23; // [rsp+38h] [rbp-28h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  unsigned __int64 v26; // [rsp+58h] [rbp-8h]

  v25 = 0LL;
  LODWORD(v26) = 0;
  v22 = 0LL;
  LODWORD(v23) = 0;
  v24 = 0LL;
  v21 = 0LL;
  v10 = HvlpAcquireHypercallPage((__int64)&v24, 1, 0LL, 16LL);
  v11 = HvlpAcquireHypercallPage((__int64)&v21, 2, 0LL, 16LL);
  v12 = v26;
  *v10 = a1;
  v10[1] = 0x10000;
  v10[2] = a2;
  v10[3] = 0;
  v13 = HvcallInitiateHypercall(0x100000088LL, v12);
  *a3 = *v11;
  *a4 = v11[1];
  LODWORD(v10) = v13 != 0 ? 0xC0000001 : 0;
  *a5 = v11[2];
  v14 = (unsigned int)v11[3];
  *a6 = v14;
  HvlpReleaseHypercallPage((unsigned int *)&v21, v14, v15, v16);
  HvlpReleaseHypercallPage((unsigned int *)&v24, v17, v18, v19);
  return (unsigned int)v10;
}
