/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001A06C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18003BE10 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180005A98 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x180013144 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18003A3B8 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18003AC60 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180060188 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18007C400 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-Reg.c)
 *     ??1?$out_param_t@V?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ @ 0x18007CD90 (--1-$out_param_t@V-$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z @ 0x18008CB58 (-RemoveAt@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800B92FC (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800B97C8 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800B97FC (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  unsigned int v6; // ebx
  int v7; // r12d
  int v8; // r13d
  CLivePreview *v9; // rcx
  bool IsTrulyMaximized; // bl
  HMONITOR v11; // r12
  __int64 i; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  CContainerVisual **v15; // rdx
  int v16; // eax
  CBaseObject *v17; // rcx
  struct CVisual *v18; // rdx
  int v19; // eax
  CBaseObject *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  char v24; // al
  char v25; // dl
  unsigned int v26; // eax
  __int64 v27; // rax
  CTopLevelWindow *v28; // r12
  int inserted; // eax
  struct CVisual *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  struct CVisual *v33; // rcx
  __int64 v34; // r12
  _QWORD *v35; // rcx
  CContainerVisual **v36; // rbx
  int v37; // eax
  CBaseObject *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  _QWORD *v41; // r13
  __int64 v42; // r12
  CContainerVisual **v43; // rdx
  int v44; // eax
  CBaseObject *v45; // rcx
  CContainerVisual **v46; // rdx
  int v47; // eax
  CBaseObject *v48; // rcx
  CTopLevelWindow *v49; // rcx
  int v50; // eax
  int v51; // r12d
  _QWORD *v52; // r8
  __int64 v53; // r13
  int v54; // eax
  int updated; // eax
  char v57; // [rsp+30h] [rbp-D0h]
  bool v58; // [rsp+30h] [rbp-D0h]
  char v59; // [rsp+31h] [rbp-CFh]
  struct CVisual *v60; // [rsp+38h] [rbp-C8h] BYREF
  CTopLevelWindow *v61; // [rsp+40h] [rbp-C0h]
  bool *v62; // [rsp+48h] [rbp-B8h]
  struct CWindowData *v63; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v64; // [rsp+58h] [rbp-A8h]
  bool v65; // [rsp+68h] [rbp-98h]
  int v66; // [rsp+69h] [rbp-97h]
  __int16 v67; // [rsp+6Dh] [rbp-93h]
  char v68; // [rsp+6Fh] [rbp-91h]
  HMONITOR v69; // [rsp+70h] [rbp-90h]
  _BYTE v70[24]; // [rsp+78h] [rbp-88h] BYREF
  WCHAR ClassName[264]; // [rsp+90h] [rbp-70h] BYREF

  v62 = a3;
  v6 = 0;
  v7 = *((_DWORD *)this + 66);
  v8 = *((_DWORD *)this + 58);
  LODWORD(v60) = v8;
  if ( v7 <= 0 && v8 <= 0 )
    return v6;
  v57 = 0;
  v59 = 0;
  if ( a4 || !CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    v34 = (unsigned int)(v7 - 1);
    v35 = (_QWORD *)((char *)this + 240);
    while ( (int)v34 >= 0 )
    {
      if ( *(struct CWindowData **)(*v35 + 48 * v34 + 8) == a2 )
      {
        _mm_lfence();
        v36 = *(CContainerVisual ***)(*v35 + 48 * v34);
        CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)v36);
        v37 = CContainerVisual::RemoveChild(v36[3], (struct CVisual *)v36);
        if ( v37 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x631u, 0LL);
        v38 = *(CBaseObject **)(*((_QWORD *)this + 30) + 48 * v34 + 16);
        if ( v38 )
        {
          CBaseObject::Release(v38);
          *(_QWORD *)(*((_QWORD *)this + 30) + 48 * v34 + 16) = 0LL;
        }
        v39 = DynArray<LivePreviewWindow,0>::RemoveAt((char *)this + 240, (unsigned int)v34);
        v6 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x634u, 0LL);
          return v6;
        }
        break;
      }
      v34 = (unsigned int)(v34 - 1);
    }
    v40 = (unsigned int)((_DWORD)v60 - 1);
    v41 = (_QWORD *)((char *)this + 208);
    while ( 1 )
    {
      LODWORD(v60) = v40;
      if ( (int)v40 < 0 )
        break;
      v42 = 5 * v40;
      if ( *(struct CWindowData **)(*v41 + 40 * v40) == a2 )
      {
        if ( *(_QWORD *)(*v41 + 40 * v40 + 8) )
        {
          _mm_lfence();
          v43 = *(CContainerVisual ***)(*v41 + 40 * v40 + 8);
          v44 = CContainerVisual::RemoveChild(v43[3], (struct CVisual *)v43);
          if ( v44 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x640u, 0LL);
          v45 = *(CBaseObject **)(*v41 + 8 * v42 + 8);
          if ( v45 )
          {
            CBaseObject::Release(v45);
            *(_QWORD *)(*v41 + 8 * v42 + 8) = 0LL;
          }
        }
        if ( *(_QWORD *)(*v41 + 8 * v42 + 16) )
        {
          _mm_lfence();
          v46 = *(CContainerVisual ***)(*v41 + 8 * v42 + 16);
          v47 = CContainerVisual::RemoveChild(v46[3], (struct CVisual *)v46);
          if ( v47 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x646u, 0LL);
          v48 = *(CBaseObject **)(*v41 + 8 * v42 + 16);
          if ( v48 )
          {
            CBaseObject::Release(v48);
            *(_QWORD *)(*v41 + 8 * v42 + 16) = 0LL;
          }
        }
        v49 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
        if ( v49 )
          CTopLevelWindow::StopLivePreviewAnimation(v49);
        v50 = DynArray<CPenContact,0>::RemoveAt((__int64 *)this + 26, (unsigned int)v60);
        v6 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x64Fu, 0LL);
          return v6;
        }
        v59 = 1;
        break;
      }
      v40 = (unsigned int)(v40 - 1);
    }
    v51 = *((_DWORD *)this + 80) - 1;
    if ( v51 >= 0 )
    {
      v52 = (_QWORD *)((char *)this + 296);
      v53 = 16LL * v51;
      do
      {
        v61 = *(CTopLevelWindow **)(*v52 + v53);
        if ( CTopLevelWindow::GetWindowData(v61) == a2 )
        {
          DynArray<CIconicBitmapPending,0>::RemoveAt(v52, (unsigned int)v51);
          v54 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 42), v61);
          v6 = v54;
          if ( v54 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x65Du, 0LL);
          v52 = (_QWORD *)((char *)this + 296);
        }
        v53 -= 16LL;
        --v51;
      }
      while ( v51 >= 0 );
    }
    if ( v59 )
      goto LABEL_88;
    v24 = 0;
  }
  else if ( !*((_BYTE *)this + 184)
         || CLivePreview::_IsInLivePreview(this, a2)
         || GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) && !(unsigned int)_o__wcsicmp(ClassName, aSysshadow_0) )
  {
    v24 = 0;
  }
  else
  {
    v61 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v9, a2);
    v58 = IsTrulyMaximized;
    CContainerVisual::RenderRecursive(v61);
    v11 = MonitorFromWindow(*((HWND *)a2 + 5), 1u);
    if ( IsTrulyMaximized )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (int)i >= v8 )
        {
          IsTrulyMaximized = v58;
          goto LABEL_27;
        }
        v13 = 5 * i;
        v14 = *((_QWORD *)this + 26);
        if ( *(_BYTE *)(v14 + 40 * i + 24) )
        {
          if ( *(HMONITOR *)(v14 + 40 * i + 32) == v11 )
            break;
        }
      }
      _mm_lfence();
      if ( *(_QWORD *)(*((_QWORD *)this + 26) + 40 * i + 8) )
      {
        _mm_lfence();
        v15 = *(CContainerVisual ***)(*((_QWORD *)this + 26) + 40 * i + 8);
        v16 = CContainerVisual::RemoveChild(v15[3], (struct CVisual *)v15);
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x67Eu, 0LL);
        v17 = *(CBaseObject **)(*((_QWORD *)this + 26) + 8 * v13 + 8);
        if ( v17 )
        {
          CBaseObject::Release(v17);
          *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v13 + 8) = 0LL;
        }
      }
      v18 = *(struct CVisual **)(*((_QWORD *)this + 26) + 8 * v13 + 16);
      if ( v18 )
      {
        v19 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 45), v18);
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x684u, 0LL);
        v20 = *(CBaseObject **)(*((_QWORD *)this + 26) + 8 * v13 + 16);
        if ( v20 )
        {
          CBaseObject::Release(v20);
          *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v13 + 16) = 0LL;
        }
      }
      v21 = *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v13);
      *(_BYTE *)(v21 + 739) |= 1u;
      v22 = *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v13);
      *(_BYTE *)(v22 + 738) |= 0x80u;
      IsTrulyMaximized = v58;
    }
LABEL_27:
    v63 = a2;
    v64 = 0LL;
    v65 = IsTrulyMaximized;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v69 = v11;
    v23 = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 208, &v63);
    v6 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x691u, 0LL);
      return v6;
    }
    v24 = 1;
    v57 = 1;
    v25 = *((_BYTE *)a2 + 738);
    if ( *((_DWORD *)this + 104) < 0x1Eu )
    {
      *((_BYTE *)a2 + 738) = v25 & 0x7F | (*((_QWORD *)a2 + 53) != 0LL ? 0x80 : 0);
      v26 = *((_DWORD *)this + 105);
      if ( v26 >= 0xA )
        *((_BYTE *)a2 + 739) |= 1u;
      else
        *((_DWORD *)this + 105) = v26 + 1;
      if ( *((char *)a2 + 738) >= 0 )
      {
        if ( (*((_BYTE *)a2 + 739) & 1) != 0 )
        {
          v28 = v61;
          goto LABEL_43;
        }
      }
      else if ( (*((_BYTE *)a2 + 739) & 1) != 0 )
      {
        goto LABEL_88;
      }
      v60 = 0LL;
      v27 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
              v70,
              &v60);
      v28 = v61;
      v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(v61, 0, (struct CTopLevelWindow **)(v27 + 8));
      wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(v70);
      if ( (v6 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6A7u, 0LL);
        goto LABEL_41;
      }
      CContainerVisual::RenderRecursive(v60);
      inserted = CContainerVisual::InsertChildBefore(*((CContainerVisual **)this + 43), v60, 0LL);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x6A9u, 0LL);
        goto LABEL_41;
      }
      v30 = v60;
      v60 = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 26) + 8LL) = v30;
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v60);
LABEL_43:
      if ( *((char *)a2 + 738) < 0 )
      {
LABEL_47:
        ++*((_DWORD *)this + 104);
LABEL_88:
        updated = CLivePreview::_UpdateResources((LPARAM)this);
        v6 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x6C7u, 0LL);
          return v6;
        }
        v24 = v57;
        goto LABEL_94;
      }
      v60 = 0LL;
      v31 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
              v70,
              &v60);
      v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(v28, 1, (struct CTopLevelWindow **)(v31 + 8));
      wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(v70);
      if ( (v6 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6B1u, 0LL);
      }
      else
      {
        CContainerVisual::RenderRecursive(v60);
        v32 = CContainerVisual::InsertChildBefore(*((CContainerVisual **)this + 45), v60, 0LL);
        v6 = v32;
        if ( v32 >= 0 )
        {
          v33 = v60;
          v60 = 0LL;
          *(_QWORD *)(*((_QWORD *)this + 26) + 16LL) = v33;
          Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v60);
          goto LABEL_47;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x6B3u, 0LL);
      }
LABEL_41:
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v60);
      return v6;
    }
    *((_BYTE *)a2 + 739) |= 1u;
    *((_BYTE *)a2 + 738) = v25 | 0x80;
  }
LABEL_94:
  if ( v62 )
    *v62 = v24;
  return v6;
}
