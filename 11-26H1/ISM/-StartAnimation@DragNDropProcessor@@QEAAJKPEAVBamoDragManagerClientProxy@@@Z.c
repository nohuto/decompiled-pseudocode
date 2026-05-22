/*
 * XREFs of ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180150BFC
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180146470 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180099660 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18014CCAC (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014DB80 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18014E8E4 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014EBD8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18014F020 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x180150E88 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801A4EEC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DragNDropProcessor::StartAnimation(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  struct InputSite *v5; // rdi
  struct IAnimationDataProvider *AnimationDataProvider; // r14
  const char *v7; // r9
  unsigned __int64 v8; // r15
  unsigned int ProcessId; // r12d
  __int64 v10; // rax
  void (__fastcall ***v11)(_QWORD); // rbx
  __int64 (__fastcall *v12)(struct IAnimationDataProvider *, struct tagPOINTF *); // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  struct tagPOINT PositionRelativeToSite; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  struct InputSite *v18; // rcx
  struct InputSite *v20; // rcx
  __int64 v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct InputSite *v23; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+48h] BYREF
  struct tagPOINTF v25; // [rsp+98h] [rbp+58h] BYREF

  v24 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 14,
    &v23,
    (const unsigned __int8 *)&v24);
  v5 = v23;
  if ( v23 == *((struct InputSite **)this + 15)
    || *((struct BamoDragManagerClientProxy **)v23 + 4) != a3
    || !*((_QWORD *)v23 + 4) )
  {
    return 0LL;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v8 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x47F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
      v7);
  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*((_QWORD *)v5 + 4) + 32LL)
                                                                                            + 16LL));
  if ( *std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
          (_QWORD *)this + 46,
          &v25,
          (const unsigned __int8 *)&v24) == *((_QWORD *)this + 47) )
  {
    (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                        + 24LL))(
      AnimationDataProvider,
      &v25,
      ProcessId);
    v10 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
            (float *)this + 92,
            (__int64)v21,
            (unsigned __int8 *)&v24);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(*(_QWORD *)v10 + 24LL), &v25);
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v25);
  }
  v11 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                                                       (float *)this + 92,
                                                       (__int64)v21,
                                                       (unsigned __int8 *)&v24)
                                        + 24LL);
  v21[0] = (__int64)v11;
  if ( v11 )
    (**v11)(v11);
  v12 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *))(*(_QWORD *)AnimationDataProvider
                                                                                      + 40LL);
  v25 = (struct tagPOINTF)v11;
  if ( v11 )
    (**v11)(v11);
  v13 = v12(AnimationDataProvider, &v25);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 6,
    &v25,
    (const unsigned __int8 *)&v24);
  v14 = *(_QWORD *)(*(_QWORD *)&v25 + 28LL);
  DragNDropProcessor::GetDragManagerInputSite(
    (__int64)this,
    (__int64 *)&v23,
    v14,
    *(_DWORD *)(*(_QWORD *)&v25 + 36LL),
    *((__int64 **)v5 + 4),
    0LL);
  if ( v23 )
  {
    PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v23, (struct tagPOINT)v14);
    DragNDropProcessor::GetVelocityForPointerId(this, &v25, v24);
    DragNDropProcessor::FeedAnimationDataIfNeeded(this, v24, PositionRelativeToSite, v25, 0);
  }
  InputETW::DragNDrop::StartAnimationCallBack(v24, v8, v13);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v5 + 4) + 8LL)
                                                                                       + 64LL))(
          *((_QWORD *)v5 + 4) + 8LL,
          v24,
          v8,
          v13);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v20 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v21);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49A,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)(unsigned int)v16);
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v21);
  return v17;
}
