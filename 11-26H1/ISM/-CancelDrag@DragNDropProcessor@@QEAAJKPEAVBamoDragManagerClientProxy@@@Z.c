/*
 * XREFs of ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DD10
 * Callers:
 *     ?CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180144FA0 (-CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientPr.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014FC80 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180051DC8 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ?OnManualDragEnded@ManualDragAreaClientProxy@@QEAAXI@Z @ 0x18014BA14 (-OnManualDragEnded@ManualDragAreaClientProxy@@QEAAXI@Z.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014C4DC (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ?DragEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014E27C (-DragEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014EBD8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18014F020 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014F14C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801A4EEC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragNDropProcessor::CancelDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  __int64 v6; // rbx
  struct BamoDragManagerClientProxy *v7; // rdi
  struct tagPOINT v8; // rsi
  unsigned int v9; // r14d
  int *VelocityForPointerId; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // r14d
  __int64 v14; // rdi
  ManualDragAreaClientProxy *v15; // rcx
  struct InputSite *v16; // rcx
  char v18; // [rsp+20h] [rbp-A9h]
  unsigned int v19; // [rsp+70h] [rbp-59h] BYREF
  __int64 v20; // [rsp+78h] [rbp-51h] BYREF
  int v21; // [rsp+80h] [rbp-49h]
  __int64 v22; // [rsp+88h] [rbp-41h] BYREF
  struct tagPOINT v23; // [rsp+90h] [rbp-39h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+98h] [rbp-31h] BYREF
  struct InputSite *v25; // [rsp+A0h] [rbp-29h] BYREF
  struct BamoDragManagerClientProxy *v26; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-19h] BYREF
  unsigned int v28[2]; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-9h] BYREF
  float v30[2]; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+Fh]
  int v32; // [rsp+E0h] [rbp+17h]
  int v33; // [rsp+E4h] [rbp+1Bh]

  v19 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 14,
    &v20,
    (const unsigned __int8 *)&v19);
  v6 = v20;
  if ( v20 != *((_QWORD *)this + 15) )
  {
    v26 = *(struct BamoDragManagerClientProxy **)(v20 + 32);
    v7 = v26;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v26);
    if ( v7 == a3 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
        (_QWORD *)this + 6,
        &v20,
        (const unsigned __int8 *)&v19);
      if ( v20 != *((_QWORD *)this + 7) )
      {
        v8 = *(struct tagPOINT *)(v20 + 28);
        v9 = *(_DWORD *)(v20 + 36);
        v21 = *(_DWORD *)(v20 + 40);
        v31 = 0LL;
        v30[0] = (float)v8.x;
        v30[1] = (float)v8.y;
        VelocityForPointerId = (int *)DragNDropProcessor::GetVelocityForPointerId(this, (unsigned int)v28);
        v32 = *VelocityForPointerId;
        v33 = VelocityForPointerId[1];
        v23 = v8;
        v20 = 0LL;
        v27 = 0LL;
        *(_QWORD *)v28 = (char *)v7 + 8;
        v29 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v7 + 1) + 80LL))((__int64)v7 + 8);
        v18 = 0;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _BYTE, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DragNDropProcessor::HitTest)(
          this,
          v8,
          v9,
          &v29,
          v18,
          0LL,
          &v23,
          &v20,
          &v27,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v22 = 0LL;
        PositionRelativeToSite = v8;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DragNDropProcessor::GetDragManagerInputSite)(
          this,
          &v25,
          v8,
          v9,
          v7,
          0LL);
        if ( v25 )
          PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v25, v8);
        v11 = (*(__int64 (__fastcall **)(DragNDropProcessor *))(*(_QWORD *)this + 48LL))(this);
        v12 = v27;
        v13 = v21;
        v14 = v20;
        InputETW::InputGesture::DragEnded(v11, a2, &PositionRelativeToSite, &v23, &v22, v20, v21, v27);
        (*(void (__fastcall **)(_QWORD, _QWORD, struct tagPOINT *, struct tagPOINT *, __int64 *, float *, __int64, int, __int64))(**(_QWORD **)v28 + 40LL))(
          *(_QWORD *)v28,
          a2,
          &PositionRelativeToSite,
          &v23,
          &v22,
          v30,
          v14,
          v13,
          v12);
        std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
          (_QWORD *)this + 38,
          (unsigned __int8 *)&v19);
        Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)(v6 + 32));
        v15 = *(ManualDragAreaClientProxy **)(v6 + 40);
        if ( v15 )
        {
          ManualDragAreaClientProxy::OnManualDragEnded(v15);
          Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)(v6 + 40));
        }
        if ( v6 != *((_QWORD *)this + 15) && **(_DWORD **)(v6 + 64) != 1 )
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
            (float *)this + 108,
            (__int64)&v29,
            (unsigned __int8 *)&v19);
        v16 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v26);
  }
  return 0LL;
}
