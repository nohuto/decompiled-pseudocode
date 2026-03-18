/*
 * XREFs of ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x180131AD0
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x180131BE0 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 *a8)
{
  void *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // edi
  unsigned int v16; // eax

  *a8 = 0LL;
  v12 = MIDL_user_allocate(0x148uLL);
  if ( !v12 )
  {
    v14 = 0LL;
    goto LABEL_9;
  }
  v13 = CSecondaryD2DBitmap::CSecondaryD2DBitmap(v12, a1, a2, a3, a4, a5, a6, a7);
  v14 = v13;
  if ( !v13 )
  {
LABEL_9:
    v15 = -2147024882;
    v16 = 34;
    goto LABEL_5;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 112LL))(v14);
  if ( v15 >= 0 )
  {
    *a8 = v14;
    return (unsigned int)v15;
  }
  v16 = 36;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v16, 0LL);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v15;
}
