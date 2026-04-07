/*
 * XREFs of ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023778
 * Callers:
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x1800235C0 (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$SetBrush@PEAUICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18000D204 (--$SetBrush@PEAUICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionB.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x1800141D8 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180029CF4 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??$GetBrush@UICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18005013C (--$GetBrush@UICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionB.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x18005EA38 (-ClearAll@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x180062B84 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ??4?$ComPtr@VCWindowBackgroundTreatmentVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatmentVisual@@@Z @ 0x180066D98 (--4-$ComPtr@VCWindowBackgroundTreatmentVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackground.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18006A884 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ??$CountParticipatingInClone@VCSystemBackdropVisual@@VCAccent@@VCSpriteVisual@@VCLegacyNonClientBackground@@VCSolidRectangleVisual@@@CTopLevelWindow@@CAIPEBVCSystemBackdropVisual@@PEBVCAccent@@PEBVCSpriteVisual@@PEBVCLegacyNonClientBackground@@PEBVCSolidRectangleVisual@@@Z @ 0x180076A5C (--$CountParticipatingInClone@VCSystemBackdropVisual@@VCAccent@@VCSpriteVisual@@VCLegacyNonClient.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18007B4B0 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x18009E610 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::InitializeVisualTreeClone(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rdx
  CBaseObject *v8; // rcx
  __int64 v9; // rcx
  CBaseObject *v10; // rcx
  __int64 v11; // rdx
  CBaseObject *v12; // rcx
  __int64 v13; // rdx
  CBaseObject *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  int v19; // eax
  CBaseObject *v20; // r12
  __int64 v21; // rdx
  CBaseObject *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // cl
  struct _MARGINS *v27; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  CBaseObject **v31; // rax
  CBaseObject *v32; // rcx
  CLegacyNonClientBackground *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  int *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  unsigned int v46; // [rsp+20h] [rbp-38h]
  __int64 v47; // [rsp+60h] [rbp+8h] BYREF
  int v48; // [rsp+70h] [rbp+18h] BYREF

  *(_BYTE *)(a1 + 184) &= ~0x10u;
  *(_BYTE *)(a1 + 184) |= 8 * (a3 & 2);
  v5 = CContainerVisual::InitializeVisualTreeClone(a1, (CContainerVisual *)a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v46 = 5274;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v46, 0LL);
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(a1 + 185) & 2) != 0 )
  {
    v5 = CTopLevelWindow::SetExcludeFromDDA((CTopLevelWindow *)a2, (*(_BYTE *)(a1 + 185) & 2) != 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      v46 = 5279;
      goto LABEL_28;
    }
  }
  if ( (*(_BYTE *)(a1 + 185) & 0x10) != 0 )
    CTopLevelWindow::SetVisualProtectContent((CTopLevelWindow *)a2, (*(_BYTE *)(a1 + 185) & 0x10) != 0);
  Microsoft::WRL::ComPtr<CWindowBackgroundTreatmentVisual>::operator=(a2 + 200, **(_QWORD **)(a2 + 144));
  v7 = *(_QWORD *)(a2 + 200);
  *(_QWORD *)(a2 + 208) = **(_QWORD **)(v7 + 144);
  v8 = **(CBaseObject ***)(v7 + 144);
  if ( v8 )
    CBaseObject::AddRef(v8);
  v9 = *(_QWORD *)(a2 + 208);
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(v9 + 216);
  v10 = *(CBaseObject **)(v9 + 216);
  if ( v10 )
    CBaseObject::AddRef(v10);
  v11 = *(_QWORD *)(a2 + 216);
  *(_QWORD *)(a2 + 224) = **(_QWORD **)(v11 + 144);
  v12 = **(CBaseObject ***)(v11 + 144);
  if ( v12 )
    CBaseObject::AddRef(v12);
  v13 = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a2 + 232) = **(_QWORD **)(v13 + 144);
  v14 = **(CBaseObject ***)(v13 + 144);
  if ( v14 )
    CBaseObject::AddRef(v14);
  v15 = *(_QWORD *)(a2 + 232);
  v16 = *(_QWORD *)(a1 + 536);
  v17 = 8LL;
  if ( v16 && (*(_BYTE *)(v16 + 36) & 8) == 0 )
  {
    LODWORD(v18) = *(_DWORD *)(v15 + 168);
    while ( 1 )
    {
      v19 = v18;
      v18 = (unsigned int)(v18 - 1);
      if ( !v19 )
        break;
      v20 = *(CBaseObject **)(*(_QWORD *)(v15 + 144) + 8 * v18);
      if ( (*(unsigned __int8 (__fastcall **)(CBaseObject *))(*(_QWORD *)v20 + 152LL))(v20) )
      {
        *(_QWORD *)(a2 + 536) = v20;
        CBaseObject::AddRef(v20);
        break;
      }
    }
    v21 = *(_QWORD *)(a2 + 536);
    *(_QWORD *)(a2 + 528) = **(_QWORD **)(v21 + 144);
    v22 = **(CBaseObject ***)(v21 + 144);
    if ( v22 )
      CBaseObject::AddRef(v22);
  }
  v23 = *(_QWORD *)(a1 + 504);
  if ( v23 )
  {
    if ( (*(_BYTE *)(v23 + 36) & 8) == 0 )
    {
      v29 = *(_QWORD *)(a1 + 248);
      if ( v29 )
      {
        if ( (*(_BYTE *)(v29 + 36) & 8) == 0 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(v15 + 144)
                          + 8LL
                          * (unsigned int)CTopLevelWindow::CountParticipatingInClone<CSystemBackdropVisual,CAccent,CSpriteVisual,CLegacyNonClientBackground,CSolidRectangleVisual>(
                                            *(_QWORD *)(a1 + 264),
                                            *(_QWORD *)(a1 + 240),
                                            *(_QWORD *)(a1 + 272),
                                            *(_QWORD *)(a1 + 256),
                                            *(_QWORD *)(a1 + 280)));
          if ( v30 )
          {
            v31 = *(CBaseObject ***)(v30 + 144);
            v32 = *v31;
            *(_QWORD *)(a2 + 504) = *v31;
            if ( v32 )
            {
              CBaseObject::AddRef(v32);
              v32 = (CBaseObject *)(v38 + 184);
            }
            *(_QWORD *)(a2 + 512) = v32;
          }
        }
      }
    }
  }
  v24 = *(_QWORD *)(a1 + 264);
  if ( v24 && (*(_BYTE *)(v24 + 36) & 8) == 0 )
  {
    if ( *(_DWORD *)(a1 + 760) == 4 )
    {
      v39 = *(_QWORD *)(a1 + 256);
      if ( !v39 || (*(_BYTE *)(v39 + 36) & 8) != 0 )
        v40 = 0LL;
      else
        v40 = 8LL;
      v37 = *(_QWORD *)(*(_QWORD *)(v15 + 144) + v40);
    }
    else
    {
      v37 = **(_QWORD **)(v15 + 144);
    }
    Microsoft::WRL::ComPtr<CWindowBackgroundTreatmentVisual>::operator=(a2 + 264, v37);
  }
  v25 = *(_QWORD *)(a1 + 272);
  if ( v25 && (*(_BYTE *)(v25 + 36) & 8) == 0 )
  {
    v41 = *(_QWORD *)(a1 + 240);
    v42 = *(_QWORD *)(a1 + 264);
    if ( !v42 || (*(_BYTE *)(v42 + 36) & 8) != 0 )
      v43 = 0LL;
    else
      v43 = 8LL;
    if ( !v41 || (*(_BYTE *)(v41 + 36) & 8) != 0 )
      v17 = 0LL;
    Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(
      a2 + 272,
      *(_QWORD *)(v17 + *(_QWORD *)(v15 + 144) + v43));
    v47 = 0LL;
    v44 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionBrush>(*(_QWORD *)(a1 + 272), &v47);
    v6 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x14F4u, 0LL);
    }
    else
    {
      v45 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionBrush *>(*(_QWORD *)(a2 + 272));
      v6 = v45;
      if ( v45 >= 0 )
      {
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v47);
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x14F5u, 0LL);
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v47);
    goto LABEL_26;
  }
LABEL_24:
  *(_OWORD *)(a2 + 572) = *(_OWORD *)(a1 + 572);
  *(_OWORD *)(a2 + 588) = *(_OWORD *)(a1 + 588);
  *(_OWORD *)(a2 + 604) = *(_OWORD *)(a1 + 604);
  *(_OWORD *)(a2 + 620) = *(_OWORD *)(a1 + 620);
  *(_OWORD *)(a2 + 636) = *(_OWORD *)(a1 + 636);
  *(_BYTE *)(a2 + 184) ^= (*(_BYTE *)(a1 + 184) ^ *(_BYTE *)(a2 + 184)) & 4;
  v26 = *(_BYTE *)(a2 + 185) ^ (*(_BYTE *)(a1 + 185) ^ *(_BYTE *)(a2 + 185)) & 1;
  *(_BYTE *)(a2 + 185) = v26;
  *(_DWORD *)(a2 + 760) = *(_DWORD *)(a1 + 760);
  *(_BYTE *)(a2 + 185) = v26 ^ (*(_BYTE *)(a1 + 185) ^ v26) & 0x40;
  v27 = (struct _MARGINS *)operator new(0x10uLL);
  *(_QWORD *)(a2 + 656) = v27;
  if ( v27 )
  {
    CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)a1, v27);
    if ( (*(_BYTE *)(a1 + 184) & 0x10) == 0 )
    {
      CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(
        (CTopLevelWindow *)a2,
        *(struct CWindowData **)(a1 + 696));
      v33 = *(CLegacyNonClientBackground **)(a1 + 256);
      if ( v33 )
        CLegacyNonClientBackground::ClearAll(v33);
      CTopLevelWindow::SetShadowOpacity((CTopLevelWindow *)a2, 0.0);
      v34 = *(CBaseObject **)(a1 + 552);
      if ( v34 )
      {
        CBaseObject::Release(v34);
        *(_QWORD *)(a1 + 552) = 0LL;
      }
      v35 = *(CBaseObject **)(a1 + 560);
      if ( v35 )
      {
        CBaseObject::Release(v35);
        *(_QWORD *)(a1 + 560) = 0LL;
      }
      v36 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v48);
      CVisual::SetDirtyFlags((CVisual *)a1, *v36);
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1506u, 0LL);
  }
LABEL_26:
  *(_BYTE *)(a1 + 184) &= ~0x10u;
  return v6;
}
