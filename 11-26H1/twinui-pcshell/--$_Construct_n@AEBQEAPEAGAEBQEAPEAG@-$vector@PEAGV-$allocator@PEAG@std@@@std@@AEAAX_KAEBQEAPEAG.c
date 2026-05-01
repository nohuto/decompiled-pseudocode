/*
 * XREFs of ??$_Construct_n@AEBQEAPEAGAEBQEAPEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAX_KAEBQEAPEAG1@Z @ 0x18031BD88
 * Callers:
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18031C258 (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAGV?$allocator@PEAG@std@@@std@@@std@@QEAA@XZ @ 0x18031C404 (--1-$_Tidy_guard@V-$vector@PEAGV-$allocator@PEAG@std@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<unsigned short *>::_Construct_n<unsigned short * * const &,unsigned short * * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        void **a3,
        __int64 *a4)
{
  unsigned __int64 size_of; // rax
  char *v9; // rax
  char *v10; // rsi
  void *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v9;
    a1[1] = v9;
    v10 = v9;
    a1[2] = &v9[8 * a2];
    v11 = *a3;
    v12 = *a4;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      *a3,
      v12,
      v9);
    v13 = 0LL;
    a1[1] = &v10[8 * ((v12 - (__int64)v11) >> 3)];
    std::_Tidy_guard<std::vector<unsigned short *>>::~_Tidy_guard<std::vector<unsigned short *>>(&v13);
  }
}
