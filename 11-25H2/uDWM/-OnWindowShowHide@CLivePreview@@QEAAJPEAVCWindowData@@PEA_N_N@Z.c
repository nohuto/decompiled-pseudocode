/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001AC1C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800E3600 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800101D0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180025DB8 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18002D0FC (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18004C3BC (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18004CCDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x180055730 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007E478 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007FFC8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??1?$out_param_t@V?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ @ 0x18008DDCC (--1-$out_param_t@V-$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z @ 0x180099214 (-RemoveAt@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18009A290 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-Reg.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800BA03C (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800BA258 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800BA28C (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  unsigned int v6; // ebx
  int v7; // r12d
  int v8; // r13d
  __int64 v10; // r12
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // r13
  __int64 v14; // r12
  int v15; // r12d
  _QWORD *v16; // r8
  __int64 v17; // r13
  char v18; // al
  CContainerVisual **v19; // rbx
  int v20; // eax
  CBaseObject *v21; // rcx
  int updated; // eax
  CLivePreview *v23; // rcx
  bool IsTrulyMaximized; // r12
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // eax
  CContainerVisual *v28; // rdx
  __int64 i; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  CContainerVisual **v32; // rdx
  int v33; // eax
  CBaseObject *v34; // rcx
  struct CVisual *v35; // rdx
  int v36; // eax
  CBaseObject *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  char v40; // dl
  unsigned int v41; // eax
  CTopLevelWindow *v42; // r12
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  int inserted; // eax
  CContainerVisual *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  int v51; // eax
  CContainerVisual *v52; // rcx
  int v53; // r9d
  CContainerVisual **v54; // rdx
  int v55; // eax
  CBaseObject *v56; // rcx
  CContainerVisual **v57; // rdx
  int v58; // eax
  CBaseObject *v59; // rcx
  CTopLevelWindow *v60; // rcx
  int v61; // eax
  unsigned int v62; // [rsp+20h] [rbp-E0h]
  unsigned int v63; // [rsp+20h] [rbp-E0h]
  char v64; // [rsp+30h] [rbp-D0h]
  CContainerVisual *v65; // [rsp+38h] [rbp-C8h] BYREF
  char v66; // [rsp+40h] [rbp-C0h]
  struct CVisual *v67; // [rsp+48h] [rbp-B8h]
  bool *v68; // [rsp+50h] [rbp-B0h]
  struct CWindowData *v69; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v70; // [rsp+60h] [rbp-A0h]
  bool v71; // [rsp+70h] [rbp-90h]
  int v72; // [rsp+71h] [rbp-8Fh]
  __int16 v73; // [rsp+75h] [rbp-8Bh]
  char v74; // [rsp+77h] [rbp-89h]
  CContainerVisual *v75; // [rsp+78h] [rbp-88h]
  _BYTE v76[32]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR ClassName[264]; // [rsp+A0h] [rbp-60h] BYREF

  v68 = a3;
  v6 = 0;
  v7 = *((_DWORD *)this + 80);
  v8 = *((_DWORD *)this + 72);
  LODWORD(v65) = v8;
  if ( v7 <= 0 && v8 <= 0 )
    return v6;
  v64 = 0;
  v66 = 0;
  if ( a4 || !CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    v10 = (unsigned int)(v7 - 1);
    v11 = (_QWORD *)((char *)this + 296);
    while ( (int)v10 >= 0 )
    {
      if ( *(struct CWindowData **)(*v11 + 48 * v10 + 8) == a2 )
      {
        _mm_lfence();
        v19 = *(CContainerVisual ***)(*v11 + 48 * v10);
        CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)v19);
        v20 = CContainerVisual::RemoveChild(v19[3], (struct CVisual *)v19);
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x6C9u, 0LL);
        v21 = *(CBaseObject **)(*((_QWORD *)this + 37) + 48 * v10 + 16);
        if ( v21 )
        {
          CBaseObject::Release(v21);
          *(_QWORD *)(*((_QWORD *)this + 37) + 48 * v10 + 16) = 0LL;
        }
        updated = DynArray<LivePreviewWindow,0>::RemoveAt((char *)this + 296, (unsigned int)v10);
        v6 = updated;
        if ( updated < 0 )
        {
          v62 = 1740;
          goto LABEL_27;
        }
        break;
      }
      v10 = (unsigned int)(v10 - 1);
    }
    v12 = (unsigned int)((_DWORD)v65 - 1);
    v13 = (_QWORD *)((char *)this + 264);
    while ( 1 )
    {
      LODWORD(v65) = v12;
      if ( (int)v12 < 0 )
        break;
      v14 = 5 * v12;
      if ( *(struct CWindowData **)(*v13 + 40 * v12) == a2 )
      {
        if ( *(_QWORD *)(*v13 + 40 * v12 + 8) )
        {
          _mm_lfence();
          v54 = *(CContainerVisual ***)(*v13 + 40 * v12 + 8);
          v55 = CContainerVisual::RemoveChild(v54[3], (struct CVisual *)v54);
          if ( v55 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v55, 0x6D8u, 0LL);
          v56 = *(CBaseObject **)(*v13 + 8 * v14 + 8);
          if ( v56 )
          {
            CBaseObject::Release(v56);
            *(_QWORD *)(*v13 + 8 * v14 + 8) = 0LL;
          }
        }
        if ( *(_QWORD *)(*v13 + 8 * v14 + 16) )
        {
          _mm_lfence();
          v57 = *(CContainerVisual ***)(*v13 + 8 * v14 + 16);
          v58 = CContainerVisual::RemoveChild(v57[3], (struct CVisual *)v57);
          if ( v58 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v58, 0x6DEu, 0LL);
          v59 = *(CBaseObject **)(*v13 + 8 * v14 + 16);
          if ( v59 )
          {
            CBaseObject::Release(v59);
            *(_QWORD *)(*v13 + 8 * v14 + 16) = 0LL;
          }
        }
        v60 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
        if ( v60 )
          CTopLevelWindow::StopLivePreviewAnimation(v60);
        updated = DynArray<CPenContact,0>::RemoveAt((char *)this + 264, (unsigned int)v65);
        v6 = updated;
        if ( updated < 0 )
        {
          v62 = 1767;
          goto LABEL_27;
        }
        v66 = 1;
        break;
      }
      v12 = (unsigned int)(v12 - 1);
    }
    v15 = *((_DWORD *)this + 96) - 1;
    if ( v15 >= 0 )
    {
      v16 = (_QWORD *)((char *)this + 360);
      v17 = 16LL * v15;
      do
      {
        v67 = *(struct CVisual **)(*v16 + v17);
        if ( CTopLevelWindow::GetWindowData(v67) == a2 )
        {
          DynArray<CIconicBitmapPending,0>::RemoveAt(v16, (unsigned int)v15);
          v61 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 52), v67);
          v6 = v61;
          if ( v61 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v61, 0x6F5u, 0LL);
          v16 = (_QWORD *)((char *)this + 360);
        }
        v17 -= 16LL;
        --v15;
      }
      while ( v15 >= 0 );
    }
    if ( !v66 )
    {
      v18 = 0;
      goto LABEL_19;
    }
    goto LABEL_58;
  }
  if ( !*((_BYTE *)this + 240)
    || CLivePreview::_IsInLivePreview(this, a2)
    || GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) && !(unsigned int)_o__wcsicmp(ClassName, aSysshadow_0) )
  {
    v18 = 0;
    goto LABEL_19;
  }
  v67 = (struct CVisual *)*((_QWORD *)a2 + 55);
  IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v23, a2);
  v27 = CContainerVisual::RenderRecursive(v67, v25, v26);
  v6 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x709u, 0LL);
    return v6;
  }
  v28 = (CContainerVisual *)MonitorFromWindow(*((HWND *)a2 + 5), 1u);
  v65 = v28;
  if ( IsTrulyMaximized )
  {
    for ( i = 0LL; (int)i < v8; i = (unsigned int)(i + 1) )
    {
      v30 = 5 * i;
      v31 = *((_QWORD *)this + 33);
      if ( *(_BYTE *)(v31 + 40 * i + 24) && *(CContainerVisual **)(v31 + 40 * i + 32) == v28 )
      {
        _mm_lfence();
        if ( *(_QWORD *)(*((_QWORD *)this + 33) + 40 * i + 8) )
        {
          _mm_lfence();
          v32 = *(CContainerVisual ***)(*((_QWORD *)this + 33) + 40 * i + 8);
          v33 = CContainerVisual::RemoveChild(v32[3], (struct CVisual *)v32);
          if ( v33 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x716u, 0LL);
          v34 = *(CBaseObject **)(*((_QWORD *)this + 33) + 8 * v30 + 8);
          if ( v34 )
          {
            CBaseObject::Release(v34);
            *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v30 + 8) = 0LL;
          }
        }
        v35 = *(struct CVisual **)(*((_QWORD *)this + 33) + 8 * v30 + 16);
        if ( v35 )
        {
          v36 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 55), v35);
          if ( v36 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x71Cu, 0LL);
          v37 = *(CBaseObject **)(*((_QWORD *)this + 33) + 8 * v30 + 16);
          if ( v37 )
          {
            CBaseObject::Release(v37);
            *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v30 + 16) = 0LL;
          }
        }
        v38 = *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v30);
        *(_BYTE *)(v38 + 675) |= 1u;
        v39 = *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v30);
        *(_BYTE *)(v39 + 674) |= 0x80u;
        v28 = v65;
        break;
      }
    }
  }
  v69 = a2;
  v70 = 0LL;
  v71 = IsTrulyMaximized;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = v28;
  updated = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 264, &v69);
  v6 = updated;
  if ( updated < 0 )
  {
    v62 = 1833;
    goto LABEL_27;
  }
  v18 = 1;
  v64 = 1;
  v40 = *((_BYTE *)a2 + 674);
  if ( *((_DWORD *)this + 124) >= 0x1Eu )
  {
    *((_BYTE *)a2 + 675) |= 1u;
    *((_BYTE *)a2 + 674) = v40 | 0x80;
    goto LABEL_19;
  }
  *((_BYTE *)a2 + 674) = v40 & 0x7F | (*((_QWORD *)a2 + 53) != 0LL ? 0x80 : 0);
  v41 = *((_DWORD *)this + 125);
  if ( v41 >= 0xA )
    *((_BYTE *)a2 + 675) |= 1u;
  else
    *((_DWORD *)this + 125) = v41 + 1;
  if ( *((char *)a2 + 674) >= 0 )
  {
    if ( (*((_BYTE *)a2 + 675) & 1) != 0 )
    {
      v42 = v67;
LABEL_62:
      if ( *((char *)a2 + 674) < 0 )
      {
LABEL_67:
        ++*((_DWORD *)this + 124);
        goto LABEL_58;
      }
      v65 = 0LL;
      v43 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
              v76,
              &v65);
      v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(v42, 1, (struct CTopLevelWindow **)(v43 + 8));
      wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(v76);
      if ( (v6 & 0x80000000) != 0 )
      {
        v63 = 1865;
        v53 = v6;
      }
      else
      {
        inserted = CContainerVisual::RenderRecursive(v65, v44, v45);
        v6 = inserted;
        if ( inserted < 0 )
        {
          v63 = 1866;
        }
        else
        {
          inserted = CContainerVisual::InsertChildBefore(*((CContainerVisual **)this + 55), v65, 0LL);
          v6 = inserted;
          if ( inserted >= 0 )
          {
            v47 = v65;
            v65 = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 33) + 16LL) = v47;
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v65);
            goto LABEL_67;
          }
          v63 = 1867;
        }
        v53 = inserted;
      }
LABEL_77:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, v63, 0LL);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v65);
      return v6;
    }
LABEL_68:
    v65 = 0LL;
    v48 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
            v76,
            &v65);
    v42 = v67;
    v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(v67, 0, (struct CTopLevelWindow **)(v48 + 8));
    wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(v76);
    if ( (v6 & 0x80000000) != 0 )
    {
      v63 = 1855;
      v53 = v6;
      goto LABEL_77;
    }
    v51 = CContainerVisual::RenderRecursive(v65, v49, v50);
    v6 = v51;
    if ( v51 < 0 )
    {
      v63 = 1856;
    }
    else
    {
      v51 = CContainerVisual::InsertChildBefore(*((CContainerVisual **)this + 53), v65, 0LL);
      v6 = v51;
      if ( v51 >= 0 )
      {
        v52 = v65;
        v65 = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 33) + 8LL) = v52;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v65);
        goto LABEL_62;
      }
      v63 = 1857;
    }
    v53 = v51;
    goto LABEL_77;
  }
  if ( (*((_BYTE *)a2 + 675) & 1) == 0 )
    goto LABEL_68;
LABEL_58:
  updated = CLivePreview::_UpdateResources(this);
  v6 = updated;
  if ( updated < 0 )
  {
    v62 = 1887;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v62, 0LL);
    return v6;
  }
  v18 = v64;
LABEL_19:
  if ( v68 )
    *v68 = v18;
  return v6;
}
