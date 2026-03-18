/*
 * XREFs of ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x1800F7138
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x1800F6C10 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CD2DBitmap@@KAJPEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@IPEAPEAV1@@Z @ 0x1800F6A98 (-Create@CD2DBitmap@@KAJPEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F7904 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateD2DBitmap(
        __int64 a1,
        void *a2,
        bool a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        __int64 *a9)
{
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-91h]
  __int64 v19; // [rsp+38h] [rbp-79h]
  struct ID3D11Texture2D *v20[2]; // [rsp+50h] [rbp-61h] BYREF
  __int128 v21; // [rsp+60h] [rbp-51h] BYREF
  int v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+74h] [rbp-3Dh]
  int v24; // [rsp+7Ch] [rbp-35h]
  __int128 v25; // [rsp+80h] [rbp-31h] BYREF
  __int128 v26; // [rsp+90h] [rbp-21h]
  __int64 v27; // [rsp+A0h] [rbp-11h]
  int v28; // [rsp+A8h] [rbp-9h]

  v20[0] = 0LL;
  v23 = 0LL;
  v24 = 0;
  *a9 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v28 = 0;
  if ( *(_DWORD *)(a1 + 1124) )
  {
    v12 = -2003304307;
    v17 = -2003304307;
    v18 = 1057;
  }
  else
  {
    v11 = CD3DDevice::OpenSharedTexture((CD3DDevice *)a1, a2, a3, v20);
    v12 = v11;
    if ( v11 < 0 )
    {
      v18 = 1061;
    }
    else
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, __int128 *))v20[0]->lpVtbl->GetDesc)(v20[0], &v25);
      v13 = *(_QWORD *)(a1 + 184);
      v20[1] = (struct ID3D11Texture2D *)__PAIR64__(a4, v26);
      *(_QWORD *)&v21 = __PAIR64__(a4, v26);
      *((_QWORD *)&v21 + 1) = __PAIR64__(a8, a7);
      v22 = 0;
      v11 = CD2DBitmap::Create(v13, v14, (__int64)v20[0], (__int64)&v25, &v21, a5, a6, v19, a9);
      v12 = v11;
      if ( v11 >= 0 )
        goto LABEL_4;
      v18 = 1084;
    }
    v17 = v11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3E98, 2u, v17, v18, 0LL);
LABEL_4:
  v15 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v12, 0);
  if ( v20[0] )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v20[0]->lpVtbl->Release)(v20[0]);
  return v15;
}
