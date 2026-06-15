/*
 * XREFs of ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@_K@Z @ 0x18005030C
 * Callers:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18004FD34 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180050470 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Copy_memmove_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@PEAU12@_K0@Z @ 0x18011A3A8 (--$_Copy_memmove_n@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotification.c)
 */

char *__fastcall std::vector<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry *>(
        char **a1,
        void **a2,
        unsigned __int64 a3)
{
  char *v3; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 size_of; // rax
  char *result; // rax
  char *v12; // rdx
  unsigned __int64 v13; // rsi
  char *v14; // rcx
  void **v15; // rdx
  unsigned __int64 i; // rbx

  v3 = *a1;
  v5 = a3;
  v7 = (a1[2] - *a1) >> 3;
  if ( a3 <= v7 )
  {
    v13 = (a1[1] - v3) >> 3;
    if ( a3 <= v13 )
    {
      std::_Copy_memmove_n<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry *,CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry *>(a2);
      result = &v3[8 * v5];
      a1[1] = result;
    }
    else
    {
      result = (char *)std::_Copy_memmove_n<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry *,CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry *>(a2);
      v14 = a1[1];
      v15 = &a2[v13];
      for ( i = v5 - v13; i; --i )
      {
        result = (char *)*v15++;
        *(_QWORD *)v14 = result;
        v14 += 8;
      }
      a1[1] = v14;
    }
  }
  else
  {
    v8 = 0x1FFFFFFFFFFFFFFFLL;
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v9 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v8 = v7 + v9;
      if ( v7 + v9 < a3 )
        v8 = a3;
    }
    if ( v3 )
    {
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)(8 * v7));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    size_of = std::_Get_size_of_n<8>(v8);
    result = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = result;
    v12 = result;
    a1[1] = result;
    for ( a1[2] = &result[8 * v8]; v5; --v5 )
    {
      result = (char *)*a2++;
      *(_QWORD *)v12 = result;
      v12 += 8;
    }
    a1[1] = v12;
  }
  return result;
}
