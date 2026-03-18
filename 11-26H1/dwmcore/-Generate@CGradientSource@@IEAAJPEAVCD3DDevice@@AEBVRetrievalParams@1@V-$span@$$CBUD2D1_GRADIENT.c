/*
 * XREFs of ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180103060
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180103FE0 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800371A4 (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x180102424 (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
 *     ?GenerateGradientPixels@CD2DFactory@@QEAAJPEBUD2D1_GRADIENT_STOP@@IW4D2D1_GRADIENT_PIXEL_USAGE@@W4D2D1_COLOR_SPACE@@22W4D2D1_EXTEND_MODE@@W4D2D1_COLOR_INTERPOLATION_MODE@@W4DXGI_FORMAT@@PEAXI@Z @ 0x180103430 (-GenerateGradientPixels@CD2DFactory@@QEAAJPEBUD2D1_GRADIENT_STOP@@IW4D2D1_GRADIENT_PIXEL_USAGE@@.c)
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x1801034C4 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180103854 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ?Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z @ 0x180104584 (-Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801B56D8 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientSource::Generate(
        struct IAtlasEntryOwner *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        unsigned int a8)
{
  _QWORD *v8; // rax
  unsigned int v12; // edi
  int v13; // eax
  struct CD2DBrush *v14; // rbx
  int GradientPixels; // eax
  __int64 v16; // r8
  struct CAtlasBitmapResource *v17; // rsi
  int v18; // eax
  _QWORD *v19; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  struct CD2DBrush *v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rdx
  struct ID2D1Brush *v28; // rsi
  int v29; // eax
  struct ID2D1Brush *v30; // rdx
  struct CAtlasBitmapResource *v31; // [rsp+60h] [rbp-59h] BYREF
  struct CD2DBrush *v32; // [rsp+68h] [rbp-51h] BYREF
  struct ID2D1Brush *v33[2]; // [rsp+70h] [rbp-49h] BYREF
  struct IAtlasEntryOwner *v34; // [rsp+80h] [rbp-39h] BYREF
  __int128 v35; // [rsp+88h] [rbp-31h] BYREF
  __int128 v36; // [rsp+98h] [rbp-21h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-11h]

  v8 = *(_QWORD **)a3;
  v34 = a1;
  v12 = 0;
  if ( !v8 || *v8 )
  {
LABEL_9:
    v19 = *(_QWORD **)(a3 + 8);
    if ( !v19 || *v19 )
      return v12;
    *(_OWORD *)v33 = *(_OWORD *)a4;
    *(_QWORD *)&v35 = 0LL;
    v32 = 0LL;
    v31 = 0LL;
    v21 = CD2DContext::CreateGradientStopCollection(a2 + 16, (unsigned int *)v33, a5, a8, &v31);
    v12 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xBEu, 0LL);
    }
    else
    {
      v22 = *(_QWORD *)(a2 + 216);
      v33[0] = 0LL;
      if ( a7 )
      {
        v35 = 0LL;
        v23 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, struct CAtlasBitmapResource *, struct ID2D1Brush **))(*(_QWORD *)v22 + 80LL))(
                v22,
                &v35,
                0LL,
                v31,
                v33);
        v12 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xCAu, 0LL);
          if ( v33[0] )
            (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v33[0] + 16LL))(v33[0]);
          goto LABEL_22;
        }
        v28 = v33[0];
        *(struct ID2D1Brush **)&v35 = v33[0];
      }
      else
      {
        v37 = 0LL;
        v36 = 0LL;
        v29 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, struct CAtlasBitmapResource *, struct ID2D1Brush **))(*(_QWORD *)v22 + 88LL))(
                v22,
                &v36,
                0LL,
                v31,
                v33);
        v12 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0xD7u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v33);
          goto LABEL_33;
        }
        v30 = v33[0];
        v33[0] = 0LL;
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(&v35, v30);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v33);
        v28 = (struct ID2D1Brush *)v35;
      }
      v24 = CD2DBrush::Create(*(struct CD2DResourceManager **)(a2 + 184), v28, &v32);
      v12 = v24;
      if ( v24 >= 0 )
      {
        v25 = v32;
        v26 = (__int64)v34;
        (*(void (__fastcall **)(struct CD2DBrush *, unsigned __int64))(*(_QWORD *)v32 + 72LL))(
          v32,
          ((unsigned __int64)v34 + 8) & -(__int64)(v34 != 0LL));
        v32 = 0LL;
        v27 = (__int64)(*(_QWORD *)(v26 + 32) - *(_QWORD *)(v26 + 24)) >> 3;
        v34 = 0LL;
        *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                     v26 + 24,
                     v27) = v25;
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
        **(_QWORD **)(a3 + 8) = v28;
        goto LABEL_22;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xDCu, 0LL);
    }
LABEL_33:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
    return v12;
  }
  v31 = 0LL;
  v13 = CAtlasBitmapResource::Create(a1, (struct CD3DDevice *)a2, &v31);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x92u, 0LL);
    goto LABEL_22;
  }
  v32 = (struct CD2DBrush *)MIDL_user_allocate(0x2000uLL);
  v14 = v32;
  if ( !v32 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x98u, 0LL);
    goto LABEL_12;
  }
  GradientPixels = CD2DFactory::GenerateGradientPixels(a8, *((_QWORD *)a4 + 1), *a4, a7 ^ 1u);
  v12 = GradientPixels;
  if ( GradientPixels >= 0 )
  {
    gsl::details::extent_type<-1>::extent_type<-1>(v33, 0x2000LL);
    if ( v33[0] == (struct ID2D1Brush *)-1LL )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v17 = v31;
    LOBYTE(v16) = a6;
    v33[1] = v14;
    v18 = CAtlasBitmapResource::Update(v31, v33, v16);
    v12 = v18;
    if ( v18 >= 0 )
    {
      wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)v34 + 2, (__int64)v17);
      **(_QWORD **)a3 = v17;
      operator delete(v14);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xA7u, 0LL);
LABEL_12:
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v32);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
    return v12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, GradientPixels, 0xA4u, 0LL);
  operator delete(v14);
LABEL_22:
  if ( v31 )
    (*(void (__fastcall **)(struct CAtlasBitmapResource *))(*(_QWORD *)v31 + 16LL))(v31);
  return v12;
}
