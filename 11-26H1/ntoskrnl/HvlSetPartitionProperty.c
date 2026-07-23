/*
 * XREFs of HvlSetPartitionProperty @ 0x1405C0A98
 * Callers:
 *     HvlResumePartition @ 0x1405C0840 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x1405C0DD0 (HvlSuspendPartition.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlSetPartitionProperty(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  __int16 v8; // bx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

  v13 = 0LL;
  v12 = 0LL;
  LODWORD(v14) = 0;
  if ( (HvlpFlags & 0x2000000) == 0 )
    return 3221225506LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v12, 1, 0LL, 24LL);
  v7 = v14;
  *v6 = a1;
  *((_DWORD *)v6 + 2) = 0x20000;
  v6[2] = a3;
  v8 = HvcallInitiateHypercall(69LL, v7);
  HvlpReleaseHypercallPage((unsigned int *)&v12, v9, v10, v11);
  return v8 != 0 ? 0xC0000001 : 0;
}
