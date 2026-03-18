/*
 * XREFs of ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x140056790
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400565EC (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140055C7C (--0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CMatrixTransform3DMarshaler@DirectComposition@@QEAA@XZ @ 0x140055D18 (--0CMatrixTransform3DMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140055E60 (--0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x140055EB0 (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1400561E8 (--0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140056D6C (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x14019D934 (--0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CLightMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B3C4 (--0CLightMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B5D4 (--0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::GeneratedCreateSharedWriteMarshaler(
        DirectComposition *this,
        __int64 a2,
        const struct DirectComposition::CSharedSystemResource *a3,
        struct DirectComposition::CResourceMarshaler **a4)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  DirectComposition::CMatrixTransform3DMarshaler *v16; // rax
  DirectComposition::CMatrixTransformMarshaler *v17; // rax
  DirectComposition::CManipulationTransformMarshaler *v18; // rax
  __int64 v19; // rax
  void **v20; // rax
  DirectComposition::CInteractionMarshaler *v21; // rax
  void **v22; // rcx
  __int64 v23; // rax
  DirectComposition::CCaptureControllerMarshaler *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  __int64 v36; // rax
  __int64 v37; // rax
  DirectComposition::CVisualGroupMarshaler *v38; // rax
  __int64 v39; // rax
  DirectComposition::CVisualMarshaler *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  DirectComposition::CRegionGeometryMarshaler *v43; // rax
  __int64 v44; // rax

  if ( (unsigned int)this > 0x5D )
  {
    v27 = (_DWORD)this - 96;
    if ( v27 )
    {
      v28 = v27 - 9;
      if ( !v28 )
      {
        v43 = (DirectComposition::CRegionGeometryMarshaler *)Win32AllocPoolWithQuotaZInitImpl(0, 0x80uLL, 0x30734344u);
        v15 = v43;
        if ( v43 )
        {
          DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(v43);
          v15[15] = a2;
          *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`vftable';
          goto LABEL_67;
        }
        goto LABEL_66;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        v42 = Win32AllocPoolWithQuotaZInitImpl(0, 0x80uLL, 0x30734344u);
        v15 = (_QWORD *)v42;
        if ( !v42 )
          goto LABEL_66;
        *(_DWORD *)(v42 + 32) = 0;
        *(_QWORD *)(v42 + 48) = 0LL;
        *(_QWORD *)(v42 + 24) = 1LL;
        *(_DWORD *)(v42 + 36) = 106;
        *(_QWORD *)(v42 + 120) = a2;
        *(_DWORD *)(v42 + 20) = ~(_DWORD)v42 ^ 1;
        v20 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRemoteAppRenderTargetMarshaler,2>::`vftable';
        goto LABEL_65;
      }
      v30 = v29 - 31;
      if ( !v30 )
      {
        v41 = Win32AllocPoolWithQuotaZInitImpl(0, 0xE0uLL, 0x30734344u);
        v15 = (_QWORD *)v41;
        if ( v41 )
        {
          DirectComposition::CLightMarshaler::CLightMarshaler(v41, 137LL);
          v15[27] = a2;
          *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CSpotLightMarshaler,2>::`vftable';
          goto LABEL_67;
        }
        goto LABEL_66;
      }
      v31 = v30 - 19;
      if ( !v31 )
      {
        v40 = (DirectComposition::CVisualMarshaler *)Win32AllocPoolWithQuotaZInitImpl(0, 0x158uLL, 0x30734344u);
        v15 = v40;
        if ( !v40 )
          goto LABEL_66;
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v40);
        v22 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vftable';
        goto LABEL_26;
      }
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 2;
        if ( !v33 )
        {
          v38 = (DirectComposition::CVisualGroupMarshaler *)Win32AllocPoolWithQuotaZInitImpl(0, 0x58uLL, 0x30734344u);
          v15 = v38;
          if ( v38 )
          {
            DirectComposition::CVisualGroupMarshaler::CVisualGroupMarshaler(v38);
            v15[10] = a2;
            *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualGroupMarshaler,2>::`vftable';
            goto LABEL_67;
          }
          goto LABEL_66;
        }
        v34 = v33 - 2;
        if ( v34 )
        {
          if ( v34 != 1 )
            return 3221225485LL;
          v36 = Win32AllocPoolWithQuotaZInitImpl(1, 0x70uLL, 0x30734344u);
          v15 = (_QWORD *)v36;
          if ( !v36 )
            goto LABEL_66;
          *(_DWORD *)(v36 + 32) = 0;
          *(_QWORD *)(v36 + 48) = 0LL;
          *(_QWORD *)(v36 + 24) = 1LL;
          *(_DWORD *)(v36 + 36) = 162;
          *(_DWORD *)(v36 + 20) = ~(_DWORD)v36 ^ 1;
          v20 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualSurfaceMarshaler,2>::`vftable';
          goto LABEL_64;
        }
        v37 = Win32AllocPoolWithQuotaZInitImpl(0, 0x48uLL, 0x30734344u);
        v15 = (_QWORD *)v37;
        if ( !v37 )
          goto LABEL_66;
        *(_DWORD *)(v37 + 32) = 0;
        *(_QWORD *)(v37 + 48) = 0LL;
        *(_QWORD *)(v37 + 24) = 1LL;
        *(_DWORD *)(v37 + 36) = 161;
        *(_DWORD *)(v37 + 20) = ~(_DWORD)v37 ^ 1;
        v20 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::`vftable';
      }
      else
      {
        v39 = Win32AllocPoolWithQuotaZInitImpl(0, 0x48uLL, 0x30734344u);
        v15 = (_QWORD *)v39;
        if ( !v39 )
          goto LABEL_66;
        *(_DWORD *)(v39 + 32) = 0;
        *(_QWORD *)(v39 + 48) = 0LL;
        *(_QWORD *)(v39 + 24) = 1LL;
        *(_DWORD *)(v39 + 36) = 157;
        *(_DWORD *)(v39 + 20) = ~(_DWORD)v39 ^ 1;
        v20 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualBitmapMarshaler,2>::`vftable';
      }
LABEL_23:
      v15[8] = a2;
      goto LABEL_65;
    }
    v44 = Win32AllocPoolWithQuotaZInitImpl(0, 0x70uLL, 0x30734344u);
    v15 = (_QWORD *)v44;
    if ( !v44 )
      goto LABEL_66;
    *(_DWORD *)(v44 + 32) = 0;
    *(_QWORD *)(v44 + 48) = 0LL;
    *(_QWORD *)(v44 + 24) = 1LL;
    *(_DWORD *)(v44 + 36) = 96;
    *(_DWORD *)(v44 + 20) = ~(_DWORD)v44 ^ 1;
    v20 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CProjectedShadowCasterMarshaler,2>::`vftable';
LABEL_64:
    v15[13] = a2;
    goto LABEL_65;
  }
  if ( (_DWORD)this == 93 )
  {
    v26 = Win32AllocPoolWithQuotaZInitImpl(93, 0x50uLL, 0x30734344u);
    v15 = (_QWORD *)v26;
    if ( !v26 )
      goto LABEL_66;
    *(_DWORD *)(v26 + 32) = 0;
    *(_QWORD *)(v26 + 48) = 0LL;
    *(_QWORD *)(v26 + 24) = 1LL;
    *(_DWORD *)(v26 + 36) = 93;
    *(_QWORD *)(v26 + 72) = a2;
    *(_DWORD *)(v26 + 20) = ~(_DWORD)v26 ^ 1;
    v20 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CPrimitiveColorMarshaler,2>::`vftable';
LABEL_65:
    *v15 = v20;
    goto LABEL_67;
  }
  v6 = (_DWORD)this - 2;
  if ( !v6 )
  {
    v25 = Win32AllocPoolWithQuotaZInitImpl(0, 0x90uLL, 0x30734344u);
    v15 = (_QWORD *)v25;
    if ( !v25 )
      goto LABEL_66;
    DirectComposition::CLightMarshaler::CLightMarshaler(v25, 2LL);
    *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CAmbientLightMarshaler,2>::`vftable';
    goto LABEL_16;
  }
  v7 = v6 - 15;
  if ( !v7 )
  {
    v24 = (DirectComposition::CCaptureControllerMarshaler *)Win32AllocPoolWithQuotaZInitImpl(0, 0xA0uLL, 0x30734344u);
    v15 = v24;
    if ( !v24 )
      goto LABEL_66;
    DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(v24);
    *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::`vftable';
    goto LABEL_29;
  }
  v8 = v7 - 27;
  if ( !v8 )
  {
    v23 = Win32AllocPoolWithQuotaZInitImpl(0, 0xA0uLL, 0x30734344u);
    v15 = (_QWORD *)v23;
    if ( !v23 )
      goto LABEL_66;
    DirectComposition::CLightMarshaler::CLightMarshaler(v23, 44LL);
    *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CDistantLightMarshaler,2>::`vftable';
LABEL_29:
    v15[19] = a2;
    goto LABEL_67;
  }
  v9 = v8 - 21;
  if ( !v9 )
  {
    v21 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInitImpl(0, 0x158uLL, 0x30734344u);
    v15 = v21;
    if ( !v21 )
      goto LABEL_66;
    DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v21);
    v22 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::`vftable';
LABEL_26:
    *v15 = v22;
    v15[42] = a2;
    goto LABEL_67;
  }
  v10 = v9 - 7;
  if ( !v10 )
  {
    v19 = Win32AllocPoolWithQuotaZInitImpl(0, 0x48uLL, 0x30734344u);
    v15 = (_QWORD *)v19;
    if ( !v19 )
      goto LABEL_66;
    *(_DWORD *)(v19 + 32) = 0;
    *(_QWORD *)(v19 + 48) = 0LL;
    *(_QWORD *)(v19 + 24) = 1LL;
    *(_DWORD *)(v19 + 36) = 72;
    *(_DWORD *)(v19 + 20) = ~(_DWORD)v19 ^ 1;
    v20 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CLegacyAnimationTriggerMarshaler,2>::`vftable';
    goto LABEL_23;
  }
  v11 = v10 - 11;
  if ( !v11 )
  {
    v18 = (DirectComposition::CManipulationTransformMarshaler *)Win32AllocPoolWithQuotaZInitImpl(
                                                                  0,
                                                                  0x88uLL,
                                                                  0x30734344u);
    v15 = v18;
    if ( v18 )
    {
      DirectComposition::CManipulationTransformMarshaler::CManipulationTransformMarshaler(v18);
      v15[16] = a2;
      *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CManipulationTransformMarshaler,2>::`vftable';
      goto LABEL_67;
    }
    goto LABEL_66;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v17 = (DirectComposition::CMatrixTransformMarshaler *)Win32AllocPoolWithQuotaZInitImpl(0, 0x68uLL, 0x30734344u);
    v15 = v17;
    if ( v17 )
    {
      DirectComposition::CMatrixTransformMarshaler::CMatrixTransformMarshaler(v17);
      v15[12] = a2;
      *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransformMarshaler,2>::`vftable';
      goto LABEL_67;
    }
LABEL_66:
    v15 = 0LL;
    goto LABEL_67;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v16 = (DirectComposition::CMatrixTransform3DMarshaler *)Win32AllocPoolWithQuotaZInitImpl(0, 0x90uLL, 0x30734344u);
    v15 = v16;
    if ( !v16 )
      goto LABEL_66;
    DirectComposition::CMatrixTransform3DMarshaler::CMatrixTransform3DMarshaler(v16);
    *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransform3DMarshaler,2>::`vftable';
LABEL_16:
    v15[17] = a2;
    goto LABEL_67;
  }
  if ( v13 != 5 )
    return 3221225485LL;
  v14 = Win32AllocPoolWithQuotaZInitImpl(5, 0xB8uLL, 0x30734344u);
  v15 = (_QWORD *)v14;
  if ( !v14 )
    goto LABEL_66;
  DirectComposition::CLightMarshaler::CLightMarshaler(v14, 91LL);
  v15[22] = a2;
  *v15 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CPointLightMarshaler,2>::`vftable';
LABEL_67:
  *(_QWORD *)a3 = v15;
  return 0LL;
}
