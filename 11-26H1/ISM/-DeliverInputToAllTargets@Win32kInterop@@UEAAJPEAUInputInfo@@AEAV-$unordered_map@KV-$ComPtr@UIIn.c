/*
 * XREFs of ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x180011CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180011888 (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180011A04 (--1-$_Hash@V-$_Umap_traits@PEAXV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_compare@PEAXU-$has.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x180011B6C (-CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA-AUInputInteropMessageStorage@1@PEBUPoi.c)
 *     ??$_Try_emplace@PEAX$$V@?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAX@Z @ 0x180059878 (--$_Try_emplace@PEAX$$V@-$_Hash@V-$_Umap_traits@PEAXV-$vector@IV-$allocator@I@std@@@std@@V-$_Uha.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x1800646B0 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Win32kInterop::DeliverInputToAllTargets(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v5; // r15d
  _QWORD *v6; // rax
  const struct std::nothrow_t *v7; // rdx
  struct _MIT_INPUT_INTEROP_MESSAGE *v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // r13
  int v11; // r15d
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  _OWORD *v14; // rdx
  _OWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  _QWORD *i; // rbx
  __int64 *v21; // r8
  char *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // [rsp+28h] [rbp-81h]
  __int64 v26; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-61h]
  struct _MIT_INPUT_INTEROP_MESSAGE *v28; // [rsp+50h] [rbp-59h] BYREF
  __int64 v29; // [rsp+58h] [rbp-51h] BYREF
  __int64 v30; // [rsp+60h] [rbp-49h] BYREF
  __int64 v31; // [rsp+70h] [rbp-39h] BYREF
  _QWORD *v32; // [rsp+78h] [rbp-31h]
  __int64 v33; // [rsp+80h] [rbp-29h]
  unsigned __int64 *v34; // [rsp+88h] [rbp-21h] BYREF
  __int128 v35; // [rsp+90h] [rbp-19h]
  __int64 v36; // [rsp+A0h] [rbp-9h]
  __int64 v37; // [rsp+A8h] [rbp-1h]
  char v38; // [rsp+B0h] [rbp+7h] BYREF
  char v39; // [rsp+C0h] [rbp+17h] BYREF
  int v40; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v41; // [rsp+120h] [rbp+77h]
  __int64 v42; // [rsp+128h] [rbp+7Fh] BYREF

  v41 = a3;
  v3 = a3;
  v5 = *(_DWORD *)(a2 + 328);
  v27 = v5;
  v33 = 0LL;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(48LL);
  *v6 = v6;
  v6[1] = v6;
  v32 = v6;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 7LL;
  v37 = 8LL;
  LODWORD(v31) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    &v34,
    0x10uLL,
    (unsigned __int64)v6);
  Win32kInterop::CreateInputInteropMessageFromInputInfo((__int64 *)&v28, a2);
  v8 = v28;
  *((_DWORD *)v28 + 39) = 0;
  v9 = 0;
  if ( *(_DWORD *)(a2 + 316) )
  {
    while ( 1 )
    {
      v10 = 144LL * v9;
      v11 = *(_DWORD *)(a2 + v10 + 324);
      v40 = v11;
      v26 = 0LL;
      LODWORD(v42) = v11;
      std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
        v3,
        &v29,
        &v42);
      if ( v29 == *(_QWORD *)(v3 + 8) )
        break;
      v12 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v29 + 24);
      v13 = **v12;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      if ( v13(v12, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v26) < 0 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26) )
      {
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 56LL))(v26);
        v21 = &v30;
        v22 = &v38;
LABEL_17:
        v23 = std::_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>::_Try_emplace<void *,>(
                &v31,
                v22,
                v21);
        v24 = *(_QWORD *)v23 + 24LL;
        v7 = *(const struct std::nothrow_t **)(*(_QWORD *)v23 + 32LL);
        if ( v7 == *(const struct std::nothrow_t **)(*(_QWORD *)v23 + 40LL) )
        {
          std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(v24, v7, &v40);
        }
        else
        {
          *(_DWORD *)v7 = v11;
          *(_QWORD *)(v24 + 8) += 4LL;
        }
        goto LABEL_6;
      }
      v14 = (_OWORD *)((char *)v8 + 240 * *((unsigned int *)v8 + 39) + 168);
      v15 = (_OWORD *)(v10 + a2 + 320);
      *v14 = *v15;
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v14[4] = v15[4];
      v14[5] = v15[5];
      v14[6] = v15[6];
      v14[7] = v15[7];
      v14[8] = v15[8];
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 64LL))(v26);
      v7 = (const struct std::nothrow_t *)(240LL * *((unsigned int *)v8 + 39));
      *(_DWORD *)((char *)v8 + (_QWORD)v7 + 360) = v16;
      ++*((_DWORD *)v8 + 39);
LABEL_6:
      v17 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      ++v9;
      v3 = v41;
      if ( v9 >= *(_DWORD *)(a2 + 316) )
      {
        v5 = v27;
        goto LABEL_10;
      }
    }
    v42 = 0LL;
    v21 = &v42;
    v22 = &v39;
    goto LABEL_17;
  }
LABEL_10:
  v18 = v32;
  for ( i = (_QWORD *)*v32; i != v18; i = (_QWORD *)*i )
  {
    LOBYTE(v25) = 0;
    PointerInputMediator::RoutePointers(v5, i[2], (__int64)(i[4] - i[3]) >> 2, i[3], a2 + 88, v25, 0);
  }
  if ( *((_DWORD *)v8 + 39) )
  {
    PointerInputMediator::OnForwardedToGestureTargeting(v8);
    ((void (__fastcall *)(struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v8, 0LL);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v28, v7);
  std::_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>::~_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>(&v31);
  return 0LL;
}
