/*
 * XREFs of CmpVirtualPathPresent @ 0x1407764E0
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpReparseToVirtualPath @ 0x140B07FA4 (CmpReparseToVirtualPath.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpUnblockTwoHiveWrites @ 0x1408B7C2C (CmpUnblockTwoHiveWrites.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1408B7E68 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 *     CmpFindPathByNameEx @ 0x1408B7F30 (CmpFindPathByNameEx.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B86EC (CmpBlockTwoHiveWrites.c)
 *     CmpGetMappingHiveForString @ 0x1408D77A4 (CmpGetMappingHiveForString.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

bool __fastcall CmpVirtualPathPresent(__int64 a1)
{
  void *v1; // r14
  __int64 v2; // rsi
  __int64 v4; // r8
  char PathByName; // al
  ULONG_PTR v6; // rdi
  bool v7; // bl
  __int64 CellFlat; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+38h] BYREF
  int v13; // [rsp+90h] [rbp+40h] BYREF
  int v14; // [rsp+94h] [rbp+44h]
  PVOID v15; // [rsp+98h] [rbp+48h] BYREF

  v1 = (void *)CmpMasterHive;
  v13 = -1;
  v14 = 0;
  v2 = 0LL;
  BugCheckParameter3 = 0LL;
  v12 = 0;
  v15 = 0LL;
  v11 = 0LL;
  if ( (int)CmpGetVirtualizationIDFromFullVirtualPath(a1, &v11) >= 0 && (int)CmpGetMappingHiveForString(&v11, &v15) >= 0 )
  {
    LOBYTE(v4) = 1;
    if ( (int)CmpBlockTwoHiveWrites(v1, v15, v4) >= 0 )
    {
      PathByName = CmpFindPathByNameEx(0LL, a1, 0LL, 0LL, &v12, &BugCheckParameter3);
      v6 = BugCheckParameter3;
      v7 = PathByName;
      if ( BugCheckParameter3 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v12, &v13);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3);
        v2 = CellFlat;
      }
      if ( v7 )
      {
        if ( v2 )
        {
          v7 = CmpVEEnabled && _bittest16((const signed __int16 *)(v2 + 2), 8u);
          goto LABEL_17;
        }
        v7 = 0;
      }
      else if ( v2 )
      {
LABEL_17:
        if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v6, &v13);
        else
          HvpReleaseCellPaged(v6, &v13);
      }
      CmpUnblockTwoHiveWrites(v1, v15);
      return v7;
    }
  }
  return 0;
}
