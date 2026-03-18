/*
 * XREFs of ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x18022F230
 * Callers:
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x180280E00 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800D3DB0 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180128D84 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$map@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCResource@@@Z @ 0x1801714E8 (--$_Try_emplace@AEBQEAVCResource@@$$V@-$map@PEAVCResource@@V-$com_ptr_t@UISpectreTexture@@Uerr_r.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x180196E9C (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneResourceManager::GetSpectreTexture(
        CSceneResourceManager *this,
        struct CResource *a2,
        struct ISpectreTexture **a3)
{
  unsigned int v5; // ebx
  int v6; // ebx
  int CVIForRealizationSize; // eax
  CDisplayManager *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct CCachedVisualImage *v11; // rdi
  __int64 (__fastcall *v12)(char *, _BYTE *, __int64 *); // rbx
  int v13; // eax
  struct ISpectreRenderer *SpectreRenderer; // rsi
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(struct ISpectreRenderer *, __int64, __int64, struct ISpectreTexture **); // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 result; // rax
  struct CCachedVisualImage *v22; // [rsp+30h] [rbp-40h] BYREF
  struct ISpectreTexture *v23; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_VECTOR_2F v24; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v25[24]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF

  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 162LL) )
  {
    v22 = 0LL;
    v6 = *(_DWORD *)(*((_QWORD *)this + 4) + 968LL);
    v24 = *(struct D2D_VECTOR_2F *)((char *)a2 + (*((_BYTE *)a2 + 204) != 0 ? 8 : 0) + 184);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
    CVIForRealizationSize = CVisualSurface::GetCVIForRealizationSize(
                              a2,
                              v6,
                              (struct CCachedVisualImage ***)&v24,
                              &v24,
                              &v22);
    v5 = CVIForRealizationSize;
    if ( CVIForRealizationSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CVIForRealizationSize, 0xFAu, 0LL);
    }
    else
    {
      CDisplayManager::GetPrimaryAdapterLuid(v8, v25);
      *(_DWORD *)&v25[8] = -1;
      *(_WORD *)&v25[21] = 0;
      v25[23] = 0;
      *(_QWORD *)&v25[12] = 0LL;
      v25[20] = 0;
      v9 = **((_QWORD **)g_pComposition + 77);
      if ( v9 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, struct D2D_VECTOR_2F *))(*(_QWORD *)(v9 + 8) + 24LL))(v9 + 8, &v24);
        *(_OWORD *)v25 = *(_OWORD *)v10;
        *(_QWORD *)&v25[16] = *(_QWORD *)(v10 + 16);
      }
      v11 = v22;
      v27 = 0LL;
      v12 = *(__int64 (__fastcall **)(char *, _BYTE *, __int64 *))(*((_QWORD *)v22 + 10) + 112LL);
      wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v27);
      v13 = v12((char *)v11 + 80, v25, &v27);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x108u, 0LL);
      }
      else
      {
        SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
        v15 = *(_QWORD *)SpectreRenderer;
        v23 = 0LL;
        v16 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64, __int64, struct ISpectreTexture **))(v15 + 88);
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 128LL))(v27);
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 120LL))(v27, 0LL);
        v19 = v16(SpectreRenderer, v18, v17, &v23);
        v5 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x10Fu, 0LL);
        }
        else
        {
          v20 = std::map<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>::_Try_emplace<CResource * const &,>(
                  (_QWORD *)this + 8,
                  (__int64)&v24);
          wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
            (__int64 *)(*(_QWORD *)v20 + 40LL),
            (__int64 *)&v23);
          *a3 = v23;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    return v5;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 29LL) )
    return v5;
  result = 0LL;
  *a3 = (struct ISpectreTexture *)*((_QWORD *)a2 + 19);
  return result;
}
