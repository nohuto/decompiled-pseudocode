/*
 * XREFs of CmpFindHiveSubKey @ 0x140CF5570
 * Callers:
 *     CmpFindStateSepKeysRedirectionMapNode @ 0x140CF5730 (CmpFindStateSepKeysRedirectionMapNode.c)
 *     CmpGetKnownHivePathNode @ 0x140CF5A38 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpGetNextName @ 0x140864E0C (CmpGetNextName.c)
 *     CmpWalkUnicodeStringPath @ 0x1408665A8 (CmpWalkUnicodeStringPath.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

bool __fastcall CmpFindHiveSubKey(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int128 *a3,
        __int64 *a4,
        unsigned int *a5)
{
  char v5; // bl
  unsigned int v10; // edi
  __int128 *v11; // r8
  unsigned int v12; // edx
  __int64 CellFlat; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  __int16 v16[20]; // [rsp+30h] [rbp-28h] BYREF
  bool v17; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v10 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  String2 = 0LL;
  if ( a3 && *(_WORD *)a3 )
  {
    *(_OWORD *)v16 = *a3;
    if ( !CmpGetNextName(v16, (__int64)&String2, &v17) )
      return v5;
    if ( RtlEqualUnicodeString(&CmpCCSString, &String2, 1u) )
    {
      v11 = (__int128 *)v16;
      v12 = a2;
    }
    else
    {
      v11 = a3;
      v12 = v10;
    }
    v10 = CmpWalkUnicodeStringPath(BugCheckParameter3, v12, v11);
  }
  if ( v10 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v10, a5);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v10);
    *a4 = CellFlat;
    return CellFlat != 0;
  }
  return v5;
}
