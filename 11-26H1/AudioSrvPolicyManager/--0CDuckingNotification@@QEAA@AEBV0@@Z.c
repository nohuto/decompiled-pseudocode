/*
 * XREFs of ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800083AC
 * Callers:
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x180007EA4 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCD.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18001B7A0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180028BC0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002CD18 (--$_Emplace_back_with_unused_capacity@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CL.c)
 *     ??$_Emplace_back@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$_Uninitialized_backout_al@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAAXAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@Z @ 0x18003EA0C (--$_Emplace_back@AEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18003ECD0 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18003F8EC (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180021690 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18003B144 (-_Xlen_string@std@@YAXXZ.c)
 */

CDuckingNotification *__fastcall CDuckingNotification::CDuckingNotification(
        CDuckingNotification *this,
        const struct CDuckingNotification *a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // rbp
  void *v10; // rax

  v2 = (_QWORD *)((char *)a2 + 16);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v4 = 7LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v6 = v2[2];
  if ( v2[3] > 7uLL )
    v2 = (_QWORD *)*v2;
  if ( v6 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  if ( v6 > 7 )
  {
    v9 = std::wstring::_Calculate_growth(v6);
    if ( (unsigned __int64)(v9 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v10 = (void *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v9 + 1));
    *((_QWORD *)this + 2) = v10;
    *((_QWORD *)this + 4) = v6;
    *((_QWORD *)this + 5) = v9;
    memcpy_0(v10, v2, 2 * v6 + 2);
  }
  else
  {
    *((_QWORD *)this + 4) = v6;
    *((_QWORD *)this + 5) = 7LL;
    *((_OWORD *)this + 1) = *(_OWORD *)v2;
  }
  v7 = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 6) = v7;
  if ( v7 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 12), (volatile int *)v4);
  return this;
}
