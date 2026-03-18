/*
 * XREFs of ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x180104870
 * Callers:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180105C68 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x1801046F0 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180104A24 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasTexture::Initialize(CAtlasTexture *this, struct CD3DDevice *a2, UINT32 a3)
{
  int v6; // eax
  struct IRenderTargetBitmap *v7; // rbx
  unsigned int v8; // edi
  void *v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  int v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+44h] [rbp-3Ch]
  const char *v15; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+6Ch] [rbp-14h]
  char v20; // [rsp+74h] [rbp-Ch]
  __int16 v21; // [rsp+75h] [rbp-Bh]
  char v22; // [rsp+77h] [rbp-9h]
  struct IRenderTargetBitmap *v23; // [rsp+A8h] [rbp+28h] BYREF
  struct D2D_SIZE_U v24; // [rsp+B8h] [rbp+38h] BYREF

  v17 = *((_QWORD *)a2 + 118);
  v23 = 0LL;
  v21 = 0;
  v22 = 0;
  v13 = 87;
  v14 = 1LL;
  v24.width = 2048;
  v24.height = a3;
  v18 = -1;
  v19 = 0LL;
  v20 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  v16 = 17;
  v15 = "DWM Atlas surface";
  v6 = CD3DDevice::CreateRenderTargetBitmap(
         (__int64)a2,
         (const struct CResourceTag *)&v15,
         &v24,
         (struct PixelFormatInfo *)&v13,
         (struct RenderTargetInfo *)&v17,
         0,
         &v23);
  v7 = v23;
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x47u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, CAtlasTexture *))(*(_QWORD *)v23 + 72LL))(v23, this);
    Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 8, &v23);
    *((_DWORD *)this + 6) = a3 - 1;
    *((_DWORD *)this + 7) = a3 - 1;
    v9 = MIDL_user_allocate(saturated_mul(a3 - 1, 8uLL));
    v10 = (void *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v9;
    if ( v10 )
      operator delete(v10);
    v11 = (void *)*((_QWORD *)this + 2);
    if ( v11 )
    {
      memset_0(v11, 0, 8LL * *((unsigned int *)this + 6));
      CAtlasTexture::GenerateWhitePixel(this);
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x58u, 0LL);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
