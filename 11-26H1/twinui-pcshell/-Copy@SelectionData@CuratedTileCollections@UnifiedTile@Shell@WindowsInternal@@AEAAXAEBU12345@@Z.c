/*
 * XREFs of ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x18031CACC
 * Callers:
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031C2D0 (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x18031C604 (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ??4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z @ 0x1803F1E20 (--4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1800B5EB0 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??$copy@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@0@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@0@0V10@@Z @ 0x18031C1E4 (--$copy@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@W4CollectionSKU@CuratedTileCol.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2)
{
  _QWORD *v2; // rsi
  LPVOID *v5; // rbp
  LPVOID *i; // r14
  const WCHAR **v7; // rbp
  const WCHAR **j; // r14
  const WCHAR *v9; // rcx
  LPWSTR *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  LPWSTR ppwsz; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 16);
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)a2 + 3);
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  *((_BYTE *)this + 6) = *((_BYTE *)a2 + 6);
  *((_BYTE *)this + 7) = *((_BYTE *)a2 + 7);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8);
  v5 = (LPVOID *)*((_QWORD *)this + 3);
  for ( i = (LPVOID *)*((_QWORD *)this + 2); i != v5; ++i )
    CoTaskMemFree(*i);
  if ( *v2 != v2[1] )
    v2[1] = *v2;
  v7 = (const WCHAR **)*((_QWORD *)a2 + 3);
  for ( j = (const WCHAR **)*((_QWORD *)a2 + 2); j != v7; ++j )
  {
    v9 = *j;
    ppwsz = 0LL;
    if ( SHStrDupW(v9, &ppwsz) >= 0 )
    {
      v10 = (LPWSTR *)v2[1];
      if ( v10 == (LPWSTR *)v2[2] )
      {
        std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(
          v2,
          (__int64)v10,
          (__int64 *)&ppwsz);
      }
      else
      {
        *v10 = ppwsz;
        v2[1] += 8LL;
      }
    }
  }
  v11 = *((_QWORD *)this + 5);
  if ( v11 != *((_QWORD *)this + 6) )
    *((_QWORD *)this + 6) = v11;
  std::copy<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>>>,std::back_insert_iterator<std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>>>(
    &ppwsz,
    *((int **)a2 + 5),
    *((int **)a2 + 6),
    (_QWORD *)this + 5);
  v12 = *((_QWORD *)this + 8);
  if ( v12 != *((_QWORD *)this + 9) )
    *((_QWORD *)this + 9) = v12;
  std::copy<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>>>,std::back_insert_iterator<std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>>>(
    &ppwsz,
    *((int **)a2 + 8),
    *((int **)a2 + 9),
    (_QWORD *)this + 8);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_BYTE *)this + 92) = *((_BYTE *)a2 + 92);
  *((_BYTE *)this + 93) = *((_BYTE *)a2 + 93);
  *((_BYTE *)this + 94) = *((_BYTE *)a2 + 94);
  *((_BYTE *)this + 95) = *((_BYTE *)a2 + 95);
  *((_BYTE *)this + 96) = *((_BYTE *)a2 + 96);
}
