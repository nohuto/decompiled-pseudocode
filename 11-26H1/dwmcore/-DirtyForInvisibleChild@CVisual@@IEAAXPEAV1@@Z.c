/*
 * XREFs of ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020674
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180024E5C (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x180025C10 (-RemoveChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x1800262E0 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x18016CF2C (-ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800E5578 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E5A50 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?IsPure2DRect@@YA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E987C (-IsPure2DRect@@YA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??$emplace_back@AEAPEAVCVisual@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCVisual@@@Z @ 0x180229588 (--$emplace_back@AEAPEAVCVisual@@@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::DirtyForInvisibleChild(CVisual *this, struct CVisual *a2)
{
  CVisual *v3; // rsi
  unsigned int v4; // ebp
  char *v5; // rcx
  CComposition *v6; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v8; // rbx
  __int64 v9; // r9
  _DWORD *v10; // rdx
  __int64 v11; // rax
  _BYTE *v12; // r8
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  char **v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  char **v22; // r14
  char *i; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  char **v26; // rsi
  __int64 v27; // rax
  char **v28; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CManipulationManager *v30; // [rsp+50h] [rbp+8h] BYREF

  v3 = this;
  v4 = 17;
  if ( (*((_BYTE *)this + 96) & 4) == 0 )
  {
    v5 = (char *)a2 + 148;
    if ( !*((_DWORD *)a2 + 27) || (unsigned __int8)IsPure2DRect(v5) )
      CVisual::AddAdditionalDirtyRect(v3, v5, 0LL);
    else
      v4 = 21;
  }
  if ( (*((_BYTE *)a2 + 101) & 0x10) != 0 )
  {
    v6 = (CComposition *)*((_QWORD *)v3 + 3);
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
    ManipulationManager = CComposition::GetManipulationManager(v6, &v30);
    v8 = v30;
    if ( ManipulationManager >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v30, 3LL, a2);
    if ( v8 )
      (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)v3 + 3);
  v30 = a2;
  if ( !*(_BYTE *)(v9 + 6466) )
  {
    v10 = (_DWORD *)*((_QWORD *)a2 + 28);
    if ( (*v10 & 0x2000000) == 0 )
    {
LABEL_17:
      if ( (*((_DWORD *)a2 + 24) & 0x1000) == 0 && (*((_BYTE *)a2 + 96) & 0x10) == 0 )
        goto LABEL_19;
LABEL_49:
      std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::emplace_back<CVisual * &>(v9 + 6488, &v30);
      *((_BYTE *)a2 + 96) |= 0x20u;
      goto LABEL_19;
    }
    v11 = (unsigned int)v10[1];
    v12 = v10 + 2;
    v13 = 0LL;
    if ( (_DWORD)v11 )
    {
      while ( *v12 != 7 )
      {
        v13 = (unsigned int)(v13 + 1);
        ++v12;
        if ( (unsigned int)v13 >= (unsigned int)v11 )
          goto LABEL_55;
      }
    }
    else
    {
LABEL_55:
      if ( (unsigned int)v13 >= (unsigned int)v11 )
      {
        v14 = 0LL;
        goto LABEL_14;
      }
    }
    v14 = (__int64 *)((char *)&v10[2 * v13] + ((v11 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_14:
    v15 = *v14;
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 112);
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 64) )
          goto LABEL_49;
      }
    }
    goto LABEL_17;
  }
LABEL_19:
  if ( (*((_QWORD *)v3 + 4) & 3) != 0 )
  {
    if ( (*((_QWORD *)v3 + 4) & 3LL) == 1 )
    {
      v17 = (_QWORD *)(*((_QWORD *)v3 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_23;
    }
    if ( (*((_QWORD *)v3 + 4) & 3LL) == 2 )
    {
      v17 = 0LL;
      goto LABEL_23;
    }
    if ( (*((_QWORD *)v3 + 4) & 3LL) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v17 = (_QWORD *)((char *)v3 + 32);
LABEL_23:
  v18 = detail::pointer_buffer_impl<CResource *,0>::last((char *)v3 + 32);
  v19 = (char **)((char *)v3 + 88);
  while ( v17 != (_QWORD *)v18 )
  {
    v19 = (char **)((char *)v3 + 88);
    if ( *v17 != *((_QWORD *)v3 + 11) )
      (*(void (__fastcall **)(_QWORD, _QWORD, CVisual *))(*(_QWORD *)*v17 + 80LL))(*v17, 0LL, v3);
    ++v17;
  }
  v20 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v3 + 160LL))(v3);
  *((_BYTE *)v3 + 96) |= v4;
  v21 = v20;
  v22 = (char **)((char *)v3 + 88);
  if ( (v4 & 0xC) != 0 )
  {
    v22 = v19;
    v4 = v4 & 0xFFFFFF73 | 0x80;
    if ( v20 )
    {
      ++*(_DWORD *)(v20 + 28);
      v22 = (char **)((char *)v3 + 88);
    }
  }
  for ( i = *v22; (*((_BYTE *)v3 + 102) & 0x20) != 0 && i && (v4 & i[96]) != v4; i = *v28 )
  {
    i[96] |= v4;
    if ( (*((_QWORD *)i + 4) & 3) == 0 )
      goto LABEL_44;
    switch ( *((_QWORD *)i + 4) & 3LL )
    {
      case 1LL:
        v24 = (_QWORD *)(*((_QWORD *)i + 4) & 0xFFFFFFFFFFFFFFFCuLL);
        break;
      case 2LL:
        v24 = 0LL;
        break;
      case 3LL:
LABEL_44:
        v24 = i + 32;
        break;
      default:
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v25 = detail::pointer_buffer_impl<CResource *,0>::last(i + 32);
    v26 = (char **)(i + 88);
    while ( v24 != (_QWORD *)v25 )
    {
      v26 = (char **)(i + 88);
      if ( *v24 != *((_QWORD *)i + 11) )
        (*(void (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v24 + 80LL))(*v24, 0LL, i);
      ++v24;
    }
    v27 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)i + 160LL))(i);
    v28 = (char **)(i + 88);
    if ( v27 )
    {
      v28 = v26;
      if ( v21 != v27 )
      {
        if ( (v4 & 0x80u) != 0 )
          ++*(_DWORD *)(v27 + 24);
        v21 = v27;
        v28 = (char **)(i + 88);
      }
    }
    v3 = (CVisual *)i;
  }
}
