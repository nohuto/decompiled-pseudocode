/*
 * XREFs of ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x180320768
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x18031F3F0 (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1803E7E4C (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18002A054 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18031FAB4 (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18031FAF0 (--0-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$a.c)
 *     ?CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x1803200DC (-CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEA.c)
 *     ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x18032019C (-ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2)
{
  int v4; // r12d
  int *v5; // rcx
  int v6; // edi
  char v8; // si
  LPCWCH **v9; // rdi
  char v10; // bl
  LPCWCH **v11; // rax
  char v12; // r13
  char v13; // bl
  _QWORD *v14; // rax
  _DWORD *v15; // rcx
  _DWORD *i; // rdx
  _QWORD v17[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v19; // [rsp+A0h] [rbp+40h] BYREF
  _QWORD *v20; // [rsp+B0h] [rbp+50h]

  v4 = 0;
  LODWORD(v19) = 0;
  if ( !*((_BYTE *)this + 93) && *((_BYTE *)a2 + 93) == 1 && !*((_BYTE *)this + 94) && *((_BYTE *)a2 + 94) == 1 )
    return (unsigned int)-1;
  if ( *((_BYTE *)this + 4) && (v5 = (int *)*((_QWORD *)this + 8), *((_QWORD *)this + 9) - (_QWORD)v5 == 4LL) )
  {
    if ( *((_BYTE *)a2 + 4)
      && !WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU(
            (__int64)a2,
            *v5) )
    {
      return (unsigned int)-1;
    }
  }
  else if ( *((_BYTE *)a2 + 4) )
  {
    return (unsigned int)-1;
  }
  if ( *((_BYTE *)a2 + 7) && *((_BYTE *)a2 + 95) != *((_BYTE *)this + 95)
    || *((_BYTE *)a2 + 8) && *((_BYTE *)a2 + 96) != *((_BYTE *)this + 96) )
  {
    return (unsigned int)-1;
  }
  v8 = *(_BYTE *)a2;
  v20 = v17;
  v9 = (LPCWCH **)std::vector<unsigned short *>::vector<unsigned short *>(v17, (__int64)a2 + 16);
  v10 = *(_BYTE *)this;
  v11 = (LPCWCH **)std::vector<unsigned short *>::vector<unsigned short *>(v18, (__int64)this + 16);
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::CompareStringVector(
    (__int64)&v19,
    v11,
    v10,
    v9,
    v8,
    (int *)&v19);
  v6 = (int)v19;
  if ( (int)v19 >= 0 )
  {
    if ( *((_BYTE *)this + 1) && *((_BYTE *)a2 + 1) )
    {
      if ( *((_DWORD *)this + 22) == *((_DWORD *)a2 + 22) )
        v6 = (_DWORD)v19 + 1;
      else
        v6 = -1;
    }
    if ( v6 >= 0 )
    {
      if ( *((_BYTE *)this + 2) && *((_BYTE *)a2 + 2) )
      {
        if ( *((_BYTE *)this + 92) == *((_BYTE *)a2 + 92) )
          ++v6;
        else
          v6 = -1;
      }
      if ( v6 >= 0 )
      {
        v12 = *((_BYTE *)a2 + 3);
        v20 = v18;
        v19 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
                v18,
                (__int64)a2 + 40);
        v13 = *((_BYTE *)this + 3);
        v14 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
                v17,
                (__int64)this + 40);
        if ( v13 && v12 )
        {
          v15 = (_DWORD *)*v14;
          if ( *v14 != v14[1] )
          {
            while ( 2 )
            {
              for ( i = (_DWORD *)*v19; i != (_DWORD *)v19[1]; ++i )
              {
                if ( *v15 == *i )
                {
                  v4 = 1;
                  goto LABEL_38;
                }
              }
              if ( ++v15 != (_DWORD *)v14[1] )
                continue;
              break;
            }
          }
          v4 = -1;
        }
LABEL_38:
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v14);
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v19);
        if ( v4 < 0 )
          v6 = v4;
        else
          v6 += 100 * v4;
        if ( v6 >= 0 )
        {
          if ( *((_BYTE *)this + 5) && *((_BYTE *)a2 + 5) )
          {
            if ( *((_BYTE *)this + 93) == *((_BYTE *)a2 + 93) )
              ++v6;
            else
              v6 = -1;
          }
          if ( v6 >= 0 )
          {
            if ( *((_BYTE *)this + 6) && *((_BYTE *)a2 + 6) )
            {
              if ( *((_BYTE *)this + 94) == *((_BYTE *)a2 + 94) )
                ++v6;
              else
                v6 = -1;
            }
            if ( v6 >= 0 )
            {
              if ( *((_BYTE *)this + 7) && *((_BYTE *)a2 + 7) )
              {
                if ( *((_BYTE *)this + 95) == *((_BYTE *)a2 + 95) )
                  ++v6;
                else
                  v6 = -1;
              }
              if ( v6 >= 0 && *((_BYTE *)this + 8) && *((_BYTE *)a2 + 8) )
              {
                if ( *((_BYTE *)this + 96) == *((_BYTE *)a2 + 96) )
                  ++v6;
                else
                  return (unsigned int)-1;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
