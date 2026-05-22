/*
 * XREFs of ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x18015398C
 * Callers:
 *     ?CancelResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801524D0 (-CancelResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeC.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180154990 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180051DC8 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x180097698 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014C4DC (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ?OnManualResizeEnded@ManualResizeAreaClientProxy@@QEAAXI@Z @ 0x180151F04 (-OnManualResizeEnded@ManualResizeAreaClientProxy@@QEAAXI@Z.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180152D88 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_compare@KU-$.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180152E38 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUMessageInfo@ResizeProcessor@@V-$_Uhash_compare@KU-$hash@K@.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180152F84 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x180153930 (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z @ 0x180154FB0 (-ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ResizeProcessor::CancelResize(
        ResizeProcessor *this,
        unsigned int a2,
        struct BamoResizeControllerClientProxy *a3)
{
  struct tagPOINT v5; // rbx
  struct BamoResizeControllerClientProxy *v6; // rdi
  struct tagPOINT v7; // rsi
  __int64 v8; // rax
  float *v9; // rax
  ManualResizeAreaClientProxy *v10; // rcx
  struct BamoResizeControllerClientProxy *v12; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT v13; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-10h] BYREF
  struct tagPOINT v16; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+48h] BYREF
  struct tagPOINT v18; // [rsp+B8h] [rbp+58h] BYREF

  v17 = a2;
  InputETW::Resize::CancelResize(a2);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 3,
    &v13,
    (const unsigned __int8 *)&v17);
  v5 = v13;
  if ( v13 != *((_QWORD *)this + 4) )
  {
    v12 = *(struct BamoResizeControllerClientProxy **)(*(_QWORD *)&v13 + 24LL);
    v6 = v12;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v12);
    if ( v6 == a3 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
        (_QWORD *)this + 11,
        &v13,
        (const unsigned __int8 *)&v17);
      if ( v13 != *((_QWORD *)this + 12) )
      {
        v7 = *(struct tagPOINT *)(*(_QWORD *)&v13 + 24LL);
        v13 = v7;
        v16 = 0LL;
        v18 = 0LL;
        if ( *std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
                (_QWORD *)this + 21,
                v14,
                (const unsigned __int8 *)&v17) != *((_QWORD *)this + 22) )
        {
          v16 = *(struct tagPOINT *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                                                  (float *)this + 42,
                                                  (__int64)v14,
                                                  (unsigned __int8 *)&v17)
                                   + 20LL);
          v13 = (struct tagPOINT)_mm_unpacklo_ps(
                                   (__m128)COERCE_UNSIGNED_INT((float)v7.x),
                                   (__m128)COERCE_UNSIGNED_INT((float)v13.y)).m128_u64[0];
          v8 = std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                 (float *)this + 42,
                 (__int64)v15,
                 (unsigned __int8 *)&v17);
          v9 = (float *)CInputTransform::ScreenPointToRelative(
                          (__int64)v14,
                          (float *)&v13,
                          (__int128 *)(*(_QWORD *)v8 + 28LL));
          v13.x = (int)*v9 - v16.x;
          v13.y = (int)v9[1] - v16.y;
          v18 = v13;
        }
        InputETW::Resize::ResizeEnded(v17, &v16, &v18);
        (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *))(*((_QWORD *)v6 + 1) + 40LL))(
          (__int64)v6 + 8,
          v17,
          &v16,
          &v18);
        v10 = *(ManualResizeAreaClientProxy **)(*(_QWORD *)&v5 + 32LL);
        if ( v10 )
        {
          ManualResizeAreaClientProxy::OnManualResizeEnded(v10);
          Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)(*(_QWORD *)&v5 + 32LL));
        }
        if ( v5 != *((_QWORD *)this + 4) && **(_DWORD **)(*(_QWORD *)&v5 + 48LL) != 1 )
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
            (float *)this + 90,
            (__int64)v15,
            (unsigned __int8 *)&v17);
        std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Erase<unsigned long>(
          (_QWORD *)this + 21,
          (unsigned __int8 *)&v17);
        std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
          (_QWORD *)this + 29,
          (unsigned __int8 *)&v17);
        std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>::_Erase<unsigned long>(
          (_QWORD *)this + 3,
          (unsigned __int8 *)&v17);
        Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)(*(_QWORD *)&v5 + 24LL));
      }
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v12);
  }
  return 0LL;
}
