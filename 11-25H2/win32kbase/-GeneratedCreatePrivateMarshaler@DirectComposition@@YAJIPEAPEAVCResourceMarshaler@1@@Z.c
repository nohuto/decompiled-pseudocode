/*
 * XREFs of ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1400533D8
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053F20 (--0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x140053FF4 (--0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x140198138 (--0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::GeneratedCreatePrivateMarshaler(
        DirectComposition *this,
        _QWORD *a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  void **v13; // rax
  __int64 v14; // rax
  void **v15; // rax
  DirectComposition::CCaptureControllerMarshaler *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  void **v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  DirectComposition::CRegionGeometryMarshaler *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax

  if ( (unsigned int)this > 0x87 )
  {
    if ( (unsigned int)this <= 0xA5 )
    {
      if ( (_DWORD)this == 165 )
      {
        v62 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x180uLL, 0x75734344u);
        v9 = (_QWORD *)v62;
        if ( !v62 )
          goto LABEL_135;
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v62, 165LL);
        v13 = &DirectComposition::CSuperWetInkVisualMarshaler::`vftable';
      }
      else if ( (unsigned int)this > 0x93 )
      {
        v55 = (unsigned int)((_DWORD)this - 148);
        if ( !(_DWORD)v55 )
        {
          v61 = Win32AllocPoolWithQuotaZInitImpl(v55, 0x70uLL, 0x747A4344u);
          v9 = (_QWORD *)v61;
          if ( !v61 )
            goto LABEL_135;
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v61, 148LL);
          *v9 = &DirectComposition::CSceneNodeMarshaler::`vftable';
          v9[7] = 0LL;
          v9[8] = 0LL;
          v9[9] = 0LL;
          goto LABEL_18;
        }
        v56 = (unsigned int)(v55 - 5);
        if ( (_DWORD)v56 )
        {
          v57 = (unsigned int)(v56 - 7);
          if ( (_DWORD)v57 )
          {
            if ( (_DWORD)v57 != 2 )
              return 3221225485LL;
            v58 = Win32AllocPoolWithQuotaZInitImpl(v57, 0x68uLL, 0x7A734344u);
            v9 = (_QWORD *)v58;
            if ( !v58 )
              goto LABEL_135;
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v58, 162LL);
            v13 = &DirectComposition::CSolidColorLegacyMilBrushMarshaler::`vftable';
          }
          else
          {
            v59 = Win32AllocPoolWithQuotaZInitImpl(v57, 0x58uLL, 0x746B4344u);
            v9 = (_QWORD *)v59;
            if ( !v59 )
              goto LABEL_135;
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v59, 160LL);
            v13 = &DirectComposition::CSkewTransformMarshaler::`vftable';
          }
        }
        else
        {
          v60 = Win32AllocPoolWithQuotaZInitImpl(v56, 0x180uLL, 0x767A4344u);
          v9 = (_QWORD *)v60;
          if ( !v60 )
            goto LABEL_135;
          DirectComposition::CVisualMarshaler::CVisualMarshaler(v60, 153LL);
          v13 = &DirectComposition::CSceneVisualMarshaler::`vftable';
        }
      }
      else if ( (_DWORD)this == 147 )
      {
        v54 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x40uLL, 0x7A7A4344u);
        v9 = (_QWORD *)v54;
        if ( !v54 )
          goto LABEL_135;
        DirectComposition::CResourceMarshaler::CResourceMarshaler(v54, 147LL);
        v13 = &DirectComposition::CSceneModelTransformMarshaler::`vftable';
      }
      else
      {
        v45 = (unsigned int)((_DWORD)this - 136);
        if ( (_DWORD)v45 )
        {
          v46 = (unsigned int)(v45 - 3);
          if ( (_DWORD)v46 )
          {
            v47 = (unsigned int)(v46 - 1);
            if ( (_DWORD)v47 )
            {
              v48 = (unsigned int)(v47 - 4);
              if ( (_DWORD)v48 )
              {
                if ( (_DWORD)v48 != 2 )
                  return 3221225485LL;
                v49 = Win32AllocPoolWithQuotaZInitImpl(v48, 0xA8uLL, 0x726D4344u);
                v9 = (_QWORD *)v49;
                if ( !v49 )
                  goto LABEL_135;
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v49, 146LL);
                v13 = &DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::`vftable';
              }
              else
              {
                v50 = Win32AllocPoolWithQuotaZInitImpl(v48, 0x98uLL, 0x657A4344u);
                v9 = (_QWORD *)v50;
                if ( !v50 )
                  goto LABEL_135;
                DirectComposition::CResourceMarshaler::CResourceMarshaler(v50, 144LL);
                v13 = &DirectComposition::CSceneMeshMarshaler::`vftable';
              }
            }
            else
            {
              v51 = Win32AllocPoolWithQuotaZInitImpl(v47, 0x60uLL, 0x33734344u);
              v9 = (_QWORD *)v51;
              if ( !v51 )
                goto LABEL_135;
              DirectComposition::CResourceMarshaler::CResourceMarshaler(v51, 140LL);
              v13 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
            }
          }
          else
          {
            v52 = Win32AllocPoolWithQuotaZInitImpl(v46, 0x58uLL, 0x74734344u);
            v9 = (_QWORD *)v52;
            if ( !v52 )
              goto LABEL_135;
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v52, 139LL);
            v13 = &DirectComposition::CScaleTransformMarshaler::`vftable';
          }
        }
        else
        {
          v53 = Win32AllocPoolWithQuotaZInitImpl(v45, 0x68uLL, 0x33724344u);
          v9 = (_QWORD *)v53;
          if ( !v53 )
            goto LABEL_135;
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v53, 136LL);
          v13 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
        }
      }
LABEL_134:
      *v9 = v13;
      goto LABEL_136;
    }
    v63 = (unsigned int)((_DWORD)this - 168);
    if ( !(_DWORD)v63 )
    {
      v80 = Win32AllocPoolWithQuotaZInitImpl(v63, 0x78uLL, 0x79734344u);
      v9 = (_QWORD *)v80;
      if ( !v80 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v80, 168LL);
      v13 = &DirectComposition::CSynchronousSuperWetInkMarshaler::`vftable';
      goto LABEL_134;
    }
    v64 = (unsigned int)(v63 - 3);
    if ( !(_DWORD)v64 )
    {
      v79 = Win32AllocPoolWithQuotaZInitImpl(v64, 0x1C0uLL, 0x76744344u);
      v9 = (_QWORD *)v79;
      if ( v79 )
      {
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v79, 171LL);
        *v9 = &DirectComposition::CTextVisualMarshaler::`vftable';
        v9[47] = 0LL;
        v9[48] = 0LL;
        v9[49] = 0LL;
        v9[50] = 0LL;
        v9[51] = 0LL;
        v9[52] = 0LL;
        v9[53] = 0LL;
        v9[54] = 0LL;
        v9[55] = 0LL;
        goto LABEL_136;
      }
      goto LABEL_135;
    }
    v65 = (unsigned int)(v64 - 3);
    if ( !(_DWORD)v65 )
    {
      v78 = Win32AllocPoolWithQuotaZInitImpl(v65, 0x60uLL, 0x33674344u);
      v9 = (_QWORD *)v78;
      if ( !v78 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v78, 174LL);
      v15 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
      goto LABEL_23;
    }
    v66 = (unsigned int)(v65 - 1);
    if ( !(_DWORD)v66 )
    {
      v77 = Win32AllocPoolWithQuotaZInitImpl(v66, 0x60uLL, 0x67744344u);
      v9 = (_QWORD *)v77;
      if ( !v77 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v77, 175LL);
      v15 = &DirectComposition::CTransformGroupMarshaler::`vftable';
      goto LABEL_23;
    }
    v67 = (unsigned int)(v66 - 1);
    if ( !(_DWORD)v67 )
    {
      v76 = Win32AllocPoolWithQuotaZInitImpl(v67, 0x50uLL, 0x74744344u);
      v9 = (_QWORD *)v76;
      if ( !v76 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v76, 176LL);
      v13 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
      goto LABEL_134;
    }
    v68 = (unsigned int)(v67 - 1);
    if ( !(_DWORD)v68 )
    {
      v75 = Win32AllocPoolWithQuotaZInitImpl(v68, 0x58uLL, 0x33744344u);
      v9 = (_QWORD *)v75;
      if ( !v75 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v75, 177LL);
      v13 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
      goto LABEL_134;
    }
    v69 = (unsigned int)(v68 - 6);
    if ( !(_DWORD)v69 )
    {
      v74 = Win32AllocPoolWithQuotaZInitImpl(v69, 0x40uLL, 0x78764344u);
      v9 = (_QWORD *)v74;
      if ( !v74 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v74, 183LL);
      v13 = &DirectComposition::CVisualBitmapMarshaler::`vftable';
      goto LABEL_134;
    }
    v70 = (unsigned int)(v69 - 2);
    if ( (_DWORD)v70 )
    {
      if ( (_DWORD)v70 != 5 )
        return 3221225485LL;
      v72 = DirectComposition::Memory::AllocateAndClear_0(0x228uLL, 1853309764LL, 1);
      v9 = (_QWORD *)v72;
      if ( !v72 )
        goto LABEL_135;
      DirectComposition::CVisualMarshaler::CVisualMarshaler(v72, 190LL);
      v13 = &DirectComposition::CWindowNodeMarshaler::`vftable';
      goto LABEL_134;
    }
    v73 = Win32AllocPoolWithQuotaZInitImpl(v70, 0x50uLL, 0x67764344u);
    v9 = (_QWORD *)v73;
    if ( !v73 )
      goto LABEL_135;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v73, 185LL);
    v25 = &DirectComposition::CVisualGroupMarshaler::`vftable';
LABEL_39:
    *v9 = v25;
    v9[7] = 0LL;
    v9[8] = 0LL;
    v9[9] = 0LL;
    goto LABEL_136;
  }
  if ( (_DWORD)this == 135 )
  {
    v44 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x58uLL, 0x6F724344u);
    v9 = (_QWORD *)v44;
    if ( !v44 )
      goto LABEL_135;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v44, 135LL);
    v13 = &DirectComposition::CRotateTransformMarshaler::`vftable';
    goto LABEL_134;
  }
  if ( (unsigned int)this > 0x34 )
  {
    v27 = (unsigned int)((_DWORD)this - 53);
    if ( !(_DWORD)v27 )
    {
      v43 = Win32AllocPoolWithQuotaZInitImpl(v27, 0x48uLL, 0x65644344u);
      v9 = (_QWORD *)v43;
      if ( !v43 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v43, 53LL);
      v13 = &DirectComposition::CDesktopTreeMarshaler::`vftable';
      goto LABEL_134;
    }
    v28 = (unsigned int)(v27 - 4);
    if ( !(_DWORD)v28 )
    {
      v42 = Win32AllocPoolWithQuotaZInitImpl(v28, 0x58uLL, 0x67654344u);
      v9 = (_QWORD *)v42;
      if ( !v42 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v42, 57LL);
      v13 = &DirectComposition::CEffectGroupMarshaler::`vftable';
      goto LABEL_134;
    }
    v29 = (unsigned int)(v28 - 7);
    if ( (_DWORD)v29 )
    {
      v30 = (unsigned int)(v29 - 4);
      if ( (_DWORD)v30 )
      {
        v31 = v30 - 3;
        if ( !v31 )
        {
          v39 = DirectComposition::Memory::AllocateAndClear_0(0x58uLL, 1986478916LL, 1);
          v9 = (_QWORD *)v39;
          if ( !v39 )
            goto LABEL_135;
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v39, 71LL);
          v13 = &DirectComposition::CGlobalDCompVisualMarshaler::`vftable';
          goto LABEL_134;
        }
        v32 = (unsigned int)(v31 - 12);
        if ( !(_DWORD)v32 )
        {
          v38 = Win32AllocPoolWithQuotaZInitImpl(v32, 0xB8uLL, 0x62694344u);
          v9 = (_QWORD *)v38;
          if ( !v38 )
            goto LABEL_135;
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v38, 83LL);
          v13 = &DirectComposition::CImageLegacyMilBrushMarshaler::`vftable';
          goto LABEL_134;
        }
        v33 = (unsigned int)(v32 - 16);
        if ( !(_DWORD)v33 )
        {
          v37 = Win32AllocPoolWithQuotaZInitImpl(v33, 0x90uLL, 0x626C4344u);
          v9 = (_QWORD *)v37;
          if ( !v37 )
            goto LABEL_135;
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v37, 99LL);
          v9[13] = 0LL;
          v13 = &DirectComposition::CLinearGradientLegacyMilBrushMarshaler::`vftable';
          v9[14] = 0LL;
          v9[15] = 0LL;
          goto LABEL_134;
        }
        v34 = (unsigned int)(v33 - 11);
        if ( !(_DWORD)v34 )
        {
          v36 = Win32AllocPoolWithQuotaZInitImpl(v34, 0x88uLL, 0x676D4344u);
          v9 = (_QWORD *)v36;
          if ( v36 )
          {
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v36, 110LL);
            *v9 = &DirectComposition::CMeshGeometry2DMarshaler::`vftable';
            v9[8] = 0LL;
            v9[9] = 0LL;
            v9[10] = 0LL;
            v9[11] = 0LL;
            v9[12] = 0LL;
            v9[13] = 0LL;
            v9[14] = 0LL;
            v9[15] = 0LL;
            v9[16] = 0LL;
            goto LABEL_136;
          }
          goto LABEL_135;
        }
        if ( (_DWORD)v34 != 19 )
          return 3221225485LL;
        v35 = (DirectComposition::CRegionGeometryMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v34, 0x78uLL, 0x67724344u);
        if ( !v35 )
          goto LABEL_135;
        v17 = DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(v35);
LABEL_26:
        v9 = (_QWORD *)v17;
        goto LABEL_136;
      }
      v40 = Win32AllocPoolWithQuotaZInitImpl(v30, 0x50uLL, 0x67674344u);
      v9 = (_QWORD *)v40;
      if ( !v40 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v40, 68LL);
      v25 = &DirectComposition::CGeometry2DGroupMarshaler::`vftable';
    }
    else
    {
      v41 = Win32AllocPoolWithQuotaZInitImpl(v29, 0x70uLL, 0x64674344u);
      v9 = (_QWORD *)v41;
      if ( !v41 )
        goto LABEL_135;
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v41, 64LL);
      v25 = &DirectComposition::CGdiSpriteBitmapMarshaler::`vftable';
    }
    goto LABEL_39;
  }
  if ( (_DWORD)this == 52 )
  {
    v26 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x50uLL, 0x69644344u);
    v9 = (_QWORD *)v26;
    if ( !v26 )
      goto LABEL_135;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v26, 52LL);
    v13 = &DirectComposition::CDelegatedInkCanvasMarshaler::`vftable';
    goto LABEL_134;
  }
  if ( (unsigned int)this > 0x13 )
  {
    v18 = (unsigned int)((_DWORD)this - 34);
    if ( (_DWORD)v18 )
    {
      v19 = (unsigned int)(v18 - 1);
      if ( (_DWORD)v19 )
      {
        v20 = (unsigned int)(v19 - 7);
        if ( (_DWORD)v20 )
        {
          if ( (_DWORD)v20 != 7 )
            return 3221225485LL;
          v21 = Win32AllocPoolWithQuotaZInitImpl(v20, 0x190uLL, 0x79634344u);
          v9 = (_QWORD *)v21;
          if ( !v21 )
            goto LABEL_135;
          DirectComposition::CVisualMarshaler::CVisualMarshaler(v21, 49LL);
          v13 = &DirectComposition::CCursorVisualMarshaler::`vftable';
        }
        else
        {
          v22 = Win32AllocPoolWithQuotaZInitImpl(v20, 0x60uLL, 0x6C744344u);
          v9 = (_QWORD *)v22;
          if ( !v22 )
            goto LABEL_135;
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v22, 42LL);
          v13 = &DirectComposition::CCompositionTextLineMarshaler::`vftable';
        }
      }
      else
      {
        v23 = Win32AllocPoolWithQuotaZInitImpl(v19, 0x60uLL, 0x72674344u);
        v9 = (_QWORD *)v23;
        if ( !v23 )
          goto LABEL_135;
        DirectComposition::CResourceMarshaler::CResourceMarshaler(v23, 35LL);
        v13 = &DirectComposition::CCompositionGlyphRunMarshaler::`vftable';
      }
      goto LABEL_134;
    }
    v24 = Win32AllocPoolWithQuotaZInitImpl(v18, 0x58uLL, 0x74644344u);
    v9 = (_QWORD *)v24;
    if ( !v24 )
      goto LABEL_135;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v24, 34LL);
    v25 = &DirectComposition::CCompositionDynamicTextureMarshaler::`vftable';
    goto LABEL_39;
  }
  if ( (_DWORD)this == 19 )
  {
    v16 = (DirectComposition::CCaptureControllerMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                              0x90uLL,
                                                              1902330692LL,
                                                              1);
    if ( !v16 )
      goto LABEL_135;
    v17 = DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(v16);
    goto LABEL_26;
  }
  v4 = (unsigned int)((_DWORD)this - 3);
  if ( !(_DWORD)v4 )
  {
    v14 = Win32AllocPoolWithQuotaZInitImpl(v4, 0x68uLL, 0x68614344u);
    v9 = (_QWORD *)v14;
    if ( !v14 )
      goto LABEL_135;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v14, 3LL);
    v15 = &DirectComposition::CAnimationControllerMarshaler::`vftable';
LABEL_23:
    *v9 = v15;
    v9[9] = 0LL;
    v9[10] = 0LL;
    v9[11] = 0LL;
    goto LABEL_136;
  }
  v5 = (unsigned int)(v4 - 1);
  if ( !(_DWORD)v5 )
  {
    v12 = Win32AllocPoolWithQuotaZInitImpl(v5, 0x40uLL, 0x63674344u);
    v9 = (_QWORD *)v12;
    if ( !v12 )
      goto LABEL_135;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v12, 4LL);
    v13 = &DirectComposition::CAnimationGlobalConfigurationMarshaler::`vftable';
    goto LABEL_134;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v6 )
  {
    v11 = Win32AllocPoolWithQuotaZInitImpl(v6, 0x78uLL, 0x72744344u);
    v9 = (_QWORD *)v11;
    if ( !v11 )
      goto LABEL_135;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v11, 5LL);
    *v9 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
LABEL_18:
    v9[10] = 0LL;
    v9[11] = 0LL;
    v9[12] = 0LL;
    goto LABEL_136;
  }
  v7 = (unsigned int)(v6 - 2);
  if ( !(_DWORD)v7 )
  {
    v10 = Win32AllocPoolWithQuotaZInitImpl(v7, 0x58uLL, 0x77614344u);
    v9 = (_QWORD *)v10;
    if ( v10 )
    {
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v10, 7LL);
      *v9 = &DirectComposition::CAtlasedRectsGroupMarshaler::`vftable';
      v9[8] = 0LL;
      v9[9] = 0LL;
      v9[10] = 0LL;
      goto LABEL_136;
    }
LABEL_135:
    v9 = 0LL;
    goto LABEL_136;
  }
  if ( (_DWORD)v7 != 1 )
    return 3221225485LL;
  v8 = Win32AllocPoolWithQuotaZInitImpl(v7, 0x70uLL, 0x30614344u);
  v9 = (_QWORD *)v8;
  if ( !v8 )
    goto LABEL_135;
  DirectComposition::CResourceMarshaler::CResourceMarshaler(v8, 8LL);
  *v9 = &DirectComposition::CAtlasedRectsMeshMarshaler::`vftable';
  v9[8] = 0LL;
  v9[9] = 0LL;
  v9[10] = 0LL;
  v9[11] = 0LL;
  v9[12] = 0LL;
  v9[13] = 0LL;
LABEL_136:
  *a2 = v9;
  return 0LL;
}
