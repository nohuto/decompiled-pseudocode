/*
 * XREFs of PspConvertJobToMixed @ 0x140778724
 * Callers:
 *     PspSetJobMemoryPartition @ 0x1407FF1B4 (PspSetJobMemoryPartition.c)
 *     PspBindProcessSessionToJob @ 0x140AEFF08 (PspBindProcessSessionToJob.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspConvertJobToMixed(__int64 a1, int a2)
{
  __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 576) == -2 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 1552) & 0x10) == 0
    && ((*(_DWORD *)(a1 + 1552) & 0x40000000) != 0 || (v3 = *(_QWORD *)(a1 + 1792)) != 0 && v3 != -1 || a2) )
  {
    *(_DWORD *)(a1 + 576) = -2;
    return 0LL;
  }
  return 3221225506LL;
}
