/*
 * XREFs of ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020E7C
 * Callers:
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x180025D40 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1800260F4 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x18016CF2C (-ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800E5578 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E5A50 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::DirtyForVisibleChild(CVisual *this, struct CVisual *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  CVisual *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbp
  _QWORD *v15; // rsi
  struct CVisual *v16; // rcx
  char v17; // al
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  CComposition *v21; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v23; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CManipulationManager *v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD *)((char *)this + 32);
  if ( (*v4 & 3) != 0 )
  {
    if ( (*v4 & 3LL) == 1 )
    {
      v5 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_5;
    }
    if ( (*v4 & 3LL) == 2 )
    {
      v5 = 0LL;
      goto LABEL_5;
    }
    if ( (*v4 & 3LL) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v5 = v4;
LABEL_5:
  v6 = detail::pointer_buffer_impl<CResource *,0>::last(v4);
  while ( v5 != (_QWORD *)v6 )
  {
    if ( *v5 != *((_QWORD *)this + 11) )
      (*(void (__fastcall **)(_QWORD, _QWORD, CVisual *))(*(_QWORD *)*v5 + 80LL))(*v5, 0LL, this);
    ++v5;
  }
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 160LL))(this);
  v7 = *((_QWORD *)this + 11);
  *((_BYTE *)this + 96) |= 0x11u;
  v8 = this;
  while ( (*((_BYTE *)v8 + 102) & 0x20) != 0 && v7 && (*(_BYTE *)(v7 + 96) & 0x11) != 0x11 )
  {
    *(_BYTE *)(v7 + 96) |= 0x11u;
    if ( (*(_QWORD *)(v7 + 32) & 3) == 0 )
      goto LABEL_21;
    switch ( *(_QWORD *)(v7 + 32) & 3LL )
    {
      case 1LL:
        v9 = (_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFFCuLL);
        break;
      case 2LL:
        v9 = 0LL;
        break;
      case 3LL:
LABEL_21:
        v9 = (_QWORD *)(v7 + 32);
        break;
      default:
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v10 = detail::pointer_buffer_impl<CResource *,0>::last(v7 + 32);
    while ( v9 != (_QWORD *)v10 )
    {
      if ( *v9 != *(_QWORD *)(v7 + 88) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v9 + 80LL))(*v9, 0LL, v7);
      ++v9;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))(v7);
    v8 = (CVisual *)v7;
    v7 = *(_QWORD *)(v7 + 88);
  }
  if ( (*((_QWORD *)a2 + 4) & 3) == 0 )
  {
LABEL_61:
    v11 = (_QWORD *)((char *)a2 + 32);
    goto LABEL_26;
  }
  if ( (*((_QWORD *)a2 + 4) & 3LL) == 1 )
  {
    v11 = (_QWORD *)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_26;
  }
  if ( (*((_QWORD *)a2 + 4) & 3LL) != 2 )
  {
    if ( (*((_QWORD *)a2 + 4) & 3LL) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_61;
  }
  v11 = 0LL;
LABEL_26:
  v12 = detail::pointer_buffer_impl<CResource *,0>::last((char *)a2 + 32);
  while ( v11 != (_QWORD *)v12 )
  {
    if ( *v11 != *((_QWORD *)a2 + 11) )
      (*(void (__fastcall **)(_QWORD, __int64, struct CVisual *))(*(_QWORD *)*v11 + 80LL))(*v11, 1LL, a2);
    ++v11;
  }
  v13 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 160LL))(a2);
  *((_BYTE *)a2 + 96) |= 4u;
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 28);
  v15 = (_QWORD *)*((_QWORD *)a2 + 11);
  v16 = a2;
  while ( 2 )
  {
    if ( (*((_BYTE *)v16 + 102) & 0x20) != 0 )
    {
      if ( v15 )
      {
        v17 = *((_BYTE *)v15 + 96);
        if ( v17 >= 0 )
        {
          *((_BYTE *)v15 + 96) = v17 | 0x80;
          if ( (v15[4] & 3) == 0 )
            goto LABEL_47;
          switch ( v15[4] & 3LL )
          {
            case 1LL:
              v18 = (_QWORD *)(v15[4] & 0xFFFFFFFFFFFFFFFCuLL);
              break;
            case 2LL:
              v18 = 0LL;
              break;
            case 3LL:
LABEL_47:
              v18 = v15 + 4;
              break;
            default:
              ModuleFailFastForHRESULT(-2147418113, retaddr);
          }
          v19 = detail::pointer_buffer_impl<CResource *,0>::last(v15 + 4);
          while ( v18 != (_QWORD *)v19 )
          {
            if ( *v18 != v15[11] )
              (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)*v18 + 80LL))(*v18, 1LL, v15);
            ++v18;
          }
          v20 = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 160LL))(v15);
          if ( v20 && v14 != v20 )
          {
            ++*(_DWORD *)(v20 + 24);
            v14 = v20;
          }
          v16 = (struct CVisual *)v15;
          v15 = (_QWORD *)v15[11];
          continue;
        }
      }
    }
    break;
  }
  if ( (*((_BYTE *)a2 + 101) & 0x10) != 0 )
  {
    v21 = (CComposition *)*((_QWORD *)this + 3);
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    ManipulationManager = CComposition::GetManipulationManager(v21, &v25);
    v23 = v25;
    if ( ManipulationManager >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v25, 2LL, a2);
    if ( v23 )
      (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v23 + 16LL))(v23);
  }
}
