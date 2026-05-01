/*
 * XREFs of ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x18029E160
 * Callers:
 *     ??$?0UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@AEBV?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18029E138 (--$-0UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$com_array@UWindowId@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802CA560 (__Platform_CoTaskMemAlloc.c)
 */

__int64 __fastcall winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  void *v3; // rsi
  __int64 v4; // rbp
  LPVOID v8; // rax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  *(_QWORD *)a1 = 0LL;
  v4 = (a3 - (__int64)a2) >> 2;
  *(_DWORD *)(a1 + 8) = 0;
  if ( (_DWORD)v4 )
  {
    v8 = _Platform_CoTaskMemAlloc(4LL * (unsigned int)v4);
    *(_QWORD *)a1 = v8;
    if ( !v8 )
    {
      pExceptionObject[2] = 0LL;
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 8) = v4;
    v3 = v8;
  }
  std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
    a2,
    a3,
    v3);
  return a1;
}
