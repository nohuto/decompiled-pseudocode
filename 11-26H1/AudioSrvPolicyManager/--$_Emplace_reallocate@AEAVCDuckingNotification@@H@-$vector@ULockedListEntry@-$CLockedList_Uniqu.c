/*
 * XREFs of ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18003EA50
 * Callers:
 *     ??$emplace_back@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18003ED44 (--$emplace_back@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_UniqueValues.c)
 * Callees:
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x180007EA4 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCD.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@CAXXZ @ 0x18002EBBC (-_Xlength@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@std@@CAXXZ.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@00AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18003EBF8 (--$_Uninitialized_copy@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18003ECD0 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@.c)
 *     ??1_Reallocation_guard@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAA@XZ @ 0x18003F114 (--1_Reallocation_guard@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotific.c)
 *     ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x1800407C4 (-_Calculate_growth@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 *     ?_Change_array@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAXQEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@_K1@Z @ 0x180040800 (-_Change_array@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$.c)
 */

// Hidden C++ exception states: #wind=1
CDuckingNotification *__fastcall std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Emplace_reallocate<CDuckingNotification &,int>(
        struct CDuckingNotification **a1,
        struct CDuckingNotification *a2,
        const struct CDuckingNotification *a3,
        int *a4)
{
  signed __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r10
  CDuckingNotification *v13; // rdi
  CDuckingNotification *v14; // r14
  __int64 v15; // rcx
  struct CDuckingNotification *v16; // rdx
  struct CDuckingNotification *v17; // rcx
  struct CDuckingNotification **v19; // [rsp+20h] [rbp-58h] BYREF
  CDuckingNotification *v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  CDuckingNotification *v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v7 = a2 - *a1;
  v8 = (a1[1] - *a1) >> 6;
  if ( v8 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<CApplication *>::_Xlength();
  v9 = v8 + 1;
  v10 = std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Calculate_growth(
          a1,
          v8 + 1);
  v11 = v10;
  if ( v10 > v12 )
    std::_Throw_bad_array_new_length();
  v13 = (CDuckingNotification *)std::_Allocate<16,std::_Default_allocate_traits>(v10 << 6);
  v14 = (CDuckingNotification *)((char *)v13 + (v7 & 0xFFFFFFFFFFFFFFC0uLL));
  v19 = a1;
  v20 = v13;
  v21 = v11;
  v23 = (char *)v14 + 64;
  std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,CDuckingNotification &,int>(
    v15,
    v14,
    a3,
    a4);
  v22 = v14;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    std::_Uninitialized_copy<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
      v17,
      v16,
      v13,
      a1,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  else
  {
    std::_Uninitialized_move<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(v17);
    v22 = v13;
    std::_Uninitialized_move<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(a2);
  }
  v20 = 0LL;
  std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Change_array(
    a1,
    v13,
    v9,
    v11);
  std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v14;
}
