/*
 * XREFs of ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0
 * Callers:
 *     ?CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ @ 0x18009EE20 (-CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18009E280 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetParentInputSink@CInputSinkContext@@KAPEAXPEBVCVisual@@@Z @ 0x18009E374 (-GetParentInputSink@CInputSinkContext@@KAPEAXPEBVCVisual@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18009E920 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x18009EFE0 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     ?HasInputSink@CVisual@@QEBA_NXZ @ 0x18009F630 (-HasInputSink@CVisual@@QEBA_NXZ.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAXXZ @ 0x18009F6A0 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18009FD9C (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x18009FE40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800ADA94 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x1800ADD80 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     IsNotifyInputSinkParentedPresent @ 0x1802218E4 (IsNotifyInputSinkParentedPresent.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180260224 (--0CTreeData@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CInputSinkContext>(
        __int64 a1,
        CVisual *a2,
        const void *a3,
        __int64 a4)
{
  int v8; // eax
  unsigned int v9; // edi
  CVisual *v10; // rsi
  struct _LIST_ENTRY *v11; // r14
  struct _LIST_ENTRY *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  int Child; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v24; // r10
  struct _LIST_ENTRY *i; // rcx
  struct CTreeData *UnusedTreeData; // rdi
  void *InputHandle; // rax
  __int64 v28; // r10
  CTreeData *v29; // rax
  CVisual *v30; // [rsp+70h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 64) = 1;
  if ( a3 )
  {
    v8 = CThreadContext::RegisterGraphWalkRoot(a3);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x3Eu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xD6u, 0LL);
      return v9;
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  v10 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  while ( 1 )
  {
LABEL_4:
    if ( (*((_BYTE *)v10 + 102) & 0x20) == 0 && v10 != a2 )
      goto LABEL_11;
    v11 = *(struct _LIST_ENTRY **)(a1 + 56);
    if ( v11 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_QWORD))v11->Flink[12].Flink)(*(_QWORD *)(a1 + 56)) )
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v10);
        v24 = TreeDataListHead;
        if ( TreeDataListHead )
        {
          for ( i = TreeDataListHead->Flink; i != v24; i = i->Flink )
          {
            v12 = i - 22;
            if ( i[2].Flink == v11 )
              goto LABEL_8;
          }
        }
LABEL_33:
        UnusedTreeData = CVisual::GetUnusedTreeData(v10);
        if ( UnusedTreeData )
        {
          CVisual::SetUnusedTreeData(v10, 0LL);
        }
        else
        {
          v29 = (CTreeData *)operator new(0x188uLL);
          UnusedTreeData = v29;
          if ( v29 )
          {
            CTreeData::CTreeData(v29);
            *((_QWORD *)UnusedTreeData + 48) = 0LL;
            *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
          }
          else
          {
            UnusedTreeData = 0LL;
          }
        }
        (*(void (__fastcall **)(struct CTreeData *, struct _LIST_ENTRY *, CVisual *))(*(_QWORD *)UnusedTreeData + 8LL))(
          UnusedTreeData,
          v11,
          v10);
        goto LABEL_9;
      }
      v12 = (struct _LIST_ENTRY *)((char *)v10 + 320);
LABEL_8:
      if ( !v12 )
        goto LABEL_33;
    }
LABEL_9:
    v13 = *(_QWORD *)(a4 + 8);
    if ( CVisual::HasInputSink((CVisual *)v13) )
    {
      if ( !*(_QWORD *)(a4 + 72) )
      {
        if ( (unsigned __int8)IsNotifyInputSinkParentedPresent() )
        {
          CInputSinkContext::GetParentInputSink((const struct CVisual *)v13);
          InputHandle = CVisual::GetInputHandle((CVisual *)v13);
          NotifyInputSinkParented(InputHandle, v28);
        }
        *(_QWORD *)(a4 + 72) = v13;
      }
      *(_BYTE *)(v13 + 100) |= 0x20u;
    }
    if ( (*(_DWORD *)(v13 + 96) & 0x1000) == 0 )
      break;
    v30 = 0LL;
    Child = CGraphWalker<CVisual>::GotoFirstChild(a1, (unsigned __int64 *)&v30);
    v9 = Child;
    if ( Child < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Child, 0x100u, 0LL);
      goto LABEL_23;
    }
    if ( !v30 )
      goto LABEL_11;
    v10 = v30;
  }
  do
  {
LABEL_11:
    if ( (*((_BYTE *)v10 + 102) & 0x20) != 0 || v10 == a2 )
    {
      v14 = *(_QWORD *)(a4 + 8);
      if ( v14 == *(_QWORD *)(a4 + 72) )
        *(_QWORD *)(a4 + 72) = 0LL;
      *(_BYTE *)(v14 + 96) &= ~0x20u;
    }
    v30 = 0LL;
    v15 = CGraphWalker<CVisual>::GotoSibling(a1, &v30);
    v9 = v15;
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x127u, 0LL);
      goto LABEL_23;
    }
    v10 = v30;
    if ( v30 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 4) )
      break;
    v17 = *(_DWORD *)(a1 + 40);
    v18 = 0LL;
    v19 = 0;
    if ( v17 )
    {
      *(_DWORD *)(a1 + 40) = v17 - 1;
      v20 = *(_QWORD *)(a1 + 32);
      v19 = *(_DWORD *)(v20 + 16LL * (unsigned int)(v17 - 1) + 8);
      v18 = *(_QWORD *)(v20 + 16LL * (unsigned int)(v17 - 1));
    }
    v10 = *(CVisual **)(a1 + 16);
    --*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = v18;
    *(_DWORD *)(a1 + 24) = v19;
  }
  while ( v10 );
  if ( v16 == 1 )
    v9 = 0;
LABEL_23:
  if ( a3 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Optimize();
  return v9;
}
