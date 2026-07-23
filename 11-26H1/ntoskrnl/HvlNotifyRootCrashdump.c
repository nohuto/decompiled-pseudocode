/*
 * XREFs of HvlNotifyRootCrashdump @ 0x1405C0338
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x1405C03C4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405C07C0 (HvlResumeFromRootCrashdump.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlNotifyRootCrashdump(int a1)
{
  __int64 result; // rax
  _DWORD *v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]
  _BYTE v11[16]; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  LODWORD(v10) = 0;
  result = HvlpRootFlags;
  v8 = 0LL;
  if ( (HvlpRootFlags & 4) != 0 )
  {
    v3 = HvlpAcquireHypercallPage((__int64)&v8, 1, (__int64)v11, 8LL);
    v4 = v10;
    *v3 = 2;
    v3[1] = a1;
    HvcallInitiateHypercall(135LL, v4);
    return HvlpReleaseHypercallPage((unsigned int *)&v8, v5, v6, v7);
  }
  return result;
}
