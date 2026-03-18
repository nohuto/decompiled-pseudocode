/*
 * XREFs of ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x14004EBDC
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400502F8 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140053F68 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x140053FF4 (--0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1400540AC (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x140198138 (--0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::GeneratedCreateSharedWriteMarshaler(
        DirectComposition *this,
        __int64 a2,
        const struct DirectComposition::CSharedSystemResource *a3,
        struct DirectComposition::CResourceMarshaler **a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  DirectComposition::CRegionGeometryMarshaler *v10; // rax
  __int64 v11; // rbx
  void **v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  DirectComposition::CInteractionMarshaler *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  DirectComposition::CCaptureControllerMarshaler *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  DirectComposition::CVisualMarshaler *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax

  if ( (unsigned int)this > 0x6C )
  {
    v6 = (unsigned int)((_DWORD)this - 109);
    if ( (_DWORD)v6 )
    {
      v7 = (unsigned int)(v6 - 7);
      if ( !(_DWORD)v7 )
      {
        v42 = Win32AllocPoolWithQuotaZInitImpl(v7, 0x50uLL, 0x30734344u);
        v11 = v42;
        if ( v42 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v42, 116LL);
          v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CPrimitiveColorMarshaler,2>::`vftable';
          *(_QWORD *)(v11 + 72) = a2;
          goto LABEL_9;
        }
        goto LABEL_26;
      }
      v8 = (unsigned int)(v7 - 3);
      if ( !(_DWORD)v8 )
      {
        v30 = Win32AllocPoolWithQuotaZInitImpl(v8, 0x70uLL, 0x30734344u);
        v11 = v30;
        if ( v30 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v30, 119LL);
          v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CProjectedShadowCasterMarshaler,2>::`vftable';
          *(_QWORD *)(v11 + 104) = a2;
          goto LABEL_9;
        }
        goto LABEL_26;
      }
      v9 = (unsigned int)(v8 - 10);
      if ( !(_DWORD)v9 )
      {
        v10 = (DirectComposition::CRegionGeometryMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v9, 0x80uLL, 0x30734344u);
        v11 = (__int64)v10;
        if ( v10 )
        {
          DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(v10);
          v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`vftable';
LABEL_8:
          *(_QWORD *)(v11 + 120) = a2;
LABEL_9:
          *(_QWORD *)v11 = v12;
LABEL_10:
          *(_QWORD *)a3 = v11;
          return 0LL;
        }
        goto LABEL_26;
      }
      v25 = (unsigned int)(v9 - 1);
      if ( !(_DWORD)v25 )
      {
        v41 = Win32AllocPoolWithQuotaZInitImpl(v25, 0x80uLL, 0x30734344u);
        v11 = v41;
        if ( v41 )
        {
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v41, 130LL);
          v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRemoteAppRenderTargetMarshaler,2>::`vftable';
          *(_DWORD *)(v11 + 56) = 3;
          goto LABEL_8;
        }
        goto LABEL_26;
      }
      v26 = (unsigned int)(v25 - 52);
      if ( !(_DWORD)v26 )
      {
        v40 = (DirectComposition::CVisualMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v26, 0x178uLL, 0x30734344u);
        v11 = (__int64)v40;
        if ( v40 )
        {
          DirectComposition::CVisualMarshaler::CVisualMarshaler(v40);
          v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vftable';
          *(_QWORD *)(v11 + 368) = a2;
          goto LABEL_9;
        }
        goto LABEL_26;
      }
      v27 = (unsigned int)(v26 - 1);
      if ( (_DWORD)v27 )
      {
        v28 = (unsigned int)(v27 - 4);
        if ( (_DWORD)v28 )
        {
          if ( (_DWORD)v28 != 1 )
            return 3221225485LL;
          v31 = Win32AllocPoolWithQuotaZInitImpl(v28, 0x68uLL, 0x30734344u);
          v11 = v31;
          if ( !v31 )
            goto LABEL_26;
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v31, 188LL);
          v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualSurfaceMarshaler,2>::`vftable';
LABEL_40:
          *(_QWORD *)(v11 + 96) = a2;
          goto LABEL_9;
        }
        v39 = Win32AllocPoolWithQuotaZInitImpl(v28, 0x48uLL, 0x30734344u);
        v11 = v39;
        if ( !v39 )
          goto LABEL_26;
        DirectComposition::CResourceMarshaler::CResourceMarshaler(v39, 187LL);
        v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::`vftable';
      }
      else
      {
        v24 = Win32AllocPoolWithQuotaZInitImpl(v27, 0x48uLL, 0x30734344u);
        v11 = v24;
        if ( !v24 )
          goto LABEL_26;
        DirectComposition::CResourceMarshaler::CResourceMarshaler(v24, 183LL);
        v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualBitmapMarshaler,2>::`vftable';
      }
LABEL_44:
      *(_QWORD *)(v11 + 64) = a2;
      goto LABEL_9;
    }
    v43 = Win32AllocPoolWithQuotaZInitImpl(v6, 0x90uLL, 0x30734344u);
    v11 = v43;
    if ( !v43 )
      goto LABEL_26;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v43, 109LL);
    v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransform3DMarshaler,2>::`vftable';
LABEL_35:
    *(_QWORD *)(v11 + 136) = a2;
    goto LABEL_9;
  }
  if ( (_DWORD)this == 108 )
  {
    v38 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x68uLL, 0x30734344u);
    v11 = v38;
    if ( !v38 )
      goto LABEL_26;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v38, 108LL);
    v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransformMarshaler,2>::`vftable';
    goto LABEL_40;
  }
  v14 = (unsigned int)((_DWORD)this - 19);
  if ( !(_DWORD)v14 )
  {
    v37 = (DirectComposition::CCaptureControllerMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v14, 0x98uLL, 0x30734344u);
    v11 = (__int64)v37;
    if ( v37 )
    {
      DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(v37);
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::`vftable';
      *(_QWORD *)(v11 + 144) = a2;
      goto LABEL_9;
    }
    goto LABEL_26;
  }
  v15 = (unsigned int)(v14 - 13);
  if ( !(_DWORD)v15 )
  {
    v36 = Win32AllocPoolWithQuotaZInitImpl(v15, 0x80uLL, 0x30734344u);
    v11 = v36;
    if ( v36 )
    {
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v36, 32LL);
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionAmbientLightMarshaler,2>::`vftable';
      goto LABEL_8;
    }
LABEL_26:
    v11 = 0LL;
    goto LABEL_10;
  }
  v16 = (unsigned int)(v15 - 1);
  if ( !(_DWORD)v16 )
  {
    v29 = Win32AllocPoolWithQuotaZInitImpl(v16, 0x90uLL, 0x30734344u);
    v11 = v29;
    if ( !v29 )
      goto LABEL_26;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v29, 33LL);
    v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionDistantLightMarshaler,2>::`vftable';
    goto LABEL_35;
  }
  v17 = (unsigned int)(v16 - 5);
  if ( !(_DWORD)v17 )
  {
    v35 = Win32AllocPoolWithQuotaZInitImpl(v17, 0xA8uLL, 0x30734344u);
    v11 = v35;
    if ( v35 )
    {
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v35, 38LL);
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionPointLightMarshaler,2>::`vftable';
      *(_QWORD *)(v11 + 160) = a2;
      goto LABEL_9;
    }
    goto LABEL_26;
  }
  v18 = (unsigned int)(v17 - 2);
  if ( !(_DWORD)v18 )
  {
    v34 = Win32AllocPoolWithQuotaZInitImpl(v18, 0xD0uLL, 0x30734344u);
    v11 = v34;
    if ( v34 )
    {
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v34, 40LL);
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionSpotLightMarshaler,2>::`vftable';
      *(_QWORD *)(v11 + 200) = a2;
      goto LABEL_9;
    }
    goto LABEL_26;
  }
  v19 = (unsigned int)(v18 - 39);
  if ( !(_DWORD)v19 )
  {
    v33 = Win32AllocPoolWithQuotaZInitImpl(v19, 0x68uLL, 0x30734344u);
    v11 = v33;
    if ( !v33 )
      goto LABEL_26;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v33, 79LL);
    *(_DWORD *)(v11 + 16) |= 0x20u;
    v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CHolographicInteropTextureMarshaler,2>::`vftable';
    goto LABEL_40;
  }
  v20 = (unsigned int)(v19 - 9);
  if ( !(_DWORD)v20 )
  {
    v23 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v20, 0x158uLL, 0x30734344u);
    v11 = (__int64)v23;
    if ( v23 )
    {
      DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v23);
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::`vftable';
      *(_QWORD *)(v11 + 336) = a2;
      goto LABEL_9;
    }
    goto LABEL_26;
  }
  v21 = (unsigned int)(v20 - 5);
  if ( !(_DWORD)v21 )
  {
    v32 = Win32AllocPoolWithQuotaZInitImpl(v21, 0x48uLL, 0x30734344u);
    v11 = v32;
    if ( !v32 )
      goto LABEL_26;
    DirectComposition::CResourceMarshaler::CResourceMarshaler(v32, 93LL);
    v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CLegacyAnimationTriggerMarshaler,2>::`vftable';
    goto LABEL_44;
  }
  if ( (_DWORD)v21 == 12 )
  {
    v22 = Win32AllocPoolWithQuotaZInitImpl(v21, 0x88uLL, 0x30734344u);
    v11 = v22;
    if ( v22 )
    {
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v22, 105LL);
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CManipulationTransformMarshaler,2>::`vftable';
      *(_QWORD *)(v11 + 128) = a2;
      goto LABEL_9;
    }
    goto LABEL_26;
  }
  return 3221225485LL;
}
