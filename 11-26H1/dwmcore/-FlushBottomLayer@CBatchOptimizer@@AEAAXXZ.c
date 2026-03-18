/*
 * XREFs of ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800702C0
 * Callers:
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x1800701A0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180070C04 (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180070E00 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800711C0 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x1800C24BC (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18016D360 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ?RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x180185CF0 (-RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBatchCommand@@$0-0@gsl@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchOptimizer::FlushBottomLayer(CBatchOptimizer *this)
{
  __int64 v1; // rbx
  char *v3; // rsi
  unsigned int v4; // r15d
  void (__fastcall ***v5)(_QWORD); // rcx
  __int64 v6; // rbp
  unsigned int v7; // ebp
  char *v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbp
  unsigned int v13; // eax
  _DWORD *v14; // rax
  void (__fastcall ***v15)(_QWORD); // rcx
  __int64 v16; // r10
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  int v19; // esi
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // ebp
  int v25; // esi
  unsigned int v26; // eax
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r15
  int v30; // eax
  _DWORD *v31; // rax
  _DWORD *v32; // r12
  int v33; // eax
  int v34; // ebp
  __int64 v35; // rcx
  _QWORD v36[2]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  _DWORD *v38; // [rsp+70h] [rbp+8h] BYREF

  v1 = 520LL * *((int *)this + 12);
  v3 = (char *)this + v1 + 120;
  v4 = *(_DWORD *)((char *)this + v1 + 96);
  v5 = *(void (__fastcall ****)(_QWORD))((char *)this + v1 + 112);
  if ( !v5 )
  {
    v8 = v3;
    goto LABEL_18;
  }
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    v27 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 8) = v5;
    (**v5)(v5);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    v8 = v3;
    *(_DWORD *)(v6 + 24) += *(_DWORD *)((char *)this + v1 + 100);
  }
  else
  {
    v7 = *(_DWORD *)((char *)this + v1 + 100);
    if ( v7 > 1 || (v8 = v3, *(_DWORD *)((char *)this + v1 + 104)) )
    {
      v8 = v3;
      v9 = v4 - v7;
      if ( v4 != v7 )
      {
        v28 = *((_QWORD *)this + 1);
        v29 = (int)v9;
        gsl::details::extent_type<-1>::extent_type<-1>(v36, (int)v9);
        v36[1] = v3;
        if ( v36[0] == -1LL || !v3 && v36[0] )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v30 = CDrawListBatchManager::RawAddBatchCommands(v28, v36);
        if ( v30 < 0 )
          ModuleFailFastForHRESULT(v30, retaddr);
        v8 = &v3[8 * v29];
        v4 = v7;
      }
      v10 = *((_QWORD *)this + 1);
      if ( *(_DWORD *)(v10 + 64) )
        goto LABEL_6;
      v31 = MIDL_user_allocate(0xB8uLL);
      v32 = v31;
      if ( v31 )
      {
        *v31 = 0;
        v38 = v31;
        v33 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v10 + 40, &v38, 1LL);
        v34 = v33;
        if ( v33 >= 0 )
        {
LABEL_6:
          v11 = (unsigned int)(*(_DWORD *)(v10 + 64) - 1);
          v12 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 8 * v11);
          v13 = *(_DWORD *)(v10 + 72);
          *(_DWORD *)(v10 + 64) = v11;
          if ( v13 >= (unsigned int)v11 )
            v13 = v11;
          *(_DWORD *)(v10 + 72) = v13;
          *(_DWORD *)v12 = 3;
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_DWORD *)(v12 + 16) = *(_DWORD *)((char *)this + v1 + 88);
          *(_BYTE *)(v12 + 20) = *((_BYTE *)this + v1 + 92);
          v14 = (_DWORD *)v12;
          v15 = *(void (__fastcall ****)(_QWORD))((char *)this + v1 + 112);
          *(_QWORD *)(v12 + 8) = v15;
          if ( v15 )
          {
            (**v15)(v15);
            v14 = (_DWORD *)v12;
          }
          *(_DWORD *)(v12 + 24) = *(_DWORD *)((char *)this + v1 + 100);
          v16 = *((_QWORD *)this + 1);
          *((_QWORD *)this + 5) = v14;
          v38 = v14;
          v17 = *(_DWORD *)(v16 + 24);
          v18 = v17 + 1;
          if ( v17 + 1 < v17 )
          {
            v19 = -2147024362;
            v20 = 183;
            goto LABEL_12;
          }
          if ( v18 > *(_DWORD *)(v16 + 20) )
          {
            v19 = DynArrayImpl<0>::AddMultipleAndSet(v16, 8LL, 1LL, &v38);
            if ( v19 < 0 )
            {
              v20 = 194;
LABEL_12:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v20, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x90u, 0LL);
              ModuleFailFastForHRESULT(v19, retaddr);
            }
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)v16 + 8LL * *(unsigned int *)(v16 + 24)) = v14;
            *(_DWORD *)(v16 + 24) = v18;
          }
          goto LABEL_16;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x160u, 0LL);
        std::default_delete<CBatchCommand>::operator()(v35, v32);
      }
      else
      {
        v34 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x15Eu, 0LL);
      }
      ModuleFailFastForHRESULT(v34, retaddr);
    }
  }
LABEL_16:
  v21 = *(_QWORD *)((char *)this + v1 + 112);
  *(_QWORD *)((char *)this + v1 + 112) = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
LABEL_18:
  v22 = *((_QWORD *)this + 1);
  if ( !v8 && v4 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v23 = *(_DWORD *)(v22 + 24);
  v24 = v23 + v4;
  if ( v23 + v4 < v23 )
  {
    v25 = -2147024362;
    v26 = 183;
    goto LABEL_26;
  }
  if ( v24 <= *(_DWORD *)(v22 + 20) )
  {
    memcpy_0((void *)(*(_QWORD *)v22 + 8LL * v23), v8, 8LL * v4);
    *(_DWORD *)(v22 + 24) = v24;
    goto LABEL_22;
  }
  v25 = DynArrayImpl<0>::AddMultipleAndSet(*((_QWORD *)this + 1), 8LL, v4, v8);
  if ( v25 < 0 )
  {
    v26 = 194;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v26, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xA1u, 0LL);
    ModuleFailFastForHRESULT(v25, retaddr);
  }
LABEL_22:
  *(_QWORD *)((char *)this + v1 + 96) = 0LL;
  if ( !*(_DWORD *)((char *)this + v1 + 104) )
    *((_QWORD *)this + 5) = 0LL;
  *(_DWORD *)((char *)this + v1 + 104) = 0;
}
