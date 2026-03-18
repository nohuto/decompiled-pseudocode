/*
 * XREFs of ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800133E8
 * Callers:
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180013320 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AF200 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800132C0 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1800136F0 (-IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180013714 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180014CA0 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005EFCC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800F50E4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?GetDefaultDXGIColorSpaceForFormat@@YA?AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z @ 0x1800F7118 (-GetDefaultDXGIColorSpaceForFormat@@YA-AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z.c)
 *     ?GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ @ 0x1801BC650 (-GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  bool v1; // zf
  __int128 v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // rax
  __int64 v6; // rax
  bool IsHardwareProtected; // al
  enum DXGI_COLOR_SPACE_TYPE v8; // ecx
  enum DXGI_FORMAT v9; // ecx
  enum DXGI_COLOR_SPACE_TYPE DefaultDXGIColorSpaceForFormat; // eax
  CDecodeBitmap *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // ebx
  __int64 v15; // rsi
  CD2DBitmapCache *v16; // r14
  int v18; // eax
  __int64 v19; // rdx
  struct D2D_SIZE_U v20; // [rsp+48h] [rbp-79h] BYREF
  __m128i v21; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v22[20]; // [rsp+68h] [rbp-59h] BYREF
  bool v23; // [rsp+7Ch] [rbp-45h]
  __int16 v24; // [rsp+7Dh] [rbp-44h]
  char v25; // [rsp+7Fh] [rbp-42h]
  _BYTE v26[64]; // [rsp+88h] [rbp-39h] BYREF
  int v27; // [rsp+C8h] [rbp+7h]
  __m128i v28; // [rsp+D8h] [rbp+17h] BYREF
  __int128 v29; // [rsp+E8h] [rbp+27h] BYREF

  v1 = (*((_DWORD *)this + 60) & 0x4000) == 0;
  v28 = 0LL;
  v29 = 0LL;
  v20 = 0LL;
  if ( v1 )
  {
    v3 = *(_OWORD *)((char *)this + 156);
    v20.width = *((_DWORD *)this + 54);
    v4 = *((__m128i *)this + 14);
    v20.height = *((_DWORD *)this + 55);
    v29 = v3;
    v28 = v4;
  }
  else
  {
    v27 = 0;
    v21 = 0uLL;
    *(_OWORD *)v22 = 0uLL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(this, (struct CMILMatrix *)v26);
    v29 = 0uLL;
    v28 = v21;
    v20.width = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8)) - _mm_cvtsi128_si32(v21);
    v20.height = _mm_cvtsi128_si32(_mm_srli_si128(v21, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v21, 4));
  }
  v5 = *((_QWORD *)this + 47);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 80LL) + 944LL);
  else
    v6 = *((_QWORD *)this + 33);
  *(_QWORD *)v22 = v6;
  *(_DWORD *)&v22[8] = *((_DWORD *)this + 74);
  *(_QWORD *)&v22[12] = 0LL;
  IsHardwareProtected = CDxHandleYUVBitmapRealization::IsHardwareProtected((CDxHandleYUVBitmapRealization *)((char *)this + 328));
  v8 = *((_DWORD *)this + 38);
  v23 = IsHardwareProtected;
  v24 = 0;
  v25 = 0;
  v21.m128i_i32[0] = 0;
  if ( IsDXGIColorSpaceRec2020(v8)
    && *((int *)CDxHandleYUVBitmapRealization::GetDevice((CDxHandleYUVBitmapRealization *)((char *)this + 328)) + 156) >= 40960 )
  {
    v9 = DXGI_FORMAT_R16G16B16A16_FLOAT;
    *(_DWORD *)&v22[16] = 1065353216;
  }
  else
  {
    v9 = DXGI_FORMAT_R8G8B8A8_UNORM;
  }
  v21.m128i_i64[0] = (unsigned int)v9 | 0x300000000LL;
  DefaultDXGIColorSpaceForFormat = GetDefaultDXGIColorSpaceForFormat(v9);
  v11 = (CDecodeBitmap *)*((_QWORD *)this + 36);
  v21.m128i_i32[2] = DefaultDXGIColorSpaceForFormat;
  v12 = CDecodeBitmap::EnsureTargetBitmap(
          v11,
          &v20,
          (const struct PixelFormatInfo *)&v21,
          (const struct RenderTargetInfo *)v22);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x303u, 0LL);
  }
  else
  {
    v14 = *((_DWORD *)this + 60);
    v15 = *(_QWORD *)(*((_QWORD *)this + 36) + 120LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 160LL))(v15) != ((v14 & 2) != 0) )
    {
      v19 = *((_DWORD *)this + 60) >> 1;
      LOBYTE(v19) = (*((_DWORD *)this + 60) & 2) != 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 168LL))(v15, v19);
    }
    v16 = (CD2DBitmapCache *)*((_QWORD *)this + 36);
    if ( *((_BYTE *)v16 + 136) )
    {
      return 0;
    }
    else
    {
      v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))CRenderTargetBitmap::VideoProcessorBlt)(
              (char *)v16 + 80,
              *(_QWORD *)(*((_QWORD *)this + 47) + 120LL),
              *((unsigned int *)this + 70),
              *((unsigned int *)this + 38),
              &v29,
              1,
              0LL,
              &v28,
              v20);
      v13 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x31u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x319u, 0LL);
      }
      else
      {
        *((_BYTE *)v16 + 136) = 1;
        CD2DBitmapCache::MarkFullInvalid(v16);
      }
    }
  }
  return v13;
}
