/*
 * XREFs of CmpGetStateSepKeysRedirectionPathValue @ 0x140CF5C1C
 * Callers:
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140CF5658 (CmpFindRedirectedDriverServiceStateNode.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpValueToData @ 0x140866670 (CmpValueToData.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x140AC518C (CmpFindSubKeyByName.c)
 *     CmpFindStateSepKeysRedirectionMapNode @ 0x140CF5730 (CmpFindStateSepKeysRedirectionMapNode.c)
 */

char __fastcall CmpGetStateSepKeysRedirectionPathValue(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int SubKeyByName; // edi
  __int64 v8; // rax
  unsigned int ValueByName; // edi
  ULONG_PTR v10; // rax
  PVOID v11; // rax
  bool v12; // zf
  __int64 v13; // r9
  unsigned __int16 v14; // r8
  unsigned __int16 i; // dx
  unsigned int v17[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v18[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v19[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  int v21; // [rsp+80h] [rbp+30h] BYREF
  int v22; // [rsp+84h] [rbp+34h]

  v22 = HIDWORD(a3);
  v20 = 0LL;
  v19[0] = -1;
  v19[1] = 0;
  v17[0] = -1;
  v17[1] = 0;
  v18[0] = -1;
  v18[1] = 0;
  v21 = 0;
  if ( !CmpFindStateSepKeysRedirectionMapNode(BugCheckParameter3, a2, &v20, v19) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v20, (unsigned __int16 *)&CmpDriverStateSourceIdName);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v19);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v19);
  if ( SubKeyByName == -1 )
    return 0;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
     ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, v17)
     : HvpGetCellPaged(BugCheckParameter3, SubKeyByName);
  if ( !v8 )
    return 0;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v8, (unsigned __int16 *)&CmpTargetNtPathString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v17);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v17);
  if ( ValueByName == -1 )
    return 0;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, ValueByName, v18)
      : HvpGetCellPaged(BugCheckParameter3, ValueByName);
  if ( !v10 )
    return 0;
  v11 = CmpValueToData(BugCheckParameter3, ValueByName, v10, (__int64)&v21, a5);
  v12 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  *(_QWORD *)(a4 + 8) = v11;
  if ( v12 )
    HvpReleaseCellPaged(BugCheckParameter3, v18);
  else
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v18);
  v13 = *(_QWORD *)(a4 + 8);
  if ( !v13 )
    return 0;
  v14 = v21;
  *(_WORD *)(a4 + 2) = v21;
  *(_WORD *)a4 = 0;
  if ( v14 )
  {
    for ( i = 0; i < v14; *(_WORD *)a4 = i )
    {
      if ( !*(_WORD *)(v13 + 2 * ((unsigned __int64)i >> 1)) )
        break;
      i += 2;
    }
  }
  return 1;
}
