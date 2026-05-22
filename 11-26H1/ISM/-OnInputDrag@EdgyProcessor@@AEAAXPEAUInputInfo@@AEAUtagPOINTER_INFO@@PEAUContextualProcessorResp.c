/*
 * XREFs of ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C
 * Callers:
 *     ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180157E80 (-OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18005A808 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?GetKeyModifiers@PointerManipulationHelper@@SA?AW4VirtualKeyModifiers@System@Windows@@PEAUInputInfo@@@Z @ 0x1800985D4 (-GetKeyModifiers@PointerManipulationHelper@@SA-AW4VirtualKeyModifiers@System@Windows@@PEAUInputI.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800AE980 (-count@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ?RelativePointToScreen@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800E2D6C (-RelativePointToScreen@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??$_Emplace_reallocate@AEBUDragInfoStruct@@@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@AEAAPEAUDragInfoStruct@@QEAU2@AEBU2@@Z @ 0x18014C19C (--$_Emplace_reallocate@AEBUDragInfoStruct@@@-$vector@UDragInfoStruct@@V-$allocator@UDragInfoStru.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014C4DC (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014C58C (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_c.c)
 *     ??$_Insert_or_assign@AEBIAEA_K@?$unordered_map@I_KU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBI_K@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@std@@_N@1@AEBIAEA_K@Z @ 0x18014C764 (--$_Insert_or_assign@AEBIAEA_K@-$unordered_map@I_KU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBK_K@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18014C88C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18014CB24 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??$copy@PEBUtagPOINT@@V?$back_insert_iterator@V?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@@0@PEBUtagPOINT@@0V10@@Z @ 0x18014CE74 (--$copy@PEBUtagPOINT@@V-$back_insert_iterator@V-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@.c)
 *     ??$emplace@AEAIAEA_K@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@std@@_N@1@AEAIAEA_K@Z @ 0x18014CEE8 (--$emplace@AEAIAEA_K@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180155C60 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU-$h.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180155DB8 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@s.c)
 *     ??$emplace@AEAKUPointerCache@EdgyProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@EdgyProcessor@@@Z @ 0x180156240 (--$emplace@AEAKUPointerCache@EdgyProcessor@@@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcesso.c)
 *     ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x180156B50 (-AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcesso.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180156BD0 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180156ED4 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180157008 (-DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x18015713C (-DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z.c)
 *     ?DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K1@Z @ 0x180157290 (-DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18015755C (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetVelocityForPointerId@EdgyProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x1801577D0 (-GetVelocityForPointerId@EdgyProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180157C28 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x180159260 (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801A4EB0 (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801A4EEC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x1801A4F94 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall EdgyProcessor::OnInputDrag(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct tagPOINTER_INFO *a3,
        struct ContextualProcessorResponse *a4)
{
  struct ContextualProcessorResponse *v4; // r12
  struct tagPOINTER_INFO *v5; // r13
  struct tagPOINT v8; // rdi
  unsigned int KeyModifiers; // r15d
  _QWORD *v10; // rcx
  __int64 v11; // r8
  struct tagPOINT v12; // rdx
  const char *v13; // r9
  struct tagPOINT v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // xmm6_4
  int v18; // xmm7_4
  __int64 v19; // rcx
  struct tagPOINT v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  _BOOL8 v24; // rax
  struct Microsoft::Bamo::BaseBamoConnection *v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r12d
  __int64 v28; // r14
  unsigned int v29; // r13d
  __int128 *TransformFromRootToSite; // rax
  float *v31; // rax
  unsigned __int64 v32; // r14
  struct tagPOINT v33; // rax
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  float *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int v43; // [rsp+78h] [rbp-90h] BYREF
  char v44; // [rsp+7Ch] [rbp-8Ch]
  unsigned int InputType; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v46; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v47; // [rsp+90h] [rbp-78h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+98h] [rbp-70h] BYREF
  struct tagPOINT v49; // [rsp+A0h] [rbp-68h] BYREF
  struct tagPOINT v50; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-38h]
  struct tagPOINT v55; // [rsp+D8h] [rbp-30h]
  unsigned int v56[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v57; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v58; // [rsp+F8h] [rbp-10h]
  struct tagPOINT v59; // [rsp+100h] [rbp-8h]
  struct ContextualProcessorResponse *v60; // [rsp+108h] [rbp+0h]
  __int128 v61; // [rsp+118h] [rbp+10h] BYREF
  struct tagPOINTER_INFO *v62; // [rsp+128h] [rbp+20h]
  _BYTE v63[24]; // [rsp+130h] [rbp+28h] BYREF
  __int128 v64[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v65[64]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v66; // [rsp+1C8h] [rbp+C0h] BYREF
  float v67[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v68; // [rsp+1E0h] [rbp+D8h]
  struct tagPOINTF v69; // [rsp+1E8h] [rbp+E0h]
  __int128 v70; // [rsp+1F0h] [rbp+E8h] BYREF
  float v71; // [rsp+200h] [rbp+F8h]
  float v72; // [rsp+204h] [rbp+FCh]
  float v73; // [rsp+208h] [rbp+100h]
  float v74; // [rsp+20Ch] [rbp+104h]
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v4 = a4;
  v60 = a4;
  v5 = a3;
  v62 = a3;
  v43 = *((_DWORD *)a3 + 1);
  v8 = (struct tagPOINT)*((_QWORD *)a3 + 6);
  v59 = v8;
  KeyModifiers = PointerManipulationHelper::GetKeyModifiers((__int64)a2);
  LODWORD(v47) = *(_DWORD *)a2;
  InputType = PointerManipulationHelper::GetInputType((unsigned int)v47);
  v10 = (_QWORD *)((char *)this + 24);
  if ( (*(_BYTE *)(v11 + 12) & 4) != 0 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
      v10,
      &v46,
      (const unsigned __int8 *)&v43);
    v12 = (struct tagPOINT)v46;
    if ( v46 == *((__int64 **)this + 4) )
    {
      *(struct tagPOINT *)&v66 = v8;
      *((_QWORD *)&v66 + 1) = __PAIR64__(KeyModifiers, v47);
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::emplace<unsigned long &,EdgyProcessor::PointerCache>(
        (float *)this + 6,
        (__int64)&v61,
        (unsigned __int8 *)&v43,
        &v66);
    }
    else
    {
      *(__int64 *)((char *)v46 + 20) = (__int64)v8;
      *(_DWORD *)(*(_QWORD *)&v12 + 32LL) = KeyModifiers;
    }
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::_Erase<unsigned long>(
      v10,
      (unsigned __int8 *)&v43);
  }
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 44,
    &v46,
    (const unsigned __int8 *)&v43);
  v14 = (struct tagPOINT)v46;
  if ( v46 == *((__int64 **)this + 45) )
    goto LABEL_56;
  if ( v46[3] )
  {
    v15 = v46[4];
    if ( v15 )
    {
      if ( !v46[6] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xC1,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
          v13);
      if ( !v46[5] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xC2,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
          v13);
      v49 = v8;
      v52 = 0LL;
      v51 = 0LL;
      v66 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 8) + 80LL))(v15 + 8);
      if ( (int)EdgyProcessor::HitTestForTarget((__int64)this, v8, (unsigned int)v47, &v66, &v49, &v52, &v51) >= 0
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v14 + 48LL) + 480LL)
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v14 + 40LL) + 480LL) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)&v14 + 56LL);
        v17 = *(_DWORD *)(*(_QWORD *)v16 + 4LL);
        v18 = *(_DWORD *)(*(_QWORD *)v16 + 8LL);
        v19 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                           (float *)this + 22,
                           (__int64)&v61,
                           (unsigned __int8 *)&v43);
        *(_DWORD *)(v19 + 20) = v17;
        *(_DWORD *)(v19 + 24) = v18;
        v46 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 24LL) + 8LL)
                                                            + 32LL))(*(_QWORD *)(*(_QWORD *)&v14 + 24LL) + 8LL);
        v68 = 0LL;
        v67[0] = (float)v8.x;
        v67[1] = (float)v59.y;
        v69 = **(struct tagPOINTF **)&EdgyProcessor::GetVelocityForPointerId(this, v56, v43);
        PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(
                                   *(struct InputSite **)(*(_QWORD *)&v14 + 48LL),
                                   v8);
        v50 = PointerManipulationHelper::GetPositionRelativeToSite(*(struct InputSite **)(*(_QWORD *)&v14 + 40LL), v8);
        v21 = *(_QWORD *)(*(_QWORD *)&v14 + 56LL);
        if ( *(_DWORD *)(v21 + 8) == 2 || *(_DWORD *)(v21 + 8) == 3 )
        {
          if ( (*((_BYTE *)v5 + 12) & 4) != 0 )
          {
            EdgyRecognizer::OnPointerInfoFrame(*(EdgyRecognizer **)(*(_QWORD *)&v14 + 56LL), a2, v5);
            EdgyProcessor::AddDecisionException(v22, v43, 1u, (__int64)v4);
          }
          else
          {
            *(_DWORD *)(v21 + 8) = 1;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 56LL) + 8LL) == 1 )
          EdgyProcessor::AddDecisionException(*(_QWORD *)&v20, v43, 0, (__int64)v4);
        v23 = v51;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 56LL) + 8LL) == 4 )
        {
          v24 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
                  (__int64)v4 + 152,
                  (const unsigned __int8 *)&v43);
          v25 = 0LL;
          if ( v24 )
            goto LABEL_27;
          v52 = 0LL;
          InputETW::Edgy::DragStarted(
            v43,
            (int *)&PositionRelativeToSite,
            (int *)&v49,
            (int *)&v50,
            0LL,
            KeyModifiers,
            v23,
            InputType,
            (__int64)v46);
          (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, float *, _QWORD, unsigned int, __int64, unsigned int, __int64 *, _QWORD, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL) + 24LL))(
            *(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL,
            v43,
            &PositionRelativeToSite,
            &v49,
            &v50,
            v67,
            0LL,
            KeyModifiers,
            v23,
            InputType,
            v46,
            0LL,
            1);
          std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::emplace<unsigned int &,unsigned __int64 &>(
            (_QWORD *)this + 27,
            (__int64)&v61,
            (unsigned __int8 *)&v43,
            &v52);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 56LL) + 8LL) = 5;
        }
        v25 = 0LL;
LABEL_27:
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 56LL) + 8LL) == 5 )
        {
          v57 = 0LL;
          v58 = 0LL;
          v53 = 0LL;
          v54 = 0LL;
          v44 = 0;
          v46 = 0LL;
          InputType = 0;
          v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 24LL) + 32LL) + 24LL) + 32LL);
          if ( *(int *)(v26 + 8) > 0 )
            v25 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v26 + 16);
          Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v66, v25);
          (*(void (__fastcall **)(__int64, __int64 **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 24LL)
                                                                                  + 8LL)
                                                                      + 48LL))(
            *(_QWORD *)(*(_QWORD *)&v14 + 24LL) + 8LL,
            &v46,
            &InputType);
          std::copy<tagPOINT const *,std::back_insert_iterator<std::vector<tagPOINT>>>(v56, v46, &v46[InputType], &v57);
          Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v66);
          v27 = 0;
          InputType = 0;
          if ( (__int64)(*((_QWORD *)&v57 + 1) - v57) >> 3 )
          {
            v28 = 0LL;
            v29 = v47;
            while ( 1 )
            {
              TransformFromRootToSite = (__int128 *)PointerManipulationHelper::GetTransformFromRootToSite(
                                                      v65,
                                                      *(_QWORD *)(*(_QWORD *)&v14 + 40LL));
              v64[0] = *TransformFromRootToSite;
              v64[1] = TransformFromRootToSite[1];
              v64[2] = TransformFromRootToSite[2];
              v64[3] = TransformFromRootToSite[3];
              v46 = 0LL;
              v47 = _mm_unpacklo_ps(
                      (__m128)COERCE_UNSIGNED_INT((float)*(int *)(v57 + 8 * v28)),
                      (__m128)COERCE_UNSIGNED_INT((float)*(int *)(v57 + 8 * v28 + 4))).m128_u64[0];
              v31 = (float *)CInputTransform::RelativePointToScreen((float *)&v66, (float *)&v47, v64);
              v55.x = v8.x + (int)*v31 - *(_DWORD *)(*(_QWORD *)&v14 + 64LL);
              v55.y = v59.y + (int)v31[1] - *(_DWORD *)(*(_QWORD *)&v14 + 68LL);
              v47 = 0LL;
              v61 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL)
                                                                  + 80LL))(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL);
              if ( (int)EdgyProcessor::HitTestForTarget(
                          (__int64)this,
                          v55,
                          v29,
                          &v61,
                          (struct tagPOINT *)&v46,
                          (__int64 *)&v47,
                          &v51) < 0 )
                goto LABEL_35;
              std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
                (_QWORD *)(*(_QWORD *)&v14 + 72LL),
                v56,
                (const unsigned __int8 *)&InputType);
              v32 = v47;
              if ( *(_QWORD *)(*(_QWORD *)v56 + 24LL) != v47 )
                break;
LABEL_36:
              v33 = PointerManipulationHelper::GetPositionRelativeToSite(
                      *(struct InputSite **)(*(_QWORD *)&v14 + 48LL),
                      v55);
              *(_QWORD *)&v70 = v32;
              *((float *)&v70 + 2) = (float)v33.x;
              *((float *)&v70 + 3) = (float)v33.y;
              v34 = (float)(int)v46;
              v35 = (float)SHIDWORD(v46);
              v73 = (float)(int)v46;
              v74 = (float)SHIDWORD(v46);
              v36 = (float)*(int *)(v57 + 8LL * v27);
              v37 = (float)*(int *)(v57 + 8LL * v27 + 4);
              v71 = v36;
              v72 = v37;
              v38 = (float *)*((_QWORD *)&v53 + 1);
              if ( *((_QWORD *)&v53 + 1) == v54 )
              {
                std::vector<DragInfoStruct>::_Emplace_reallocate<DragInfoStruct const &>(
                  &v53,
                  *((__int64 *)&v53 + 1),
                  &v70);
              }
              else
              {
                **((_QWORD **)&v53 + 1) = v32;
                v38[2] = (float)v33.x;
                v38[3] = (float)v33.y;
                v38[4] = v36;
                v38[5] = v37;
                v38[6] = v34;
                v38[7] = v35;
                *((_QWORD *)&v53 + 1) += 32LL;
              }
              InputType = ++v27;
              v28 = v27;
              if ( v27 >= (unsigned __int64)((__int64)(*((_QWORD *)&v57 + 1) - v57) >> 3) )
              {
                v23 = v51;
                v5 = v62;
                goto LABEL_41;
              }
            }
            v44 = 1;
            std::unordered_map<unsigned int,unsigned __int64>::_Insert_or_assign<unsigned int const &,unsigned __int64 &>(
              (_QWORD *)(*(_QWORD *)&v14 + 72LL),
              (__int64)v63,
              (unsigned __int8 *)&InputType,
              &v47);
            v27 = InputType;
LABEL_35:
            v32 = v47;
            goto LABEL_36;
          }
LABEL_41:
          v39 = std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Try_emplace<unsigned long const &,>(
                  (_QWORD *)this + 27,
                  (__int64)v63,
                  (unsigned __int8 *)&v43);
          v40 = v52;
          if ( v52 != *(_QWORD *)(*(_QWORD *)v39 + 24LL) || v44 )
          {
            InputETW::Edgy::DropTargetChanged(
              v43,
              (int *)&PositionRelativeToSite,
              (int *)&v49,
              (int *)&v50,
              v52,
              KeyModifiers,
              (__int64)(*((_QWORD *)&v53 + 1) - v53) >> 5,
              v23);
            (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, float *, __int64, unsigned int, _QWORD, _DWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL) + 56LL))(
              *(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL,
              v43,
              &PositionRelativeToSite,
              &v49,
              &v50,
              v67,
              v40,
              KeyModifiers,
              v53,
              (__int64)(*((_QWORD *)&v53 + 1) - v53) >> 5,
              v23);
            *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Try_emplace<unsigned long const &,>(
                                     (_QWORD *)this + 27,
                                     (__int64)v63,
                                     (unsigned __int8 *)&v43)
                      + 24LL) = v40;
          }
          if ( (*((_BYTE *)v5 + 12) & 4) != 0 )
          {
            EdgyProcessor::FeedAnimationDataIfNeeded(this, v43, PositionRelativeToSite, v69, 0);
            v4 = v60;
            if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
                   (__int64)v60 + 152,
                   (const unsigned __int8 *)&v43) )
            {
              EdgyProcessor::CancelDrag(this, v43, *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v14 + 32LL));
            }
            else
            {
              InputETW::Edgy::DragInProgress(
                v43,
                (int *)&PositionRelativeToSite,
                (int *)&v49,
                (int *)&v50,
                v40,
                KeyModifiers,
                v23);
              (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, float *, __int64, unsigned int, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL) + 32LL))(
                *(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL,
                v43,
                &PositionRelativeToSite,
                &v49,
                &v50,
                v67,
                v40,
                KeyModifiers,
                v23);
            }
          }
          else
          {
            EdgyProcessor::FeedAnimationDataIfNeeded(this, v43, PositionRelativeToSite, v69, 1u);
            InputETW::Edgy::DragEnded(
              v43,
              (int *)&PositionRelativeToSite,
              (int *)&v49,
              (int *)&v50,
              v40,
              KeyModifiers,
              v23);
            (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, float *, __int64, unsigned int, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL) + 40LL))(
              *(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL,
              v43,
              &PositionRelativeToSite,
              &v49,
              &v50,
              v67,
              v40,
              KeyModifiers,
              v23);
            v4 = v60;
          }
          EdgyProcessor::AddDecisionException(v41, v43, 3u, (__int64)v4);
          if ( (_QWORD)v53 )
          {
            std::_Deallocate<16>((void *)v53, (struct std::nothrow_t *)((v54 - v53) & 0xFFFFFFFFFFFFFFE0uLL));
            v53 = 0LL;
            v54 = 0LL;
          }
          if ( (_QWORD)v57 )
            std::_Deallocate<16>((void *)v57, (struct std::nothrow_t *)((v58 - v57) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        goto LABEL_54;
      }
      EdgyProcessor::CancelDrag(this, v43, *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v14 + 32LL));
    }
  }
LABEL_54:
  if ( (*((_BYTE *)v5 + 12) & 4) == 0 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Erase<unsigned long>(
      (_QWORD *)this + 19,
      (unsigned __int8 *)&v43);
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyDragMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>,0>>::_Erase<unsigned long>(
      (_QWORD *)this + 44,
      (unsigned __int8 *)&v43);
    std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
      (_QWORD *)this + 11,
      (unsigned __int8 *)&v43);
    std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
      (_QWORD *)this + 27,
      (unsigned __int8 *)&v43);
  }
LABEL_56:
  if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
         (__int64)this + 280,
         (const unsigned __int8 *)&v43) )
  {
    EdgyProcessor::AddDecisionException(v42, v43, 3u, (__int64)v4);
  }
  if ( (*((_BYTE *)v5 + 12) & 4) == 0 )
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Erase<unsigned long>(
      (_QWORD *)this + 35,
      (unsigned __int8 *)&v43);
}
