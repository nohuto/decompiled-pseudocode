/*
 * XREFs of ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868
 * Callers:
 *     ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x140050D6C (-CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051528 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1400533D8 (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ??0CPropertySetMarshaler@DirectComposition@@QEAA@XZ @ 0x140053EE0 (--0CPropertySetMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053F20 (--0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140053F68 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CGenericMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14005402C (--0CGenericMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054064 (--0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1400540AC (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400541E4 (--0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054230 (--0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CDropShadowMarshaler@DirectComposition@@QEAA@XZ @ 0x1400546D0 (--0CDropShadowMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x14014C258 (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x140157A4C (--0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x140198138 (--0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ @ 0x14019E9D0 (--0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ @ 0x14019F6C4 (--0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x14019FA4C (--0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0?$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@$0BHJ@@DirectComposition@@QEAA@XZ @ 0x140228400 (--0-$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@$0BHJ@.c)
 *     ??0CCompositionSurfaceBitmapMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140228418 (--0CCompositionSurfaceBitmapMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreatePrivateMarshaler(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  int PrivateMarshaler; // esi
  __int64 v7; // rax
  _QWORD *v8; // rbx
  void **v9; // rax
  DirectComposition::CPropertySetMarshaler *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  DirectComposition::CVisualMarshaler *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  DirectComposition::CInteractionMarshaler *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rbx
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  DirectComposition::CDropShadowMarshaler *v58; // rax
  __int64 v59; // rax
  DirectComposition::CInteractionTrackerMarshaler *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  bool v64; // zf
  __int64 v65; // rax
  __int64 v66; // rax
  DirectComposition::CCaptureControllerMarshaler *v67; // rax
  bool v68; // zf
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  DirectComposition::CHolographicViewerMarshaler *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  DirectComposition::CNaturalAnimationMarshaler *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  DirectComposition::CProjectedShadowSceneMarshaler *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  _QWORD *v121; // [rsp+58h] [rbp+20h] BYREF

  v121 = 0LL;
  PrivateMarshaler = 0;
  if ( a2 > 0x91 )
  {
    if ( a2 <= 0xA9 )
    {
      if ( a2 == 169 )
      {
        v114 = DirectComposition::Memory::AllocateAndClear_0(0xB8uLL, 1701200708LL, 1);
        v8 = (_QWORD *)v114;
        if ( v114 )
        {
          DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v114, 169LL);
          v9 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      }
      if ( a2 <= 0x9F )
      {
        switch ( a2 )
        {
          case 0x9Fu:
            goto LABEL_90;
          case 0x98u:
            v112 = DirectComposition::Memory::AllocateAndClear_0(0x60uLL, 1852654404LL, 1);
            v8 = (_QWORD *)v112;
            if ( v112 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v112, 152LL);
              v9 = &DirectComposition::CSceneSurfaceMaterialInputMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0x9Au:
            v111 = DirectComposition::Memory::AllocateAndClear_0(0x88uLL, 1701200708LL, 1);
            v8 = (_QWORD *)v111;
            if ( v111 )
            {
              DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v111, 154LL);
              v9 = &DirectComposition::CShadowEffectMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0x9Bu:
            v31 = DirectComposition::Memory::AllocateAndClear_0(0x190uLL, 1752384324LL, 1);
            v8 = (_QWORD *)v31;
            if ( v31 )
            {
              DirectComposition::CVisualMarshaler::CVisualMarshaler(v31, 155LL);
              v9 = &DirectComposition::CShapeVisualMarshaler::`vftable';
              *((_DWORD *)v8 + 98) = 0;
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0x9Cu:
            v47 = DirectComposition::Memory::AllocateAndClear_0(0x48uLL, 1936933700LL, 1);
            v8 = (_QWORD *)v47;
            if ( v47 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v47, 156LL);
              v9 = &DirectComposition::CSharedSectionMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0x9Eu:
            v110 = DirectComposition::Memory::AllocateAndClear_0(0x48uLL, 1736065860LL, 1);
            v8 = (_QWORD *)v110;
            if ( v110 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v110, 158LL);
              v9 = &DirectComposition::CSharedSectionWrapperMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0xA1u:
            v113 = DirectComposition::Memory::AllocateAndClear_0(0x90uLL, 1634943812LL, 1);
            v8 = (_QWORD *)v113;
            if ( v113 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v113, 161LL);
              v9 = &DirectComposition::CSnapshotMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0xA2u:
            goto LABEL_90;
          case 0xA3u:
            v29 = DirectComposition::Memory::AllocateAndClear_0(0x88uLL, 1936671556LL, 1);
            v8 = (_QWORD *)v29;
            if ( v29 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v29, 163LL);
              v9 = &DirectComposition::CSpriteShapeMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0xA4u:
            v12 = DirectComposition::Memory::AllocateAndClear_0(0x188uLL, 1987265348LL, 1);
            v8 = (_QWORD *)v12;
            if ( v12 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v12, 164LL);
              DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>(v8 + 39);
              DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>(v8 + 42);
              v9 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
              *((_DWORD *)v8 + 90) = 0;
              *((_DWORD *)v8 + 96) = 0;
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0xA7u:
            v19 = DirectComposition::Memory::AllocateAndClear_0(0x90uLL, 1936343876LL, 1);
            v8 = (_QWORD *)v19;
            if ( v19 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v19, 167LL);
              v9 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
        }
      }
      goto LABEL_26;
    }
    if ( a2 > 0xB9 )
    {
      switch ( a2 )
      {
        case 0xBBu:
          v48 = DirectComposition::Memory::AllocateAndClear_0(0x40uLL, 1718764356LL, 1);
          v8 = (_QWORD *)v48;
          if ( v48 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v48, 187LL);
            v9 = &DirectComposition::CVisualReferenceControllerMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0xBCu:
          v36 = DirectComposition::Memory::AllocateAndClear_0(0x60uLL, 1936474948LL, 1);
          v8 = (_QWORD *)v36;
          if ( v36 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v36, 188LL);
            v9 = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0xBDu:
          v57 = DirectComposition::Memory::AllocateAndClear_0(0x48uLL, 2003452740LL, 1);
          v8 = (_QWORD *)v57;
          if ( v57 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v57, 189LL);
            v9 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0xBEu:
          v34 = DirectComposition::Memory::AllocateAndClear_0(0x228uLL, 1853309764LL, 1);
          v8 = (_QWORD *)v34;
          if ( v34 )
          {
            DirectComposition::CVisualMarshaler::CVisualMarshaler(v34, 190LL);
            v9 = &DirectComposition::CWindowNodeMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0xBFu:
          v119 = DirectComposition::Memory::AllocateAndClear_0(0x50uLL, 1937326916LL, 1);
          v8 = (_QWORD *)v119;
          if ( v119 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v119, 191LL);
            v9 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
      }
      goto LABEL_26;
    }
    switch ( a2 )
    {
      case 0xB9u:
        goto LABEL_90;
      case 0xB2u:
        v118 = DirectComposition::Memory::AllocateAndClear_0(0x98uLL, 1701200708LL, 1);
        v8 = (_QWORD *)v118;
        if ( v118 )
        {
          DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v118, 178LL);
          v9 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      case 0xB4u:
        v117 = DirectComposition::Memory::AllocateAndClear_0(0x58uLL, 1651917636LL, 1);
        v8 = (_QWORD *)v117;
        if ( v117 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v117, 180LL);
          v9 = &DirectComposition::CViewBoxMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      case 0xB5u:
        v116 = DirectComposition::Memory::AllocateAndClear_0(0xC8uLL, 1836467012LL, 1);
        v8 = (_QWORD *)v116;
        if ( v116 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v116, 181LL);
          v9 = &DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
    }
    if ( a2 != 182 )
    {
      if ( a2 == 184 )
      {
        v115 = DirectComposition::Memory::AllocateAndClear_0(0x70uLL, 1920353092LL, 1);
        v8 = (_QWORD *)v115;
        if ( v115 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v115, 184LL);
          v9 = &DirectComposition::CVisualCaptureMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      }
      goto LABEL_26;
    }
    v13 = (DirectComposition::CVisualMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                   0x170uLL,
                                                   1769358148LL,
                                                   1);
    if ( !v13 )
      goto LABEL_69;
    v11 = DirectComposition::CVisualMarshaler::CVisualMarshaler(v13);
LABEL_35:
    v8 = (_QWORD *)v11;
    goto LABEL_36;
  }
  if ( a2 == 145 )
  {
    v109 = DirectComposition::Memory::AllocateAndClear_0(0x58uLL, 1752843076LL, 1);
    v8 = (_QWORD *)v109;
    if ( v109 )
    {
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v109, 145LL);
      v9 = &DirectComposition::CSceneMeshRendererComponentMarshaler::`vftable';
      goto LABEL_46;
    }
    goto LABEL_69;
  }
  if ( a2 > 0x4C )
  {
    if ( a2 <= 0x68 )
    {
      if ( a2 == 104 )
      {
        v55 = DirectComposition::Memory::AllocateAndClear_0(0x120uLL, 1768768324LL, 1);
        v8 = (_QWORD *)v55;
        if ( v55 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v55, 104LL);
          *((_BYTE *)v8 + 108) &= 0xF8u;
          *v8 = &DirectComposition::CManipulationMarshaler::`vftable';
          v8[14] = 0LL;
          *((_DWORD *)v8 + 30) = 0;
          v8[16] = 0LL;
          v8[17] = 0LL;
          goto LABEL_36;
        }
        goto LABEL_69;
      }
      if ( a2 <= 0x5B )
      {
        if ( a2 == 91 )
        {
          v14 = DirectComposition::Memory::AllocateAndClear_0(0x130uLL, 1718305604LL, 1);
          v8 = (_QWORD *)v14;
          if ( v14 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v14, 91LL);
            *v8 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
            *((_DWORD *)v8 + 64) = 1065353216;
            *((_DWORD *)v8 + 65) = 1065353216;
            goto LABEL_36;
          }
          goto LABEL_69;
        }
        if ( a2 > 0x55 )
        {
          switch ( a2 )
          {
            case 'V':
              v94 = DirectComposition::Memory::AllocateAndClear_0(0x98uLL, 1634288452LL, 1);
              v8 = (_QWORD *)v94;
              if ( v94 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v94, 86LL);
                v9 = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
                goto LABEL_46;
              }
              break;
            case 'W':
              v93 = DirectComposition::Memory::AllocateAndClear_0(0xA0uLL, 1802060612LL, 1);
              v8 = (_QWORD *)v93;
              if ( v93 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v93, 87LL);
                *v8 = &DirectComposition::CInkMarshaler::`vftable';
                *((_BYTE *)v8 + 120) = 1;
                v8[18] = 36LL;
                goto LABEL_36;
              }
              break;
            case 'X':
              v38 = (DirectComposition::CInteractionMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                                  0x150uLL,
                                                                  1869169476LL,
                                                                  1);
              if ( v38 )
              {
                v11 = DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v38);
                goto LABEL_35;
              }
              break;
            case 'Y':
              v60 = (DirectComposition::CInteractionTrackerMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                                         0x1D0uLL,
                                                                         1919501124LL,
                                                                         1);
              if ( v60 )
              {
                v11 = DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(v60);
                goto LABEL_35;
              }
              break;
            default:
              v92 = (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                                                       0x70uLL,
                                                                                       1936278340LL,
                                                                                       1);
              if ( v92 )
              {
                v11 = DirectComposition::CInteractionTrackerBindingManagerMarshaler::CInteractionTrackerBindingManagerMarshaler(v92);
                goto LABEL_35;
              }
              break;
          }
          goto LABEL_69;
        }
        switch ( a2 )
        {
          case 'U':
            goto LABEL_90;
          case 'M':
            v91 = DirectComposition::Memory::AllocateAndClear_0(0x68uLL, 1701331780LL, 1);
            v8 = (_QWORD *)v91;
            if ( !v91 )
              goto LABEL_69;
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v91, 77LL);
            v9 = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
            break;
          case 'O':
            v90 = DirectComposition::Memory::AllocateAndClear_0(0x60uLL, 1768440644LL, 1);
            v8 = (_QWORD *)v90;
            if ( !v90 )
              goto LABEL_69;
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v90, 79LL);
            v9 = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
            break;
          case 'P':
            v89 = (DirectComposition::CHolographicViewerMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                                      0x88uLL,
                                                                      2020098884LL,
                                                                      1);
            if ( v89 )
            {
              v11 = DirectComposition::CHolographicViewerMarshaler::CHolographicViewerMarshaler(v89);
              goto LABEL_35;
            }
            goto LABEL_69;
          case 'Q':
            v88 = DirectComposition::Memory::AllocateAndClear_0(0x38uLL, 1885881156LL, 1);
            v8 = (_QWORD *)v88;
            if ( v88 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v88, 81LL);
              v9 = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          default:
            v20 = a2 - 82;
            if ( a2 == 82 )
            {
              v87 = DirectComposition::Memory::AllocateAndClear_0(0x78uLL, 1701200708LL, 1);
              v8 = (_QWORD *)v87;
              if ( v87 )
              {
                DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v87, 82LL);
                v9 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
                goto LABEL_46;
              }
              goto LABEL_69;
            }
            goto LABEL_301;
        }
        *((_DWORD *)v8 + 4) |= 0x20u;
        goto LABEL_46;
      }
      if ( a2 > 0x62 )
      {
        switch ( a2 )
        {
          case 'c':
            goto LABEL_90;
          case 'd':
            v99 = DirectComposition::Memory::AllocateAndClear_0(0x98uLL, 1701200708LL, 1);
            v8 = (_QWORD *)v99;
            if ( v99 )
            {
              DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v99, 100LL);
              v9 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          case 'e':
            v98 = DirectComposition::Memory::AllocateAndClear_0(0x70uLL, 1735148356LL, 1);
            v8 = (_QWORD *)v98;
            if ( v98 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v98, 101LL);
              v9 = &DirectComposition::CLineGeometryMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
        }
        v20 = a2 - 102;
        v68 = a2 == 102;
LABEL_300:
        if ( v68 )
          goto LABEL_90;
        goto LABEL_301;
      }
      switch ( a2 )
      {
        case 'b':
          v37 = DirectComposition::Memory::AllocateAndClear_0(0x80uLL, 1818903364LL, 1);
          v8 = (_QWORD *)v37;
          if ( v37 )
          {
            DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler(v37, 98LL);
            v9 = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '\\':
          v49 = DirectComposition::Memory::AllocateAndClear_0(0x188uLL, 1986806596LL, 1);
          v8 = (_QWORD *)v49;
          if ( v49 )
          {
            DirectComposition::CVisualMarshaler::CVisualMarshaler(v49, 92LL);
            v9 = &DirectComposition::CLayerVisualMarshaler::`vftable';
            *((_DWORD *)v8 + 97) = 0;
            goto LABEL_46;
          }
          goto LABEL_69;
        case ']':
          v97 = DirectComposition::Memory::AllocateAndClear_0(0x40uLL, 1952531268LL, 1);
          v8 = (_QWORD *)v97;
          if ( v97 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v97, 93LL);
            v9 = &DirectComposition::CLegacyAnimationTriggerMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '_':
          v96 = DirectComposition::Memory::AllocateAndClear_0(0x98uLL, 1801732932LL, 1);
          v8 = (_QWORD *)v96;
          if ( v96 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v96, 95LL);
            v9 = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
      }
      v20 = a2 - 96;
      if ( a2 == 96 )
      {
        v95 = DirectComposition::Memory::AllocateAndClear_0(0x98uLL, 1784955716LL, 1);
        v8 = (_QWORD *)v95;
        if ( v95 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v95, 96LL);
          v9 = &DirectComposition::CLegacyStereoRenderTargetMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      }
    }
    else
    {
      if ( a2 <= 0x79 )
      {
        if ( a2 == 121 )
        {
          v104 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                                        0x88uLL,
                                                                        1937392452LL,
                                                                        1);
          if ( v104 )
          {
            v11 = DirectComposition::CProjectedShadowSceneMarshaler::CProjectedShadowSceneMarshaler(v104);
            goto LABEL_35;
          }
          goto LABEL_69;
        }
        if ( a2 == 112 )
        {
          v25 = DirectComposition::Memory::AllocateAndClear_0(0x78uLL, 1852457796LL, 1);
          v8 = (_QWORD *)v25;
          if ( v25 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v25, 112LL);
            v9 = &DirectComposition::CNineGridBrushMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        }
        if ( a2 > 0x70 )
        {
          switch ( a2 )
          {
            case 'r':
              v27 = DirectComposition::Memory::AllocateAndClear_0(0x70uLL, 2037400388LL, 1);
              v8 = (_QWORD *)v27;
              if ( v27 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v27, 114LL);
                v9 = &DirectComposition::CPathGeometryMarshaler::`vftable';
                goto LABEL_46;
              }
              goto LABEL_69;
            case 't':
              v103 = DirectComposition::Memory::AllocateAndClear_0(0x48uLL, 1668301636LL, 1);
              v8 = (_QWORD *)v103;
              if ( v103 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v103, 116LL);
                v9 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
                goto LABEL_46;
              }
              goto LABEL_69;
            case 'u':
              v32 = DirectComposition::Memory::AllocateAndClear_0(0xC8uLL, 1735410500LL, 1);
              v8 = (_QWORD *)v32;
              if ( v32 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v32, 117LL);
                v9 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
                goto LABEL_46;
              }
              goto LABEL_69;
            case 'w':
              v102 = DirectComposition::Memory::AllocateAndClear_0(0x68uLL, 1668956996LL, 1);
              v8 = (_QWORD *)v102;
              if ( v102 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v102, 119LL);
                v9 = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
                goto LABEL_46;
              }
              goto LABEL_69;
            case 'x':
              v101 = DirectComposition::Memory::AllocateAndClear_0(0x60uLL, 1920615236LL, 1);
              v8 = (_QWORD *)v101;
              if ( v101 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v101, 120LL);
                v9 = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
                *((_DWORD *)v8 + 20) = 1;
                goto LABEL_46;
              }
              goto LABEL_69;
          }
        }
        else
        {
          switch ( a2 )
          {
            case 'i':
              v46 = DirectComposition::Memory::AllocateAndClear_0(0x80uLL, 1634550596LL, 1);
              v8 = (_QWORD *)v46;
              if ( v46 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v46, 105LL);
                v9 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
                goto LABEL_46;
              }
              goto LABEL_69;
            case 'j':
              v18 = DirectComposition::Memory::AllocateAndClear_0(0x58uLL, 1835680580LL, 1);
              v8 = (_QWORD *)v18;
              if ( v18 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v18, 106LL);
                v9 = &DirectComposition::CMaskBrushMarshaler::`vftable';
                goto LABEL_46;
              }
              goto LABEL_69;
            case 'l':
              v53 = DirectComposition::Memory::AllocateAndClear_0(0x60uLL, 1953317700LL, 1);
              v8 = (_QWORD *)v53;
              if ( v53 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v53, 108LL);
                v9 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
                goto LABEL_46;
              }
              goto LABEL_69;
            case 'm':
              v45 = DirectComposition::Memory::AllocateAndClear_0(0x88uLL, 862798660LL, 1);
              v8 = (_QWORD *)v45;
              if ( v45 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v45, 109LL);
                v9 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
                goto LABEL_46;
              }
              goto LABEL_69;
            case 'n':
              goto LABEL_90;
            case 'o':
              v100 = (DirectComposition::CNaturalAnimationMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                                        0xC8uLL,
                                                                        1634616132LL,
                                                                        1);
              if ( v100 )
              {
                v11 = DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(v100);
                goto LABEL_35;
              }
              goto LABEL_69;
          }
        }
        goto LABEL_26;
      }
      if ( a2 == 128 )
      {
        v54 = DirectComposition::Memory::AllocateAndClear_0(0x180uLL, 1987199812LL, 1);
        v8 = (_QWORD *)v54;
        if ( v54 )
        {
          DirectComposition::CVisualMarshaler::CVisualMarshaler(v54, 128LL);
          v9 = &DirectComposition::CRedirectVisualMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      }
      if ( a2 > 0x80 )
      {
        switch ( a2 )
        {
          case 0x82u:
            v108 = DirectComposition::Memory::AllocateAndClear_0(0x78uLL, 1835287364LL, 1);
            v8 = (_QWORD *)v108;
            if ( v108 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v108, 130LL);
              v9 = &DirectComposition::CRemoteAppRenderTargetMarshaler::`vftable';
              *((_DWORD *)v8 + 14) = 3;
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0x83u:
            v107 = DirectComposition::Memory::AllocateAndClear_0(0x70uLL, 1885619012LL, 1);
            v8 = (_QWORD *)v107;
            if ( v107 )
            {
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v107, 131LL);
              v9 = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0x84u:
            goto LABEL_90;
          case 0x89u:
            v106 = DirectComposition::Memory::AllocateAndClear_0(0x78uLL, 1701200708LL, 1);
            v8 = (_QWORD *)v106;
            if ( v106 )
            {
              DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v106, 137LL);
              v9 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          case 0x8Au:
            v105 = DirectComposition::Memory::AllocateAndClear_0(0x50uLL, 1819493188LL, 1);
            v40 = (_QWORD *)v105;
            if ( !v105 )
              return (unsigned int)-1073741801;
            DirectComposition::CBaseAnimationMarshaler::CBaseAnimationMarshaler(v105, 138LL);
            *v40 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
            v40[2] = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
            goto LABEL_150;
        }
        goto LABEL_26;
      }
      switch ( a2 )
      {
        case '{':
          v10 = (DirectComposition::CPropertySetMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                              0x70uLL,
                                                              1651524420LL,
                                                              1);
          if ( !v10 )
            goto LABEL_69;
          v11 = DirectComposition::CPropertySetMarshaler::CPropertySetMarshaler(v10);
          goto LABEL_35;
        case '|':
          v33 = DirectComposition::Memory::AllocateAndClear_0(0x70uLL, 2021278532LL, 1);
          v8 = (_QWORD *)v33;
          if ( v33 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v33, 124LL);
            v9 = &DirectComposition::CProxyGeometryClipMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '}':
          v50 = DirectComposition::Memory::AllocateAndClear_0(0x88uLL, 1869235012LL, 1);
          v8 = (_QWORD *)v50;
          if ( v50 )
          {
            DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler(v50, 125LL);
            v9 = &DirectComposition::CRadialGradientBrushMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
      }
      v20 = a2 - 126;
      if ( a2 == 126 )
      {
        v21 = DirectComposition::Memory::AllocateAndClear_0(0x98uLL, 1668432708LL, 1);
        v8 = (_QWORD *)v21;
        if ( v21 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v21, 126LL);
          v9 = &DirectComposition::CRectangleClipMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      }
    }
LABEL_301:
    v64 = v20 == 1;
    goto LABEL_302;
  }
  if ( a2 == 76 )
  {
    v86 = DirectComposition::Memory::AllocateAndClear_0(0x48uLL, 1835549508LL, 1);
    v8 = (_QWORD *)v86;
    if ( v86 )
    {
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v86, 76LL);
      v9 = &DirectComposition::CHolographicExclusiveModeMarshaler::`vftable';
      goto LABEL_46;
    }
    goto LABEL_69;
  }
  if ( a2 <= 0x25 )
  {
    if ( a2 == 37 )
    {
      v72 = DirectComposition::Memory::AllocateAndClear_0(0x60uLL, 1835877188LL, 1);
      v8 = (_QWORD *)v72;
      if ( v72 )
      {
        DirectComposition::CResourceMarshaler::CResourceMarshaler(v72, 37LL);
        v9 = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
        goto LABEL_46;
      }
      goto LABEL_69;
    }
    if ( a2 <= 0x13 )
    {
      if ( a2 == 19 )
      {
        v67 = (DirectComposition::CCaptureControllerMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                                  0x90uLL,
                                                                  1902330692LL,
                                                                  1);
        if ( v67 )
        {
          v11 = DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(v67);
          goto LABEL_35;
        }
        goto LABEL_69;
      }
      if ( a2 <= 0xC )
      {
        if ( a2 == 12 )
        {
          v63 = DirectComposition::Memory::AllocateAndClear_0(0x40uLL, 1684161348LL, 1);
          v8 = (_QWORD *)v63;
          if ( v63 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v63, 12LL);
            v9 = &DirectComposition::CBatchDeferralMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        }
        if ( a2 == 1 )
        {
          v62 = DirectComposition::Memory::AllocateAndClear_0(0x98uLL, 1701200708LL, 1);
          v8 = (_QWORD *)v62;
          if ( v62 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v62, 1LL);
            v9 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        }
        if ( a2 != 2 )
        {
          if ( a2 == 6 )
          {
            v61 = DirectComposition::Memory::AllocateAndClear_0(0x88uLL, 1701200708LL, 1);
            v8 = (_QWORD *)v61;
            if ( v61 )
            {
              DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v61, 6LL);
              v9 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
              goto LABEL_46;
            }
            goto LABEL_69;
          }
          if ( a2 != 7 && a2 != 8 )
          {
            if ( a2 == 9 )
            {
              v7 = DirectComposition::Memory::AllocateAndClear_0(0x48uLL, 1651131204LL, 1);
              v8 = (_QWORD *)v7;
              if ( v7 )
              {
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v7, 9LL);
                v9 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
LABEL_46:
                *v8 = v9;
                goto LABEL_36;
              }
              goto LABEL_69;
            }
            goto LABEL_26;
          }
          goto LABEL_90;
        }
        v39 = DirectComposition::Memory::AllocateAndClear_0(0xF8uLL, 1851867972LL, 1);
        v40 = (_QWORD *)v39;
        if ( !v39 )
          return (unsigned int)-1073741801;
        DirectComposition::CBaseAnimationMarshaler::CBaseAnimationMarshaler(v39, 2LL);
        *v40 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
        v41 = v40 + 16;
        v40[2] = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
        v42 = (_QWORD *)((char *)this + 360);
        v43 = *((_QWORD *)this + 45);
        if ( *(DirectComposition::CApplicationChannel **)(v43 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 360) )
          __fastfail(3u);
        *v41 = v43;
        v40[17] = v42;
        *(_QWORD *)(v43 + 8) = v41;
        *v42 = v41;
LABEL_150:
        v8 = v40 + 2;
        goto LABEL_36;
      }
      switch ( a2 )
      {
        case 0xDu:
          goto LABEL_90;
        case 0xEu:
          v66 = DirectComposition::Memory::AllocateAndClear_0(0x78uLL, 1701200708LL, 1);
          v8 = (_QWORD *)v66;
          if ( v66 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v66, 14LL);
            v9 = &DirectComposition::CBlendEffectMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0xFu:
          v56 = DirectComposition::Memory::AllocateAndClear_0(0x48uLL, 1684685636LL, 1);
          v8 = (_QWORD *)v56;
          if ( v56 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v56, 15LL);
            v9 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0x10u:
          v65 = DirectComposition::Memory::AllocateAndClear_0(0x80uLL, 1701200708LL, 1);
          v8 = (_QWORD *)v65;
          if ( v65 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v65, 16LL);
            v9 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
      }
      v64 = a2 == 18;
LABEL_302:
      if ( !v64 )
        goto LABEL_26;
LABEL_90:
      v23 = DirectComposition::Memory::AllocateAndClear_0(0x50uLL, 1835483972LL, 1);
      if ( v23 )
      {
        v11 = DirectComposition::CGenericMarshaler::CGenericMarshaler(v23, a2);
        goto LABEL_35;
      }
LABEL_69:
      v8 = 0LL;
      goto LABEL_36;
    }
    if ( a2 > 0x1C )
    {
      switch ( a2 )
      {
        case 0x1Du:
          v26 = DirectComposition::Memory::AllocateAndClear_0(0x88uLL, 845366084LL, 1);
          v8 = (_QWORD *)v26;
          if ( v26 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v26, 29LL);
            v9 = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0x1Eu:
          v16 = DirectComposition::Memory::AllocateAndClear_0(0xD8uLL, 1868776260LL, 1);
          v8 = (_QWORD *)v16;
          if ( v16 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v16, 30LL);
            v9 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0x1Fu:
          v71 = DirectComposition::Memory::AllocateAndClear_0(0x78uLL, 1701200708LL, 1);
          v8 = (_QWORD *)v71;
          if ( v71 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v71, 31LL);
            v9 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0x20u:
          v70 = DirectComposition::Memory::AllocateAndClear_0(0x78uLL, 1835090756LL, 1);
          v8 = (_QWORD *)v70;
          if ( v70 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v70, 32LL);
            v9 = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case 0x21u:
          v59 = DirectComposition::Memory::AllocateAndClear_0(0x88uLL, 1818510148LL, 1);
          v8 = (_QWORD *)v59;
          if ( v59 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v59, 33LL);
            v9 = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
      }
      goto LABEL_26;
    }
    switch ( a2 )
    {
      case 0x1Cu:
        v44 = DirectComposition::Memory::AllocateAndClear_0(0x60uLL, 1952793412LL, 1);
        v8 = (_QWORD *)v44;
        if ( v44 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v44, 28LL);
          v9 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      case 0x14u:
        v17 = DirectComposition::Memory::AllocateAndClear_0(0x88uLL, 1919107908LL, 1);
        v8 = (_QWORD *)v17;
        if ( v17 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v17, 20LL);
          v9 = &DirectComposition::CCaptureRenderTargetMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      case 0x16u:
        v22 = DirectComposition::Memory::AllocateAndClear_0(0x58uLL, 1667908420LL, 1);
        v8 = (_QWORD *)v22;
        if ( v22 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v22, 22LL);
          v9 = &DirectComposition::CColorBrushMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      case 0x17u:
        v28 = DirectComposition::Memory::AllocateAndClear_0(0x50uLL, 1936147268LL, 1);
        v8 = (_QWORD *)v28;
        if ( v28 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v28, 23LL);
          v9 = &DirectComposition::CColorGradientStopMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      case 0x18u:
        v69 = DirectComposition::Memory::AllocateAndClear_0(0xC8uLL, 1701200708LL, 1);
        v8 = (_QWORD *)v69;
        if ( v69 )
        {
          DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v69, 24LL);
          v9 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
    }
    v20 = a2 - 26;
    v68 = a2 == 26;
    goto LABEL_300;
  }
  if ( a2 > 0x3B )
  {
    if ( a2 <= 0x44 )
    {
      switch ( a2 )
      {
        case 'D':
        case '=':
          goto LABEL_90;
        case '>':
          v81 = DirectComposition::Memory::AllocateAndClear_0(0x80uLL, 1701200708LL, 1);
          v8 = (_QWORD *)v81;
          if ( v81 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v81, 62LL);
            v9 = &DirectComposition::CFloodEffectMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '?':
          v80 = DirectComposition::Memory::AllocateAndClear_0(0x80uLL, 1701200708LL, 1);
          v8 = (_QWORD *)v80;
          if ( v80 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v80, 63LL);
            v9 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
      }
      v20 = a2 - 65;
      if ( a2 == 65 )
      {
        v79 = DirectComposition::Memory::AllocateAndClear_0(0xF0uLL, 1768375108LL, 1);
        v8 = (_QWORD *)v79;
        if ( v79 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v79, 65LL);
          *v8 = &DirectComposition::CGenericInkMarshaler::`vftable';
          *((_BYTE *)v8 + 64) = 1;
          v8[11] = 1LL;
          *((_BYTE *)v8 + 104) = 1;
          v8[16] = 1LL;
          *((_BYTE *)v8 + 180) = 0;
          goto LABEL_36;
        }
        goto LABEL_69;
      }
      goto LABEL_301;
    }
    switch ( a2 )
    {
      case 'E':
        v85 = DirectComposition::Memory::AllocateAndClear_0(0x70uLL, 1734558532LL, 1);
        v8 = (_QWORD *)v85;
        if ( v85 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v85, 69LL);
          v9 = &DirectComposition::CClipGroupMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      case 'F':
        goto LABEL_90;
      case 'G':
        v84 = DirectComposition::Memory::AllocateAndClear_0(0x58uLL, 1986478916LL, 1);
        v8 = (_QWORD *)v84;
        if ( v84 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v84, 71LL);
          v9 = &DirectComposition::CGlobalDCompVisualMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      case 'J':
        v83 = DirectComposition::Memory::AllocateAndClear_0(0x60uLL, 1667777348LL, 1);
        v8 = (_QWORD *)v83;
        if ( v83 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v83, 74LL);
          v9 = &DirectComposition::CHolographicCompositionMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
      case 'K':
        v82 = DirectComposition::Memory::AllocateAndClear_0(0x68uLL, 1684554564LL, 1);
        v8 = (_QWORD *)v82;
        if ( v82 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v82, 75LL);
          v9 = &DirectComposition::CHolographicDisplayMarshaler::`vftable';
          goto LABEL_46;
        }
        goto LABEL_69;
    }
  }
  else
  {
    if ( a2 == 59 )
    {
      v15 = DirectComposition::Memory::AllocateAndClear_0(0xC8uLL, 2019902276LL, 1);
      v8 = (_QWORD *)v15;
      if ( v15 )
      {
        DirectComposition::CResourceMarshaler::CResourceMarshaler(v15, 59LL);
        v9 = &DirectComposition::CExpressionMarshaler::`vftable';
        goto LABEL_46;
      }
      goto LABEL_69;
    }
    if ( a2 > 0x30 )
    {
      switch ( a2 )
      {
        case '2':
          v78 = DirectComposition::Memory::AllocateAndClear_0(0x48uLL, 1920156484LL, 1);
          v8 = (_QWORD *)v78;
          if ( v78 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v78, 50LL);
            v9 = &DirectComposition::CDataSourceReaderMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '3':
          v77 = DirectComposition::Memory::AllocateAndClear_0(0xA8uLL, 1684292420LL, 1);
          v8 = (_QWORD *)v77;
          if ( v77 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v77, 51LL);
            v9 = &DirectComposition::CDDisplayRenderTargetMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '6':
          v58 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                             0x78uLL,
                                                             1935950660LL,
                                                             1);
          if ( v58 )
          {
            v11 = DirectComposition::CDropShadowMarshaler::CDropShadowMarshaler(v58);
            goto LABEL_35;
          }
          goto LABEL_69;
        case '8':
          v35 = DirectComposition::Memory::AllocateAndClear_0(0x68uLL, 1701462852LL, 1);
          v8 = (_QWORD *)v35;
          if ( v35 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v35, 56LL);
            v9 = &DirectComposition::CEffectBrushMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case ':':
          v51 = DirectComposition::Memory::AllocateAndClear_0(0x70uLL, 2036679492LL, 1);
          v8 = (_QWORD *)v51;
          if ( v51 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v51, 58LL);
            v9 = &DirectComposition::CEllipseGeometryMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
      }
    }
    else
    {
      switch ( a2 )
      {
        case '0':
          v76 = DirectComposition::Memory::AllocateAndClear_0(0x68uLL, 1735607108LL, 1);
          v8 = (_QWORD *)v76;
          if ( v76 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v76, 156LL);
            v9 = &DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '&':
          v75 = DirectComposition::Memory::AllocateAndClear_0(0xA0uLL, 1869628228LL, 1);
          v8 = (_QWORD *)v75;
          if ( v75 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v75, 38LL);
            v9 = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '(':
          v74 = DirectComposition::Memory::AllocateAndClear_0(0xC8uLL, 1886602052LL, 1);
          v8 = (_QWORD *)v74;
          if ( v74 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v74, 40LL);
            v9 = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case ')':
          v24 = DirectComposition::Memory::AllocateAndClear_0(0x48uLL, 1650672452LL, 1);
          v8 = (_QWORD *)v24;
          if ( v24 )
          {
            DirectComposition::CCompositionSurfaceBitmapMarshaler::CCompositionSurfaceBitmapMarshaler(v24);
            v9 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case ',':
          v52 = DirectComposition::Memory::AllocateAndClear_0(0xA0uLL, 1633895236LL, 1);
          v8 = (_QWORD *)v52;
          if ( v52 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v52, 44LL);
            v9 = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '-':
          v30 = DirectComposition::Memory::AllocateAndClear_0(0x50uLL, 1668236100LL, 1);
          v8 = (_QWORD *)v30;
          if ( v30 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v30, 45LL);
            v9 = &DirectComposition::CContainerShapeMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
        case '/':
          v73 = DirectComposition::Memory::AllocateAndClear_0(0x58uLL, 1718829892LL, 1);
          v8 = (_QWORD *)v73;
          if ( v73 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v73, 47LL);
            v9 = &DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::`vftable';
            goto LABEL_46;
          }
          goto LABEL_69;
      }
    }
  }
LABEL_26:
  PrivateMarshaler = DirectComposition::GeneratedCreatePrivateMarshaler(
                       (DirectComposition *)a2,
                       (unsigned int)&v121,
                       a3);
  if ( PrivateMarshaler < 0 )
    return (unsigned int)PrivateMarshaler;
  v8 = v121;
LABEL_36:
  if ( !v8 )
    return (unsigned int)-1073741801;
  *a3 = (struct DirectComposition::CResourceMarshaler *)v8;
  return (unsigned int)PrivateMarshaler;
}
