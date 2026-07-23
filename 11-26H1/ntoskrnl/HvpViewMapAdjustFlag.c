/*
 * XREFs of HvpViewMapAdjustFlag @ 0x140B0BED0
 * Callers:
 *     HvMarkHiveWithNoSectionExtend @ 0x140781620 (HvMarkHiveWithNoSectionExtend.c)
 *     HvUnlockHiveFilePages @ 0x140B33C00 (HvUnlockHiveFilePages.c)
 * Callees:
 *     HvpViewMapFindViewForFileOffset @ 0x1408BFACC (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140B0BF6C (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 */

__int64 __fastcall HvpViewMapAdjustFlag(__int64 a1, int a2, char a3)
{
  __int64 i; // rax
  unsigned __int64 ViewForFileOffset; // rbx
  int v6; // eax

  if ( (a2 & 0xFFFFFFF5) != 0 )
    goto LABEL_14;
  if ( (a2 & 2) == 0 )
  {
    if ( (a2 & 8) == 0 )
      return 0LL;
    if ( a3 )
    {
      v6 = *(_DWORD *)(a1 + 32);
      if ( (v6 & 8) == 0 )
      {
        *(_DWORD *)(a1 + 32) = v6 | 8;
        return 0LL;
      }
    }
LABEL_14:
    __fastfail(5u);
  }
  if ( (a2 & 8) != 0 || a3 || (a2 & *(_DWORD *)(a1 + 32)) == 0 )
    goto LABEL_14;
  for ( i = 4096LL; i < *(_QWORD *)(a1 + 8); i = *(_QWORD *)(ViewForFileOffset + 48) )
  {
    ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, i);
    HvpViewMapMakeViewRangeUnCOWByPolicy(
      a1,
      ViewForFileOffset,
      *(_QWORD *)(ViewForFileOffset + 40),
      *(_QWORD *)(ViewForFileOffset + 48));
  }
  *(_DWORD *)(a1 + 32) &= ~2u;
  return 0LL;
}
