/*
 * XREFs of ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002D120
 * Callers:
 *     ?RemoveInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B580 (-RemoveInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotif.c)
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@_K@Z @ 0x18003E87C (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180021470 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

__int64 __fastcall CDuckingNotification::operator=(__int64 a1, __int64 a2)
{
  int v4; // eax
  void **v5; // rdx
  void **v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  volatile signed __int32 *v9; // r8

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = (void **)(a2 + 16);
  *(_DWORD *)(a1 + 8) = v4;
  v6 = (void **)(a1 + 16);
  if ( v6 != v5 )
  {
    v7 = (unsigned __int64)v5[2];
    if ( (unsigned __int64)v5[3] > 7 )
      v5 = (void **)*v5;
    std::wstring::assign(v6, v5, v7);
  }
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(volatile signed __int32 **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v8;
  if ( v8 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 12), (volatile int *)v5);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9);
  return a1;
}
