/*
 * XREFs of ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180156BD0
 * Callers:
 *     ?CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180144FA0 (-CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientPr.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180051DC8 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014C4DC (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180156ED4 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?GetVelocityForPointerId@EdgyProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x1801577D0 (-GetVelocityForPointerId@EdgyProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180157C28 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801A4EEC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessor::CancelDrag(
        EdgyProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rsi
  struct BamoDragManagerClientProxy *v9; // r14
  struct tagPOINT v10; // rdi
  int *VelocityForPointerId; // rax
  __int64 (__fastcall ***v12)(_QWORD); // r14
  struct InputSite *v13; // rbx
  struct BamoDragManagerClientProxy *v14; // r14
  __int64 v15; // rdi
  unsigned int v17; // [rsp+50h] [rbp-69h] BYREF
  __int64 v18; // [rsp+58h] [rbp-61h] BYREF
  int v19; // [rsp+60h] [rbp-59h]
  struct BamoDragManagerClientProxy *v20; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+70h] [rbp-49h]
  __int64 v22; // [rsp+78h] [rbp-41h] BYREF
  struct tagPOINT v23; // [rsp+80h] [rbp-39h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+88h] [rbp-31h] BYREF
  struct BamoDragManagerClientProxy *v25; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v26[2]; // [rsp+98h] [rbp-21h] BYREF
  struct InputSite *v27; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-9h] BYREF
  float v29[2]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+Fh]
  int v31; // [rsp+D0h] [rbp+17h]
  int v32; // [rsp+D4h] [rbp+1Bh]

  v20 = a3;
  v17 = a2;
  v5 = (_QWORD *)((char *)this + 352);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 44,
    &v18,
    (const unsigned __int8 *)&v17);
  v6 = *((_QWORD *)this + 45);
  v7 = v18;
  if ( v18 != v6 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
      v5,
      &v18,
      (const unsigned __int8 *)&v17);
    v8 = v18;
    if ( v18 != v6 )
    {
      v25 = *(struct BamoDragManagerClientProxy **)(v18 + 32);
      v9 = v25;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v25);
      if ( v9 == v20 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
          (_QWORD *)this + 3,
          &v18,
          (const unsigned __int8 *)&v17);
        if ( v18 != *((_QWORD *)this + 4) )
        {
          v10 = *(struct tagPOINT *)(v18 + 20);
          v21 = *(_DWORD *)(v18 + 28);
          v19 = *(_DWORD *)(v18 + 32);
          v30 = 0LL;
          v29[0] = (float)v10.x;
          v29[1] = (float)v10.y;
          VelocityForPointerId = (int *)EdgyProcessor::GetVelocityForPointerId(this, (unsigned int)v26);
          v31 = *VelocityForPointerId;
          v32 = VelocityForPointerId[1];
          v23 = v10;
          v12 = (__int64 (__fastcall ***)(_QWORD))((char *)v9 + 8);
          *(_QWORD *)v26 = v12;
          (*v12)[10](v12);
          v22 = 0LL;
          PositionRelativeToSite = v10;
          v18 = 0LL;
          v20 = 0LL;
          v13 = *(struct InputSite **)(v7 + 48);
          v27 = v13;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v27);
          if ( v13 )
            PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v13, v10);
          v28 = *(_OWORD *)(*v12)[10](v12);
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EdgyProcessor::HitTestForTarget)(
            this,
            v10,
            v21,
            &v28,
            &v23,
            &v18,
            &v20);
          v14 = v20;
          v15 = v18;
          InputETW::Edgy::DragEnded(a2, &PositionRelativeToSite, &v23, &v22, v18, v19, v20);
          (*(void (__fastcall **)(_QWORD, _QWORD, struct tagPOINT *, struct tagPOINT *, __int64 *, float *, __int64, int, struct BamoDragManagerClientProxy *))(**(_QWORD **)v26 + 40LL))(
            *(_QWORD *)v26,
            a2,
            &PositionRelativeToSite,
            &v23,
            &v22,
            v29,
            v15,
            v19,
            v14);
          std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
            (_QWORD *)this + 11,
            (unsigned __int8 *)&v17);
          Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)(v8 + 32));
          if ( *(_DWORD *)(*(_QWORD *)(v8 + 56) + 8LL) != 1 )
            std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
              (float *)this + 70,
              (__int64)&v28,
              (unsigned __int8 *)&v17);
          if ( v13 )
            (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v25);
    }
  }
  return 0LL;
}
