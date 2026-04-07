/*
 * XREFs of ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020A4C
 * Callers:
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x18001EAA8 (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180015BB8 (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x1800168D0 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180021020 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18002177C (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x18002207C (-ClearAll@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x180073E6C (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ??4?$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z @ 0x1800768F8 (--4-$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z.c)
 *     ??$CountParticipatingInClone@VCSystemBackdropVisual@@VCAccent@@VCSpriteVisual@@VCLegacyNonClientBackground@@VCCanvasVisual@@@CTopLevelWindow@@CAIPEBVCSystemBackdropVisual@@PEBVCAccent@@PEBVCSpriteVisual@@PEBVCLegacyNonClientBackground@@PEBVCCanvasVisual@@@Z @ 0x18007D618 (--$CountParticipatingInClone@VCSystemBackdropVisual@@VCAccent@@VCSpriteVisual@@VCLegacyNonClient.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008C394 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800BDC34 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::InitializeVisualTreeClone(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // edi
  CMILRefCountBase **v7; // rax
  CMILRefCountBase *v8; // rdx
  CBaseObject *v9; // rcx
  __int64 v10; // rdx
  CMILRefCountBase *v11; // rcx
  __int64 v12; // rcx
  CMILRefCountBase *v13; // rcx
  __int64 v14; // rdx
  CMILRefCountBase *v15; // rcx
  const struct std::nothrow_t *v16; // rdx
  CMILRefCountBase *v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r14
  int v22; // eax
  CMILRefCountBase *v23; // r15
  CMILRefCountBase *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // cl
  struct _MARGINS *v29; // rax
  CLegacyNonClientBackground *v31; // rcx
  CBaseObject *v32; // rcx
  CBaseObject *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  CMILRefCountBase *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 (__fastcall *v45)(__int64, __int64 *); // rbx
  int v46; // eax
  int v47; // eax
  unsigned int v48; // [rsp+20h] [rbp-38h]
  __int64 v49; // [rsp+60h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 200) = *(_BYTE *)(a1 + 200) & 0xEF | (8 * (a3 & 2));
  v5 = CContainerVisual::InitializeVisualTreeClone(a1, (CContainerVisual *)a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v48 = 5472;
LABEL_54:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v48, 0LL);
    goto LABEL_31;
  }
  if ( (*(_BYTE *)(a1 + 201) & 4) != 0 )
  {
    v5 = CTopLevelWindow::SetExcludeFromDDA((CTopLevelWindow *)a2, (*(_BYTE *)(a1 + 201) & 4) != 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      v48 = 5477;
      goto LABEL_54;
    }
  }
  if ( (*(_BYTE *)(a1 + 201) & 0x20) != 0 )
    CTopLevelWindow::SetVisualProtectContent((CTopLevelWindow *)a2, (*(_BYTE *)(a1 + 201) & 0x20) != 0);
  v7 = *(CMILRefCountBase ***)(a2 + 152);
  v8 = *v7;
  if ( *(CMILRefCountBase **)(a2 + 216) != *v7 )
  {
    if ( v8 )
      CMILRefCountBase::AddRef(*v7);
    v9 = *(CBaseObject **)(a2 + 216);
    *(_QWORD *)(a2 + 216) = v8;
    if ( v9 )
      CBaseObject::Release(v9);
  }
  v10 = *(_QWORD *)(a2 + 216);
  *(_QWORD *)(a2 + 224) = **(_QWORD **)(v10 + 152);
  v11 = **(CMILRefCountBase ***)(v10 + 152);
  if ( v11 )
    CMILRefCountBase::AddRef(v11);
  v12 = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a2 + 232) = *(_QWORD *)(v12 + 208);
  v13 = *(CMILRefCountBase **)(v12 + 208);
  if ( v13 )
    CMILRefCountBase::AddRef(v13);
  v14 = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a2 + 240) = **(_QWORD **)(v14 + 152);
  v15 = **(CMILRefCountBase ***)(v14 + 152);
  if ( v15 )
    CMILRefCountBase::AddRef(v15);
  v16 = *(const struct std::nothrow_t **)(a2 + 240);
  *(_QWORD *)(a2 + 248) = **((_QWORD **)v16 + 19);
  v17 = (CMILRefCountBase *)**((_QWORD **)v16 + 19);
  if ( v17 )
    CMILRefCountBase::AddRef(v17);
  v18 = *(_QWORD *)(a2 + 248);
  v19 = *(_QWORD *)(a1 + 552);
  v20 = 8LL;
  if ( v19 && (*(_BYTE *)(v19 + 36) & 8) == 0 )
  {
    LODWORD(v21) = *(_DWORD *)(v18 + 176);
    while ( 1 )
    {
      v22 = v21;
      v21 = (unsigned int)(v21 - 1);
      if ( !v22 )
        break;
      v23 = *(CMILRefCountBase **)(*(_QWORD *)(v18 + 152) + 8 * v21);
      if ( (*(unsigned __int8 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v23 + 168LL))(v23) )
      {
        *(_QWORD *)(a2 + 552) = v23;
        CMILRefCountBase::AddRef(v23);
        break;
      }
    }
    v16 = *(const struct std::nothrow_t **)(a2 + 552);
    *(_QWORD *)(a2 + 544) = **((_QWORD **)v16 + 19);
    v24 = (CMILRefCountBase *)**((_QWORD **)v16 + 19);
    if ( v24 )
      CMILRefCountBase::AddRef(v24);
  }
  v25 = *(_QWORD *)(a1 + 520);
  if ( v25 )
  {
    if ( (*(_BYTE *)(v25 + 36) & 8) == 0 )
    {
      v37 = *(_QWORD *)(a1 + 264);
      if ( v37 )
      {
        if ( (*(_BYTE *)(v37 + 36) & 8) == 0 )
        {
          v38 = *(_QWORD *)(*(_QWORD *)(v18 + 152)
                          + 8LL
                          * (unsigned int)CTopLevelWindow::CountParticipatingInClone<CSystemBackdropVisual,CAccent,CSpriteVisual,CLegacyNonClientBackground,CCanvasVisual>(
                                            *(_QWORD *)(a1 + 280),
                                            *(_QWORD *)(a1 + 256),
                                            *(_QWORD *)(a1 + 288),
                                            *(_QWORD *)(a1 + 272),
                                            *(_QWORD *)(a1 + 296)));
          if ( v38 )
          {
            v39 = **(CMILRefCountBase ***)(v38 + 152);
            *(_QWORD *)(a2 + 520) = v39;
            if ( v39 )
            {
              CMILRefCountBase::AddRef(v39);
              v39 = (CMILRefCountBase *)(v40 + 168);
            }
            *(_QWORD *)(a2 + 528) = v39;
          }
        }
      }
    }
  }
  v26 = *(_QWORD *)(a1 + 280);
  if ( v26 && (*(_BYTE *)(v26 + 36) & 8) == 0 )
  {
    if ( *(_DWORD *)(a1 + 800) == 4 )
    {
      v34 = *(_QWORD *)(a1 + 272);
      if ( !v34 || (*(_BYTE *)(v34 + 36) & 8) != 0 )
        v35 = 0LL;
      else
        v35 = 8LL;
      v36 = *(_QWORD *)(v35 + *(_QWORD *)(v18 + 152));
    }
    else
    {
      v36 = **(_QWORD **)(v18 + 152);
    }
    Microsoft::WRL::ComPtr<CSystemBackdropVisual>::operator=(a2 + 280, v36);
  }
  v27 = *(_QWORD *)(a1 + 288);
  if ( v27 && (*(_BYTE *)(v27 + 36) & 8) == 0 )
  {
    v41 = *(_QWORD *)(a1 + 256);
    v42 = *(_QWORD *)(a1 + 280);
    if ( !v42 || (*(_BYTE *)(v42 + 36) & 8) != 0 )
      v43 = 0LL;
    else
      v43 = 8LL;
    if ( !v41 || (*(_BYTE *)(v41 + 36) & 8) != 0 )
      v20 = 0LL;
    Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(
      a2 + 288,
      *(_QWORD *)(v20 + *(_QWORD *)(v18 + 152) + v43));
    v49 = 0LL;
    v44 = *(_QWORD *)(*(_QWORD *)(a1 + 288) + 144LL);
    v45 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v49);
    v46 = v45(v44, &v49);
    v6 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x15BAu, 0LL);
    }
    else
    {
      v47 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a2 + 288) + 144LL) + 56LL))(
              *(_QWORD *)(*(_QWORD *)(a2 + 288) + 144LL),
              v49);
      v6 = v47;
      if ( v47 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v49);
        goto LABEL_29;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x15BBu, 0LL);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v49);
    goto LABEL_31;
  }
LABEL_29:
  *(_OWORD *)(a2 + 588) = *(_OWORD *)(a1 + 588);
  *(_OWORD *)(a2 + 604) = *(_OWORD *)(a1 + 604);
  *(_OWORD *)(a2 + 620) = *(_OWORD *)(a1 + 620);
  *(_OWORD *)(a2 + 636) = *(_OWORD *)(a1 + 636);
  *(_OWORD *)(a2 + 652) = *(_OWORD *)(a1 + 652);
  *(_BYTE *)(a2 + 200) ^= (*(_BYTE *)(a1 + 200) ^ *(_BYTE *)(a2 + 200)) & 4;
  v28 = *(_BYTE *)(a2 + 201) ^ (*(_BYTE *)(a1 + 201) ^ *(_BYTE *)(a2 + 201)) & 1;
  *(_BYTE *)(a2 + 201) = v28;
  *(_DWORD *)(a2 + 800) = *(_DWORD *)(a1 + 800);
  *(_BYTE *)(a2 + 201) = *(_BYTE *)(a1 + 201) ^ (*(_BYTE *)(a1 + 201) ^ v28) & 0x7F;
  v29 = (struct _MARGINS *)operator new[](0x10uLL, v16);
  *(_QWORD *)(a2 + 672) = v29;
  if ( v29 )
  {
    CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)a1, v29);
    if ( (*(_BYTE *)(a1 + 200) & 0x10) == 0 )
    {
      CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(
        (CTopLevelWindow *)a2,
        *(struct CWindowData **)(a1 + 712));
      v31 = *(CLegacyNonClientBackground **)(a1 + 272);
      if ( v31 )
        CLegacyNonClientBackground::ClearAll(v31);
      CTopLevelWindow::SetShadowOpacity((CTopLevelWindow *)a2, 0.0);
      v32 = *(CBaseObject **)(a1 + 568);
      if ( v32 )
      {
        CBaseObject::Release(v32);
        *(_QWORD *)(a1 + 568) = 0LL;
      }
      v33 = *(CBaseObject **)(a1 + 576);
      if ( v33 )
      {
        CBaseObject::Release(v33);
        *(_QWORD *)(a1 + 576) = 0LL;
      }
      CVisual::SetDirtyFlags((CVisual *)a1, 0x4000);
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x15CCu, 0LL);
  }
LABEL_31:
  *(_BYTE *)(a1 + 200) &= ~0x10u;
  return v6;
}
