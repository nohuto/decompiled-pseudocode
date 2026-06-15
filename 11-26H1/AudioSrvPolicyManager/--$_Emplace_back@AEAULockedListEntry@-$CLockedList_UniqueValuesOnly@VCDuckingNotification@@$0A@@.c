/*
 * XREFs of ??$_Emplace_back@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$_Uninitialized_backout_al@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAAXAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@Z @ 0x18003EA0C
 * Callers:
 *     ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@00AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18003EBF8 (--$_Uninitialized_copy@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@.c)
 *     ??$_Uninitialized_copy_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@_K0AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18003EC64 (--$_Uninitialized_copy_n@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 * Callees:
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800083AC (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Emplace_back<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry &>(
        __int64 a1,
        unsigned int *a2)
{
  CDuckingNotification *v2; // rbx
  __int64 result; // rax

  v2 = *(CDuckingNotification **)(a1 + 8);
  CDuckingNotification::CDuckingNotification(v2, (const struct CDuckingNotification *)a2);
  result = a2[14];
  *((_DWORD *)v2 + 14) = result;
  *(_QWORD *)(a1 + 8) += 64LL;
  return result;
}
