/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002CD18
 * Callers:
 *     ??$emplace_back@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18003ED44 (--$emplace_back@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_UniqueValues.c)
 * Callees:
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800083AC (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001B868 (--1CDuckingNotification@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Emplace_back_with_unused_capacity<CDuckingNotification &,int>(
        __int64 a1,
        const struct CDuckingNotification *a2,
        int *a3)
{
  CDuckingNotification *v4; // rsi
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  const struct CDuckingNotification *v8; // [rsp+70h] [rbp+8h]

  v4 = *(CDuckingNotification **)(a1 + 8);
  v5 = *a3;
  v8 = CDuckingNotification::CDuckingNotification((CDuckingNotification *)&v7, a2);
  CDuckingNotification::CDuckingNotification(v4, v8);
  *((_DWORD *)v4 + 14) = v5;
  CDuckingNotification::~CDuckingNotification(v8);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 64;
  return result;
}
