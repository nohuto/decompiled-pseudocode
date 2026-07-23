/*
 * XREFs of CmpFindRedirectedDriverServiceStateNode @ 0x140CF5658
 * Callers:
 *     CmpFindDrivers @ 0x140CF5190 (CmpFindDrivers.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     CmpGetKnownHivePathNode @ 0x140CF5A38 (CmpGetKnownHivePathNode.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140CF5C1C (CmpGetStateSepKeysRedirectionPathValue.c)
 */

char __fastcall CmpFindRedirectedDriverServiceStateNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char result; // al
  char KnownHivePathNode; // di
  unsigned int v10[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+48h] [rbp-20h] BYREF

  v10[0] = -1;
  v11 = 0LL;
  v10[1] = 0;
  result = CmpGetStateSepKeysRedirectionPathValue(BugCheckParameter3, (__int64)v10);
  if ( result )
  {
    KnownHivePathNode = CmpGetKnownHivePathNode(BugCheckParameter3, (__int64)&v11, a5, a6, a7);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v10);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v10);
    return KnownHivePathNode;
  }
  return result;
}
