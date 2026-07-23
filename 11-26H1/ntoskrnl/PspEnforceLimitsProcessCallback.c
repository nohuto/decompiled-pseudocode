/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x1409CDE90
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsQueryStatisticsProcess @ 0x1409CDFC0 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rcx
  _QWORD v7[14]; // [rsp+28h] [rbp-19h] BYREF

  memset_0(v7, 0, 0x68uLL);
  v4 = *(_QWORD **)(a1 + 672);
  if ( (*(_DWORD *)(a1 + 496) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v7);
    v4[169] += v7[0];
    v4[172] += v7[3];
    v4[171] += v7[2];
    v4[180] += v7[11];
    v4[181] += v7[12];
    v4[173] += v7[4];
    v4[174] += v7[5];
    v4[175] += v7[6];
    v4[176] += v7[7];
    v4[177] += v7[8];
    v4[178] += v7[9];
    v5 = v7[1];
    v4[179] += v7[10];
    v4[170] += v5;
    if ( !a2[3] && *a2 && v5 > *a2 && ObReferenceObjectSafeWithTag(a1, 0x624A7350u) )
      a2[3] = a1;
  }
  return 0LL;
}
