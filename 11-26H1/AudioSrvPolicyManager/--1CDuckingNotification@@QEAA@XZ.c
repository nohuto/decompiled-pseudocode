/*
 * XREFs of ??1CDuckingNotification@@QEAA@XZ @ 0x18001B868
 * Callers:
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x180007EA4 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCD.c)
 *     ?RemoveInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B580 (-RemoveInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotif.c)
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B6B8 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotifica.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18001B7A0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180028BC0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180029A9C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002CD18 (--$_Emplace_back_with_unused_capacity@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CL.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18003FB00 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     _std::_Default_allocator_traits_std::allocator_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry___::construct_CLockedList_UniqueValuesOnly_CDuckingNotification_0_::LockedListEntry_CDuckingNotification_&_int__::_1_::dtor$1 @ 0x18004BE37 (_std--_Default_allocator_traits_std--allocator_CLockedList_UniqueValuesOnly_CDuckingNotification.c)
 *     _CLockedList_UniqueValuesOnly_CDuckingNotification_0_::AddInterface_::_1_::dtor$0 @ 0x18004D06E (_CLockedList_UniqueValuesOnly_CDuckingNotification_0_--AddInterface_--_1_--dtor$0.c)
 *     _CDuckingManager::DeleteDuckingNotification_::_1_::dtor$0 @ 0x18004D0BC (_CDuckingManager--DeleteDuckingNotification_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CDuckingNotification::~CDuckingNotification(CDuckingNotification *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  void *v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2);
  v3 = *((_QWORD *)this + 5);
  if ( v3 > 7 )
  {
    v4 = (void *)*((_QWORD *)this + 2);
    v5 = (const struct std::nothrow_t *)(2 * v3 + 2);
    v6 = (unsigned __int64)v5;
    v7 = v4;
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6);
      v5 = (const struct std::nothrow_t *)v6;
      v4 = v7;
    }
    operator delete(v4, v5);
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 7LL;
  *((_WORD *)this + 8) = 0;
}
