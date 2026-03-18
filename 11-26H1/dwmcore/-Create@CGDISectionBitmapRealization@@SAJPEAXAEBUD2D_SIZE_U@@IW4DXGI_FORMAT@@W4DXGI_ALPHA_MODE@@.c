/*
 * XREFs of ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x180129538
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18004AB78 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18012A06C (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGDISectionBitmapRealization::Create(
        void *a1,
        const struct D2D_SIZE_U *a2,
        int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        unsigned __int8 **a6,
        struct IGDIBitmapRealization **a7)
{
  UINT32 height; // eax
  UINT32 width; // r13d
  _QWORD *v13; // rbx
  int v14; // edi
  unsigned int v15; // eax
  _DWORD v17[18]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-29h]
  __m128i si128; // [rsp+B8h] [rbp-21h]
  enum DXGI_ALPHA_MODE v20; // [rsp+148h] [rbp+6Fh]

  *a6 = 0LL;
  *a7 = 0LL;
  memset_0(v17, 0, 0x90uLL);
  v17[0] = a5;
  height = a2->height;
  v17[12] = 0;
  width = a2->width;
  v20 = height;
  v18 = 1065353216LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = operator new(0x1A0uLL);
  if ( v13 )
  {
    CBitmapRealization::CBitmapRealization(v13, 0LL);
    v13[43] = 0LL;
    v13[44] = a1;
    *((_DWORD *)v13 + 90) = width;
    *((_DWORD *)v13 + 91) = v20;
    *((_DWORD *)v13 + 92) = a3;
    *((_DWORD *)v13 + 93) = a4;
    *v13 = &CGDISectionBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    v13[2] = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
    v13[10] = &CGDISectionBitmapRealization::`vftable'{for `IBitmapRealization'};
    v13[11] = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
    v13[41] = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
    v13[42] = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
    v13[49] = &CGDISectionBitmapRealization::`vftable';
    v13[47] = 0LL;
    *((_BYTE *)v13 + 384) = 1;
    *((_OWORD *)v13 + 25) = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
    a1 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 72LL))(v13);
    if ( v14 >= 0 )
    {
      *a6 = (unsigned __int8 *)v13[47];
      *a7 = (struct IGDIBitmapRealization *)((unsigned __int64)(v13 + 49) & -(__int64)(v13 != 0LL));
      return (unsigned int)v14;
    }
    v15 = 55;
  }
  else
  {
    v13 = 0LL;
    v14 = -2147024882;
    v15 = 50;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v15, 0LL);
  if ( a1 )
    CloseHandle(a1);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  return (unsigned int)v14;
}
