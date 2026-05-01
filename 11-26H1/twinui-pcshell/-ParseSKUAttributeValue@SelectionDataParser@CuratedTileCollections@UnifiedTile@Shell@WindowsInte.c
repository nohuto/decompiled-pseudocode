/*
 * XREFs of ?ParseSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGAEAUSelectionData@2345@@Z @ 0x180677A7C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8e87a4e206e1de8744f4c17e39900250__void_unsigned_short___::_Do_call @ 0x180678150 (std--_Func_impl_no_alloc__lambda_8e87a4e206e1de8744f4c17e39900250__void_unsigned_short___--_Do_c.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x180234038 (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSKUAttributeValue(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *this,
        const unsigned __int16 *a2,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a3)
{
  int v5; // eax
  _QWORD *v6; // rcx
  int *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *v10; // [rsp+50h] [rbp+20h] BYREF

  v10 = this;
  if ( CompareStringOrdinal(a2, -1, L"DesktopEnterprise", -1, 1) == 2 )
  {
    v5 = 3;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopEnterpriseN", -1, 1) == 2 )
  {
    v5 = 5;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(a2, -1, L"Desktop", -1, 1) == 2 )
  {
    v6 = (_QWORD *)((char *)a3 + 40);
    LODWORD(v10) = 2;
    v7 = (int *)*((_QWORD *)a3 + 6);
    if ( v7 == *((int **)a3 + 7) )
      goto LABEL_29;
    *v7 = 2;
LABEL_28:
    v6[1] += 4LL;
LABEL_30:
    *((_BYTE *)a3 + 3) = 1;
    return 0LL;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopN", -1, 1) == 2 )
  {
    v6 = (_QWORD *)((char *)a3 + 40);
    LODWORD(v10) = 4;
    v7 = (int *)*((_QWORD *)a3 + 6);
    if ( v7 == *((int **)a3 + 7) )
      goto LABEL_29;
    *v7 = 4;
    goto LABEL_28;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopCloud", -1, 1) == 2 )
  {
    v5 = 11;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopCloudN", -1, 1) == 2 )
  {
    v5 = 12;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopARM", -1, 1) == 2 )
  {
    v6 = (_QWORD *)((char *)a3 + 40);
    LODWORD(v10) = 1;
    v7 = (int *)*((_QWORD *)a3 + 6);
    if ( v7 == *((int **)a3 + 7) )
      goto LABEL_29;
    *v7 = 1;
    goto LABEL_28;
  }
  if ( CompareStringOrdinal(a2, -1, L"Mobile", -1, 1) == 2 )
  {
    v5 = 8;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(a2, -1, L"Server", -1, 1) == 2 )
  {
    v5 = 6;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(a2, -1, L"ServerSolution", -1, 1) == 2 )
  {
    v5 = 7;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(a2, -1, L"LongTermServicingBranch", -1, 1) == 2 )
  {
    v5 = 10;
LABEL_26:
    v6 = (_QWORD *)((char *)a3 + 40);
    LODWORD(v10) = v5;
    v7 = (int *)*((_QWORD *)a3 + 6);
    if ( v7 != *((int **)a3 + 7) )
    {
      *v7 = v5;
      goto LABEL_28;
    }
LABEL_29:
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
      v6,
      (__int64)v7,
      (int *)&v10);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAD,
    (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\selectiondataparser.cpp",
    (const char *)0xC00CE225LL);
  return 3222069797LL;
}
