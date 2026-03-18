/*
 * XREFs of ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1400183DC
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CombineOldNewVis(HRGN a1, HRGN a2, HRGN a3, __int64 a4, char a5)
{
  int v5; // eax
  int v6; // eax
  int v8; // eax

  v5 = a5 & 3;
  if ( (a5 & 3) == 0 )
  {
    v6 = GreCombineRgn(a1, a2, a3, (unsigned int)(v5 + 2));
    if ( !v6 )
      return 0LL;
    return v6 != 1;
  }
  v8 = v5 - 1;
  if ( !v8 )
  {
LABEL_9:
    GreCombineRgn(a1, a2, 0LL, 5LL);
    return 1LL;
  }
  v6 = v8 - 1;
  if ( !v6 )
  {
    a2 = a3;
    goto LABEL_9;
  }
  return v6 != 1;
}
