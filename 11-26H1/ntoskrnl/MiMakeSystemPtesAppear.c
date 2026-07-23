/*
 * XREFs of MiMakeSystemPtesAppear @ 0x1402A5094
 * Callers:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 * Callees:
 *     MiPteBinsNeedTrimming @ 0x1402A52F0 (MiPteBinsNeedTrimming.c)
 *     MiEmptyPteBins @ 0x140360F30 (MiEmptyPteBins.c)
 */

__int64 __fastcall MiMakeSystemPtesAppear(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // edi
  bool v8; // zf

  v3 = 0;
  if ( !*a3 )
  {
    *a3 = 1;
    if ( MiEmptyPteBins(a1, a2, 2LL) )
      return 1LL;
  }
  if ( *a3 != 1 )
    goto LABEL_13;
  v8 = KeNumberNodes == 1;
  *a3 = 2;
  if ( !v8 )
  {
    if ( MiEmptyPteBins(a1, a2, 0LL) )
      return 1LL;
LABEL_13:
    if ( *a3 != 2 )
      goto LABEL_8;
  }
  if ( !(unsigned int)MiPteBinsNeedTrimming(a1) )
  {
    *a3 = 3;
    goto LABEL_8;
  }
  *a3 = 4;
  if ( MiEmptyPteBins(a1, a2, 3LL) )
    return 1LL;
LABEL_8:
  if ( *a3 == 4 )
  {
    if ( KeNumberNodes == 1 )
    {
      *a3 = 6;
      return 0LL;
    }
  }
  else if ( *a3 != 3 )
  {
    return 0LL;
  }
  *a3 = 5;
  if ( !(unsigned int)MiPteBinsNeedTrimming(a1) )
    return 0LL;
  *a3 = 6;
  LOBYTE(v3) = MiEmptyPteBins(a1, a2, 1LL) != 0;
  return v3;
}
