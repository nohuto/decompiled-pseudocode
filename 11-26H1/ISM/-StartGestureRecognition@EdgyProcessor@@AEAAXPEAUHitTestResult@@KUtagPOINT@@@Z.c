/*
 * XREFs of ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180158E78
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180157DF0 (-OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitial.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014DB30 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VEdgyRecognizer@@@std@@$0A@@?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180155C2C (--$-4U-$default_delete@VEdgyRecognizer@@@std@@$0A@@-$unique_ptr@VEdgyRecognizer@@U-$default_dele.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180155F30 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_c.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801560B8 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V-$.c)
 *     ??$make_unique@VEdgyRecognizer@@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@$0A@@std@@YA?AV?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@0@$$QEAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x1801563E0 (--$make_unique@VEdgyRecognizer@@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@$0A@@std@@YA-A.c)
 *     ??1?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ @ 0x180156904 (--1-$unique_ptr@VEdgyRecognizer@@U-$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ.c)
 *     ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@3@Z @ 0x180157828 (-HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBam.c)
 *     ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x180157A58 (-HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall EdgyProcessor::StartGestureRecognition(
        EdgyProcessor *this,
        struct HitTestResult *a2,
        int a3,
        struct tagPOINT a4)
{
  float *v7; // rbx
  EdgyProcessor *v8; // rcx
  __int64 v9; // rsi
  struct BamoEdgyDragSourceClientProxy *v10; // rbx
  __int64 v11; // rcx
  __int64 *v12; // rax
  EdgyProcessor *v13; // rcx
  _QWORD *v14; // rdi
  struct BamoEdgyDragSourceClientProxy *v15; // rbx
  __int64 v16; // rcx
  __int64 *v17; // rax
  struct InputSite *v18; // [rsp+30h] [rbp-40h] BYREF
  struct InputSite *v19; // [rsp+38h] [rbp-38h] BYREF
  struct BamoEdgyDragSourceClientProxy *v20; // [rsp+40h] [rbp-30h] BYREF
  struct BamoEdgyDragSourceClientProxy *v21; // [rsp+48h] [rbp-28h] BYREF
  struct BamoEdgyDragSourceClientProxy *v22; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v23[24]; // [rsp+58h] [rbp-18h] BYREF
  struct BamoDragManagerClientProxy *v24; // [rsp+A0h] [rbp+30h] BYREF
  int v25; // [rsp+B0h] [rbp+40h] BYREF

  v25 = a3;
  v7 = (float *)((char *)this + 352);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 44,
    &v24,
    (const unsigned __int8 *)&v25);
  if ( v24 == *((struct BamoDragManagerClientProxy **)this + 45) )
  {
    v20 = 0LL;
    v24 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    EdgyProcessor::HitTest(v8, a2, &v20, &v24, &v19, &v18);
    v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyDragMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                      v7,
                      (__int64)v23,
                      (unsigned __int8 *)&v25);
    v10 = v20;
    if ( v20 && v24 )
    {
      if ( *(struct BamoEdgyDragSourceClientProxy **)(v9 + 24) != v20 )
      {
        v21 = v20;
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v21);
        v11 = *(_QWORD *)(v9 + 24);
        *(_QWORD *)(v9 + 24) = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v9 + 32), &v24);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v9 + 40), &v19);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v9 + 48), &v18);
      *(struct tagPOINT *)(v9 + 64) = a4;
      v21 = (struct BamoEdgyDragSourceClientProxy *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v10 + 1) + 40LL))((__int64)v10 + 8);
      v12 = std::make_unique<EdgyRecognizer,BamoEdgyGestureRecognitionConfigurationProxy *,0>(&v22, &v21);
      std::unique_ptr<EdgyRecognizer>::operator=<std::default_delete<EdgyRecognizer>,0>((__int64 *)(v9 + 56), v12);
      std::unique_ptr<EdgyRecognizer>::~unique_ptr<EdgyRecognizer>(&v22);
    }
    if ( v18 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v19 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v19 + 16LL))(v19);
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v24);
    if ( v10 )
      (*(void (__fastcall **)(struct BamoEdgyDragSourceClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 52,
    &v24,
    (const unsigned __int8 *)&v25);
  if ( v24 == *((struct BamoDragManagerClientProxy **)this + 53) )
  {
    v20 = 0LL;
    v24 = 0LL;
    EdgyProcessor::HitTest(v13, a2, &v20, &v24);
    v14 = *(_QWORD **)std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyNotificationMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                        (float *)this + 104,
                        (__int64)v23,
                        (unsigned __int8 *)&v25);
    v15 = v20;
    if ( v20 )
    {
      if ( (struct BamoEdgyDragSourceClientProxy *)v14[3] != v20 )
      {
        v22 = v20;
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v22);
        v16 = v14[3];
        v14[3] = v15;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v14 + 4, &v24);
      v22 = (struct BamoEdgyDragSourceClientProxy *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v15 + 1) + 40LL))((__int64)v15 + 8);
      v17 = std::make_unique<EdgyRecognizer,BamoEdgyGestureRecognitionConfigurationProxy *,0>(&v21, &v22);
      std::unique_ptr<EdgyRecognizer>::operator=<std::default_delete<EdgyRecognizer>,0>(v14 + 5, v17);
      std::unique_ptr<EdgyRecognizer>::~unique_ptr<EdgyRecognizer>(&v21);
    }
    if ( v24 )
      (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v15 )
      (*(void (__fastcall **)(struct BamoEdgyDragSourceClientProxy *))(*(_QWORD *)v15 + 8LL))(v15);
  }
}
