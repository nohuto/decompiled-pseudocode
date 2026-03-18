/*
 * XREFs of ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4
 * Callers:
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005D0FC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z @ 0x1800C84F8 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransfor.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x1800E8CE8 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800F8ECC (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCV.c)
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x1800F94F4 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@MMW4Enum@CompositionResamp.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18024FD1C (-Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x18025041C (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEB.c)
 *     ?Create@CSuperSampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18025069C (-Create@CSuperSampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2D_R.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z @ 0x180250EF8 (-Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F4DDC (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800F4F48 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800F50E4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800F588C (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F680C (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F7AD0 (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalLayer::CreateBitmap(
        struct CResourceTag *a1,
        UINT32 *a2,
        struct PixelFormatInfo *a3,
        struct RenderTargetInfo *a4,
        int a5,
        __int64 *a6)
{
  UINT32 *v6; // rdi
  UINT32 *v8; // rbx
  __int64 v9; // rsi
  UINT32 v10; // r13d
  UINT32 v11; // eax
  struct CScratchRenderTargetBitmap *v12; // rbx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // r12d
  __int64 v17; // rcx
  struct CScratchRenderTargetBitmap *v18; // rbx
  __int64 v19; // r8
  __int64 *v20; // r15
  float v21; // xmm6_4
  char v22; // al
  int v23; // eax
  float v24; // xmm7_4
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  unsigned int v32; // eax
  float v33; // xmm1_4
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 i; // r9
  struct PixelFormatInfo *v37; // r14
  unsigned int v38; // esi
  unsigned int v39; // esi
  struct RenderTargetInfo *v40; // r14
  unsigned int v41; // esi
  float v42; // xmm6_4
  signed int width; // r13d
  __int64 (__fastcall ***v44)(_QWORD, GUID *, struct D2D_SIZE_U *); // r9
  char v45; // si
  struct D2D_SIZE_U v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rax
  int v52; // eax
  struct CScratchRenderTargetBitmap *v53; // rbx
  int v54; // eax
  __int64 v55; // r8
  int v56; // edx
  UINT32 v57; // ecx
  UINT32 v58; // ecx
  UINT32 v59; // edx
  __int64 v60; // r8
  UINT32 v61; // ecx
  int v62; // r9d
  CD3DDevice *v63; // rcx
  int v64; // [rsp+20h] [rbp-E0h]
  int v65; // [rsp+30h] [rbp-D0h] BYREF
  struct CScratchRenderTargetBitmap *v66; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v67; // [rsp+40h] [rbp-C0h] BYREF
  char v68; // [rsp+48h] [rbp-B8h]
  bool v69; // [rsp+49h] [rbp-B7h]
  unsigned int v70; // [rsp+50h] [rbp-B0h] BYREF
  int v71; // [rsp+58h] [rbp-A8h] BYREF
  struct D2D_SIZE_U v72; // [rsp+60h] [rbp-A0h] BYREF
  struct D2D_SIZE_U v73; // [rsp+68h] [rbp-98h] BYREF
  struct PixelFormatInfo *v74; // [rsp+70h] [rbp-90h]
  struct RenderTargetInfo *v75; // [rsp+78h] [rbp-88h]
  struct CResourceTag *v76; // [rsp+80h] [rbp-80h]
  UINT32 *v77; // [rsp+88h] [rbp-78h]
  __int64 *v78; // [rsp+90h] [rbp-70h]
  int v79; // [rsp+98h] [rbp-68h] BYREF
  __int64 v80; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+B0h] [rbp-50h] BYREF
  struct D2D_SIZE_U *v82; // [rsp+C0h] [rbp-40h]
  __int64 v83; // [rsp+C8h] [rbp-38h]
  unsigned int *v84; // [rsp+D0h] [rbp-30h]
  __int64 v85; // [rsp+D8h] [rbp-28h]
  int *v86; // [rsp+E0h] [rbp-20h]
  __int64 v87; // [rsp+E8h] [rbp-18h]
  unsigned int *v88; // [rsp+F0h] [rbp-10h]
  __int64 v89; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v6 = a2 + 3;
  v75 = a4;
  v74 = a3;
  v77 = a2;
  v8 = a2 + 2;
  *a6 = 0LL;
  v9 = 0LL;
  v76 = a1;
  v78 = a6;
  v73 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v55 = a2[1];
    v56 = *a2;
    v57 = *v6;
    v82 = (struct D2D_SIZE_U *)&v65;
    v71 = v55 + v57;
    v58 = *v8;
    v84 = &v70;
    v67 = v56 + v58;
    v86 = (int *)&v67;
    v65 = v56;
    v88 = (unsigned int *)&v71;
    v70 = v55;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start,
      v55,
      5u,
      &v81);
  }
  v10 = *v8;
  v11 = *v6;
  v67 = v10;
  v72.width = v10;
  v70 = v11;
  v72.height = v11;
  v66 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v66);
  v12 = *(struct CScratchRenderTargetBitmap **)a4;
  v66 = *(struct CScratchRenderTargetBitmap **)a4;
  v13 = 0;
  EnterCriticalSection(&CriticalSection);
  v14 = qword_1803DE688;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = -2003304307;
    if ( v14 == (_QWORD)xmmword_1803DE690 )
    {
      v18 = 0LL;
      goto LABEL_34;
    }
    v17 = *(_QWORD *)v14;
    if ( __PAIR64__(HIDWORD(v66), (unsigned int)v12) == *(_QWORD *)(*(_QWORD *)v14 + 944LL) )
      break;
    v14 += 16LL;
  }
  v18 = 0LL;
  if ( *(_DWORD *)(v17 + 1124) )
  {
LABEL_34:
    v13 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3DB8, 2u, -2003304307, 0x133u, 0LL);
    goto LABEL_9;
  }
  v15 = *(_QWORD *)v14;
  if ( _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v64);
LABEL_9:
  LeaveCriticalSection(&CriticalSection);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x21u, 0LL);
    goto LABEL_87;
  }
  if ( *(_DWORD *)(v15 + 1124) )
  {
    v13 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3DB0, 2u, -2003304307, 0x455u, 0LL);
    goto LABEL_77;
  }
  if ( !a5 )
  {
    v66 = 0LL;
    v52 = CD3DDevice::CreateDeviceTextureTarget((CD3DDevice *)v15, v76, &v72, v74, a4, &v66);
    v13 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3DB0, 2u, v52, 0x467u, 0LL);
      if ( v66 )
        (*(void (__fastcall **)(struct CScratchRenderTargetBitmap *))(*(_QWORD *)v66 + 16LL))(v66);
    }
    else
    {
      v53 = v66;
      v54 = CRenderTargetBitmap::Create(v66, (struct IRenderTargetBitmap **)&v73);
      v13 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3DB0, 2u, v54, 0x46Au, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v66);
        v9 = (__int64)v73;
      }
      else
      {
        if ( v53 )
          (*(void (__fastcall **)(struct CScratchRenderTargetBitmap *))(*(_QWORD *)v53 + 16LL))(v53);
        v9 = (__int64)v73;
      }
    }
    goto LABEL_77;
  }
  v20 = (__int64 *)(v15 + 456);
  v21 = FLOAT_3_4028235e38;
  v73 = v72;
  v72.width = 0;
  v22 = *((_BYTE *)v75 + 20);
  v69 = ((a5 - 2) & 0xFFFFFFFD) == 0;
  v68 = v22;
  v71 = *(_DWORD *)v74;
  v23 = *(_DWORD *)(v15 + 480);
  v24 = 1.0 / (float)(int)(((v10 + 63) & 0xFFFFFFC0) * ((v70 + 63) & 0xFFFFFFC0));
  while ( 2 )
  {
    v65 = v23;
    if ( v23 )
    {
      v25 = *(_QWORD *)(*v20 + 8LL * (unsigned int)(v23 - 1));
      v26 = *(_QWORD *)(v25 + 120);
      if ( v26 && (*(int (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26) >= 0 )
      {
        v27 = *(_QWORD *)(v25 + 120);
        if ( v27 )
        {
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v27 + 8) + 24LL))(v27 + 8, &v79);
          v28 = v79;
        }
        else
        {
          v79 = 0;
          v28 = 0;
          v80 = 3LL;
        }
        if ( v71 == v28 )
        {
          v29 = *(_QWORD *)(v25 + 120);
          v30 = v29 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 56LL))(v29);
          if ( v68 == v30 )
          {
            v31 = *(_QWORD *)(v25 + 120);
            if ( v31 )
            {
              (*(void (__fastcall **)(__int64, struct CScratchRenderTargetBitmap **))(*(_QWORD *)v31 + 88LL))(v31, &v66);
              v32 = HIDWORD(v66);
              LODWORD(v31) = (_DWORD)v66;
            }
            else
            {
              v66 = 0LL;
              v32 = 0;
            }
            v10 = v67;
            if ( v69 )
            {
              if ( (_DWORD)v31 == v67 && v32 == v70 )
              {
                v18 = (struct CScratchRenderTargetBitmap *)v25;
                break;
              }
            }
            else if ( (unsigned int)v31 >= v67 && v32 >= v70 )
            {
              v33 = (float)(int)(v31 * v32);
              if ( (float)(v33 * v24) < 4.0 && v21 > v33 )
              {
                v21 = (float)(int)(v31 * v32);
                v18 = (struct CScratchRenderTargetBitmap *)v25;
              }
            }
            goto LABEL_31;
          }
        }
      }
      else
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v15 + 456);
        *(_BYTE *)(v25 + 144) = 0;
        if ( v25 )
          CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v25);
      }
      v10 = v67;
LABEL_31:
      v23 = v65 - 1;
      continue;
    }
    break;
  }
  if ( v18 )
  {
    v34 = *(_DWORD *)(v15 + 480);
    v35 = 0LL;
    for ( i = *v20; (unsigned int)v35 < v34; v35 = (unsigned int)(v35 + 1) )
    {
      if ( v18 == *(struct CScratchRenderTargetBitmap **)(i + 8 * v35) )
        break;
    }
    if ( (unsigned int)v35 < v34 )
    {
      while ( (unsigned int)v35 < v34 - 1 )
      {
        *(_QWORD *)(i + 8 * v35) = *(_QWORD *)(i + 8LL * (unsigned int)(v35 + 1));
        v35 = (unsigned int)(v35 + 1);
        v34 = *(_DWORD *)(v15 + 480);
      }
      *(_DWORD *)(v15 + 480) = v34 - 1;
    }
    v37 = v74;
    v38 = *((_DWORD *)v74 + 1);
    if ( v38 != *(_DWORD *)((*(__int64 (__fastcall **)(__int64, int *, __int64, __int64))(*(_QWORD *)(*((_QWORD *)v18 + 15) + 8LL)
                                                                                        + 24LL))(
                              *((_QWORD *)v18 + 15) + 8LL,
                              &v79,
                              v19,
                              i)
                          + 4) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v18 + 15) + 16LL) + 136LL))(
        *((_QWORD *)v18 + 15) + 16LL,
        v38);
      CRenderTargetBitmap::ResetBitmapCache(v18);
    }
    v39 = *((_DWORD *)v37 + 2);
    if ( v39 != *(_DWORD *)((*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*((_QWORD *)v18 + 15) + 8LL) + 24LL))(
                              *((_QWORD *)v18 + 15) + 8LL,
                              &v79)
                          + 8) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v18 + 15) + 16LL) + 144LL))(
        *((_QWORD *)v18 + 15) + 16LL,
        v39);
      CRenderTargetBitmap::ResetBitmapCache(v18);
    }
    v40 = v75;
    v41 = *((_DWORD *)v75 + 2);
    if ( v41 != *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v18 + 15) + 96LL))(
                             *((_QWORD *)v18 + 15),
                             &v71) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v18 + 15) + 16LL) + 152LL))(
        *((_QWORD *)v18 + 15) + 16LL,
        v41);
      CRenderTargetBitmap::ResetBitmapCache(v18);
    }
    v42 = *((float *)v40 + 4);
    if ( v42 != *(float *)((*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*((_QWORD *)v18 + 15) + 16LL) + 120LL))(
                             *((_QWORD *)v18 + 15) + 16LL,
                             &v79)
                         + 16) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v18 + 15) + 16LL) + 160LL))(*((_QWORD *)v18 + 15) + 16LL);
      CRenderTargetBitmap::ResetBitmapCache(v18);
    }
    CD2DBitmapCache::MarkFullInvalid(v18);
    width = v72.width;
LABEL_61:
    v44 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct D2D_SIZE_U *))*((_QWORD *)v18 + 15);
    v45 = (unsigned int)(a5 - 1) <= 1;
    v46 = 0LL;
    v72 = 0LL;
    if ( v44 )
    {
      v47 = (**v44)(v44, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v72);
      v46 = v72;
      if ( v47 >= 0 )
      {
        v48 = (*(__int64 (__fastcall **)(struct D2D_SIZE_U, _QWORD))(**(_QWORD **)&v72 + 120LL))(v72, 0LL);
        (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v48 + 40LL))(
          v48,
          &WKPDID_D3DDebugObjectName,
          *((unsigned int *)v76 + 2),
          *(_QWORD *)v76);
        v46 = v72;
      }
    }
    if ( *((_BYTE *)v18 + 145) != v45 )
    {
      *((_BYTE *)v18 + 145) = v45;
      *((_BYTE *)v18 + 128) = v45;
      CRenderTargetBitmap::ResetBitmapCache(v18);
      v46 = v72;
    }
    if ( v46 )
      (*(void (__fastcall **)(struct D2D_SIZE_U))(**(_QWORD **)&v46 + 16LL))(v46);
    if ( *((_BYTE *)v18 + 145) )
      ++*(_DWORD *)(v15 + 496);
    v9 = ((unsigned __int64)v18 + 80) & -(__int64)(v18 != 0LL);
    goto LABEL_71;
  }
  v66 = 0LL;
  if ( ((a5 - 2) & 0xFFFFFFFD) != 0 )
  {
    v73.width = (v10 + 63) & 0xFFFFFFC0;
    v73.height = (v73.height + 63) & 0xFFFFFFC0;
  }
  v63 = (CD3DDevice *)v15;
  if ( v15 == -456 )
    v63 = 0LL;
  v66 = 0LL;
  v49 = CD3DDevice::CreateScratchRenderTargetBitmap(v63, &v73, v74, v75, &v66);
  width = v49;
  v13 = v49;
  if ( v49 >= 0 )
  {
    v18 = v66;
    goto LABEL_61;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x3Eu, 0LL);
  if ( v66 )
  {
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v66);
LABEL_76:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3DB0, 2u, width, 0x45Eu, 0LL);
  }
  else
  {
LABEL_71:
    v13 = width;
    if ( width < 0 )
      goto LABEL_76;
  }
LABEL_77:
  if ( *(_DWORD *)(v15 + 1124)
    || v13 != -2005532292 && v13 != -2147024882 && v13 != -2005270523
    || !*(_DWORD *)(v15 + 440) )
  {
    goto LABEL_81;
  }
  if ( v13 != -2005270523 )
    goto LABEL_112;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 544) + 312LL))(*(_QWORD *)(v15 + 544)) != -2005270480 )
  {
    if ( *(_DWORD *)(v15 + 1124) )
    {
LABEL_103:
      v13 = -2003304307;
LABEL_104:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x28u, 0LL);
      goto LABEL_87;
    }
    *(_DWORD *)(v15 + 1124) = -2005270523;
LABEL_102:
    if ( !*(_DWORD *)(v15 + 1124) )
      goto LABEL_82;
    goto LABEL_103;
  }
  if ( !*(_DWORD *)(v15 + 1124) )
    *(_DWORD *)(v15 + 1124) = -2005270480;
LABEL_112:
  CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v15 + 16));
LABEL_81:
  if ( v13 < 0 )
    goto LABEL_102;
LABEL_82:
  v65 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v13, 0, &v65) )
  {
    v62 = v65;
    if ( v65 == -2003304307 )
    {
      if ( v13 >= 0 )
        v13 = -2003304307;
      if ( !*(_DWORD *)(v15 + 1124) )
        *(_DWORD *)(v15 + 1124) = v13;
    }
    v13 = v62;
    if ( v62 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v62, 0xB71u, 0LL);
  }
  v16 = v13;
  if ( v13 < 0 )
    goto LABEL_104;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v82 = &v72;
    v84 = (unsigned int *)&v71;
    v86 = &v65;
    v59 = *v77;
    v60 = v77[1];
    v70 = v60 + v77[3];
    v61 = v77[2];
    v88 = &v70;
    v65 = v59 + v61;
    v72.width = v59;
    v71 = v60;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
      v60,
      5u,
      &v81);
  }
  v50 = v9;
  v9 = 0LL;
  *v78 = v50;
LABEL_87:
  if ( v15 )
    CD3DDevice::Release((CD3DDevice *)v15);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v13;
}
