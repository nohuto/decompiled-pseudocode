/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x1405C4B94
 * Callers:
 *     HvlpGetPageList @ 0x1405C4AC0 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1405C4CD0 (HvlpStartPageListIteration.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+30h] [rbp-58h]
  unsigned __int64 v11; // [rsp+38h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-48h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  LODWORD(v11) = 0;
  v4 = HvlpAcquireHypercallPage((__int64)&v9, 1, (__int64)&v12, 24LL);
  v4[2] = 1LL;
  *v4 = a2;
  v4[1] = -1LL;
  v4[2] = *(_BYTE *)(a1 + 4) != 0 ? 3LL : 1LL;
  HvcallInitiateHypercall(151LL, v11);
  return HvlpReleaseHypercallPage((unsigned int *)&v9, v5, v6, v7);
}
