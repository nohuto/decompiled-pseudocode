/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18014C0CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800CAED0 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18014AFD0 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?UnregisterTransformParentChild@CPreWalkVisual@@SAXPEAVCVisual@@@Z @ 0x18014C300 (-UnregisterTransformParentChild@CPreWalkVisual@@SAXPEAVCVisual@@@Z.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x18014C3A0 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x1801CDA28 (--$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v5; // ebp
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  struct CResource *v9; // rsi
  __int64 v10; // r12
  struct CResource **v11; // rdi
  __int64 Resource; // rax
  struct CResource *v13; // r14
  __int64 v14; // r15
  struct CResource **v16; // rax
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  CVisual *v18; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
  v8 = *((unsigned int *)a3 + 2);
  v9 = 0LL;
  v10 = 0LL;
  v18 = TransformParentDataInternal;
  v11 = (struct CResource **)TransformParentDataInternal;
  if ( (_DWORD)v8 )
  {
    Resource = CResourceTable::GetResource(v7, v8, 160LL);
    v9 = (struct CResource *)Resource;
    if ( !Resource )
    {
      v5 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x96Eu, 0LL);
      return v5;
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Resource + 192LL))(Resource);
  }
  v13 = 0LL;
  v14 = 0LL;
  if ( v11 )
  {
    v13 = *v11;
    v14 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)*v11 + 192LL))(*v11);
  }
  if ( v9 != v13 )
  {
    CResource::UnRegisterNotifierInternal(this, v13);
    if ( v9 )
    {
      CResource::RegisterNotifier(this, v9);
      if ( !v11 )
      {
        v16 = (struct CResource **)operator new(0x10uLL);
        v11 = v16;
        if ( v16 )
          *(_OWORD *)v16 = 0LL;
        else
          v11 = 0LL;
        CVisual::SetTransformParentDataInternal(this, (struct TransformParentData *)v11);
      }
      *v11 = v9;
      *((_BYTE *)v11 + 8) = *((_BYTE *)a3 + 12) != 0;
    }
    else if ( v11 )
    {
      SAFE_DELETE<TransformParentData>(&v18);
      CVisual::SetTransformParentDataInternal(this, 0LL);
    }
  }
  if ( ((*((_BYTE *)this + 102) & 8) != 0) != (v9 != 0LL) )
  {
    if ( v9 )
    {
      v18 = this;
      std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Try_emplace<CVisual * const &,std::nullptr_t>(
        (char *)g_pComposition + 6192,
        &v17,
        &v18);
      *(_BYTE *)(v17 + 48) = 1;
      *((_BYTE *)this + 102) |= 8u;
    }
    else
    {
      CPreWalkVisual::UnregisterTransformParentChild(this);
      *((_BYTE *)this + 102) &= ~8u;
    }
  }
  if ( v10 != v14 )
  {
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
  }
  return v5;
}
