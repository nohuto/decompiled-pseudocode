/*
 * XREFs of ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180082350 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18006B470 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18007F3A0 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180081B2C (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z @ 0x180082330 (-Pop@-$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1800E08D0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopClipBounds@CDrawingContext@@AEAAXXZ @ 0x180174190 (-PopClipBounds@CDrawingContext@@AEAAXXZ.c)
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x18019C694 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180234B84 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180236808 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ??1?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180260378 (--1-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_p.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1802610F0 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     ?_Tidy@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18026146C (-_Tidy@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PostSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v3; // ebp
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // edx
  __int64 v13; // r8
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  _QWORD *v21; // r12
  _QWORD *v22; // r10
  _QWORD *v23; // r11
  __int64 v24; // rsi
  _QWORD *v25; // rbx
  __int64 *i; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r11
  struct CProjectedShadowReceiver ***ProjectedShadowReceivers; // rax
  struct CProjectedShadowReceiver **v32; // r14
  struct CProjectedShadowReceiver **m; // rsi
  struct CProjectedShadowReceiver *v34; // rbp
  __int64 n; // rbx
  CProjectedShadowScene *v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  _BYTE *v42; // rcx
  __int64 v43; // r8
  _QWORD **v44; // rcx
  _QWORD *v45; // rcx
  _QWORD *j; // rax
  _DWORD *v47; // rdx
  __int64 v48; // rax
  _BYTE *v49; // r8
  __int64 v50; // rcx
  _QWORD **v51; // rcx
  _QWORD *v52; // rcx
  __int64 v53; // rbx
  struct _LIST_ENTRY *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v58; // r10
  struct _LIST_ENTRY *k; // rcx
  int v60; // eax
  void *DirtyRegionVisualizationData; // rbx
  __int128 v62; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  if ( *((_BYTE *)this + 7936) )
  {
    if ( *((_BYTE *)this + 7937) )
      v7 = *((_QWORD *)this + 401);
    else
      v7 = *((_QWORD *)this + 994);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *((_QWORD *)this + 24);
  *a3 = 1;
  if ( !v8 )
    goto LABEL_5;
  v21 = (_QWORD *)*((_QWORD *)this + 996);
  v22 = *(_QWORD **)(v8 + 1752);
  v23 = *(_QWORD **)(v8 + 1760);
  while ( v22 != v23 )
  {
    if ( v7 == *v22 )
    {
      v37 = (_QWORD *)v22[1];
      if ( v21[1] - *v21 == v22[2] - (_QWORD)v37 )
      {
        v38 = *v21 - (_QWORD)v37;
        while ( 1 )
        {
          v39 = (_QWORD *)((char *)v37 + v38);
          if ( (_QWORD *)((char *)v37 + v38) == (_QWORD *)v21[1] )
            break;
          if ( *v39 != *v37 || v39[1] != v37[1] )
            goto LABEL_34;
          v37 += 2;
        }
        if ( !*((_BYTE *)this + 185) )
        {
          v3 = -2147221184;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147221184, 0x1761u, 0LL);
          goto LABEL_28;
        }
        break;
      }
    }
LABEL_34:
    v22 += 8;
  }
  v24 = *(_QWORD *)(v21[1] - 8LL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v24 + 192LL))(v24) )
  {
    v25 = (_QWORD *)(v7 + 320);
LABEL_40:
    if ( v25 )
    {
      for ( i = (__int64 *)v25[18]; i != (__int64 *)v25[19]; ++i )
      {
        v29 = *(_QWORD **)(*i + 1616);
        if ( *(_QWORD *)(*i + 1624) - (_QWORD)v29 == v21[1] - *v21 )
        {
          v30 = *v21 - (_QWORD)v29;
          while ( v29 != *(_QWORD **)(*i + 1624) )
          {
            if ( *v29 != *(_QWORD *)((char *)v29 + v30) || v29[1] != *(_QWORD *)((char *)v29 + v30 + 8) )
              goto LABEL_77;
            v29 += 2;
          }
          *(_QWORD *)(*i + 1776) = *(_QWORD *)(*(_QWORD *)(v25[31] + 24LL) + 880LL);
          v27 = *i;
          goto LABEL_45;
        }
LABEL_77:
        ;
      }
    }
    goto LABEL_43;
  }
  v40 = *(_QWORD *)(v7 + 224);
  if ( *(int *)v40 >= 0 )
    goto LABEL_43;
  v41 = *(unsigned int *)(v40 + 4);
  v42 = (_BYTE *)(v40 + 8);
  v43 = 0LL;
  if ( (_DWORD)v41 )
  {
    while ( *v42 != 1 )
    {
      v43 = (unsigned int)(v43 + 1);
      ++v42;
      if ( (unsigned int)v43 >= (unsigned int)v41 )
        goto LABEL_98;
    }
    goto LABEL_71;
  }
LABEL_98:
  if ( (unsigned int)v43 < (unsigned int)v41 )
  {
LABEL_71:
    v44 = (_QWORD **)(v40 + ((v41 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v43);
    goto LABEL_72;
  }
  v44 = 0LL;
LABEL_72:
  v45 = *v44;
  if ( v45 )
  {
    for ( j = (_QWORD *)*v45; j != v45; j = (_QWORD *)*j )
    {
      v25 = j - 44;
      if ( j[4] == v24 )
        goto LABEL_40;
    }
  }
LABEL_43:
  v27 = 0LL;
LABEL_45:
  if ( v27 == *((_QWORD *)this + 24) )
  {
    v28 = *((_QWORD *)this + 25);
    *a3 = 0;
    if ( v28 )
      *(_BYTE *)(v28 + 185) = 1;
    goto LABEL_28;
  }
LABEL_5:
  if ( *(char *)(v7 + 101) < 0 || (*(_DWORD *)(v7 + 96) & 0x100) == 0 )
    goto LABEL_28;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
    goto LABEL_8;
  if ( v7 == *((_QWORD *)a2 + 9) )
    goto LABEL_8;
  v47 = *(_DWORD **)(v7 + 224);
  if ( (*v47 & 0x4000000) == 0 )
    goto LABEL_8;
  v48 = (unsigned int)v47[1];
  v49 = v47 + 2;
  v50 = 0LL;
  if ( (_DWORD)v48 )
  {
    while ( *v49 != 6 )
    {
      v50 = (unsigned int)(v50 + 1);
      ++v49;
      if ( (unsigned int)v50 >= (unsigned int)v48 )
        goto LABEL_101;
    }
    goto LABEL_82;
  }
LABEL_101:
  if ( (unsigned int)v50 < (unsigned int)v48 )
  {
LABEL_82:
    v51 = (_QWORD **)((char *)&v47[2 * v50] + ((v48 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_83;
  }
  v51 = 0LL;
LABEL_83:
  v52 = *v51;
  if ( !v52 )
    goto LABEL_8;
  v53 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 192LL))(*v52);
  if ( !v53 )
    goto LABEL_8;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v7);
    v58 = TreeDataListHead;
    if ( TreeDataListHead )
    {
      for ( k = TreeDataListHead->Flink; k != v58; k = k->Flink )
      {
        v54 = k - 22;
        if ( (const struct CVisualTree *)k[2].Flink == a2 )
          goto LABEL_87;
      }
    }
    goto LABEL_8;
  }
  v54 = (struct _LIST_ENTRY *)(v7 + 320);
LABEL_87:
  if ( !v54 || BYTE4(v54->Blink) )
  {
LABEL_8:
    if ( *((_BYTE *)this + 8068) )
    {
      v9 = *((_DWORD *)this + 796);
      if ( v9 )
      {
        if ( *(_BYTE *)((unsigned int)(v9 - 1) + *((_QWORD *)this + 397)) )
        {
          if ( (**(_DWORD **)(v7 + 224) & 0x80000) != 0 )
          {
            ProjectedShadowReceivers = (struct CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers(v7);
            v32 = ProjectedShadowReceivers[1];
            for ( m = *ProjectedShadowReceivers; m != v32; ++m )
            {
              v34 = *m;
              if ( !*((_DWORD *)*m + 26) )
              {
                for ( n = *((_QWORD *)v34 + 11); n != *((_QWORD *)v34 + 10); n -= 8LL )
                {
                  v36 = *(CProjectedShadowScene **)(n - 8);
                  CProjectedShadowScene::DrawShadows(v36, this, v34);
                }
              }
            }
          }
        }
      }
    }
    if ( (*(_BYTE *)(v7 + 101) & 6) != 0 )
    {
      v10 = *((_DWORD *)g_pComposition + 1568);
      if ( v10 )
        *((_DWORD *)g_pComposition + 1568) = v10 - 1;
    }
    while ( 1 )
    {
      v11 = 0;
LABEL_15:
      v12 = *((_DWORD *)this + 66);
      if ( !v12 )
        break;
      v13 = *((_QWORD *)this + 32);
      if ( *(_QWORD *)(v13 + 16LL * (unsigned int)(v12 - 1) + 8) != v7 )
        break;
      v14 = *(_DWORD *)(v13 + 16LL * (unsigned int)(v12 - 1));
      v15 = 0;
      if ( v14 == 1 )
      {
        CDrawingContext::PopGpuClipRectInternal(this, 1);
      }
      else
      {
        if ( v14 != 8 )
        {
          switch ( v14 )
          {
            case 2:
              CDrawingContext::PopCpuClip(this);
              continue;
            case 3:
              CDrawingContext::PopClipBounds(this);
              continue;
            case 4:
              CDrawingContext::PopClippingScope(this, 1);
              continue;
            case 5:
              CDrawingContext::PopTransformInternal(this, 1);
              continue;
            case 6:
            case 7:
              v15 = CDrawingContext::PopLayer(this);
              v3 = v15;
              if ( v15 >= 0 )
                goto LABEL_110;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x125Bu, 0LL);
              goto LABEL_111;
            case 9:
              CDrawingContext::PopRenderOptionsInternal(this, 1);
              continue;
            case 10:
              v15 = CDrawingContext::PopLight(this);
              v3 = v15;
              if ( v15 >= 0 )
                goto LABEL_110;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x126Fu, 0LL);
LABEL_111:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xDCAu, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x1793u, 0LL);
              goto LABEL_28;
            case 11:
              CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((__int64)this + 256, &v62);
              --*((_DWORD *)this + 168);
              continue;
            default:
LABEL_110:
              v11 = v15;
              goto LABEL_15;
          }
        }
        *((_DWORD *)this + 66) = v12 - 1;
        CWatermarkStack<void *,2,2,10>::Pop((char *)this + 3152);
      }
    }
    v3 = v11;
    v16 = *((_DWORD *)this + 820);
    v17 = 0LL;
    v18 = (unsigned int)(v16 - 1);
    if ( v16 )
      v17 = (_QWORD *)(*((_QWORD *)this + 409) + 16LL * (unsigned int)v18);
    if ( *v17 == v7 && v16 )
      *((_DWORD *)this + 820) = v18;
    if ( *(char *)(v7 + 100) >= 0 )
      goto LABEL_25;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 993) + 192LL))(
           *((_QWORD *)this + 993),
           v18) )
    {
      v60 = CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(this);
      v3 = v60;
      if ( v60 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v60, 0x179Fu, 0LL);
        goto LABEL_28;
      }
      goto LABEL_26;
    }
    if ( *(char *)(v7 + 100) >= 0 )
    {
LABEL_25:
      if ( (**(_DWORD **)(v7 + 224) & 0x200000) != 0 )
      {
        DirtyRegionVisualizationData = (void *)CVisual::GetDirtyRegionVisualizationData(v7, v18);
        std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>::_Tidy(DirtyRegionVisualizationData);
        if ( DirtyRegionVisualizationData )
        {
          std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>::~deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>(DirtyRegionVisualizationData);
          operator delete(DirtyRegionVisualizationData, 0x28uLL);
        }
        CVisual::SetDirtyRegionVisualizationData(v7, 0LL);
      }
    }
LABEL_26:
    if ( *((_BYTE *)this + 185) )
      *a3 = 0;
    goto LABEL_28;
  }
  v55 = v53;
  while ( v53 )
  {
    if ( v53 == *((_QWORD *)a2 + 9) )
      goto LABEL_8;
    if ( v55 )
    {
      v56 = *(_QWORD *)(v55 + 88);
      v55 = v56;
      if ( v56 )
      {
        if ( v53 == v56 )
          break;
        v55 = *(_QWORD *)(v56 + 88);
        if ( v53 == v55 )
          break;
      }
    }
    v53 = *(_QWORD *)(v53 + 88);
  }
LABEL_28:
  v19 = *((_DWORD *)this + 796);
  if ( v19 )
    *((_DWORD *)this + 796) = v19 - 1;
  return v3;
}
