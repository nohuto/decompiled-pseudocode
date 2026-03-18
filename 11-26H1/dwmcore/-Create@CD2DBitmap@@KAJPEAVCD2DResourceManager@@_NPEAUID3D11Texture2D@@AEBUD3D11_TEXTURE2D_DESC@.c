/*
 * XREFs of ?Create@CD2DBitmap@@KAJPEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@IPEAPEAV1@@Z @ 0x1800F6A98
 * Callers:
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x1800F7138 (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x1800F62F4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 v9; // rbx
  void *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // edi
  unsigned int v17; // eax

  v9 = 0LL;
  *a9 = 0LL;
  if ( *(_DWORD *)(a4 + 16) == 2
    || *(_DWORD *)(a4 + 16) == 10
    || *(_DWORD *)(a4 + 16) == 24
    || *(_DWORD *)(a4 + 16) == 28
    || *(_DWORD *)(a4 + 16) == 61
    || *(_DWORD *)(a4 + 16) == 65
    || (unsigned int)(*(_DWORD *)(a4 + 16) - 87) < 2 )
  {
    v13 = MIDL_user_allocate(0xF0uLL);
    if ( v13
      && (LOBYTE(v14) = 1, v15 = CD2DBitmap::CD2DBitmap((__int64)v13, a1, v14, a3, a4, a5, a6, a7, 0), (v9 = v15) != 0) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 112LL))(v9);
      if ( v16 >= 0 )
      {
        *a9 = v9;
        return (unsigned int)v16;
      }
      v17 = 41;
    }
    else
    {
      v16 = -2147024882;
      v17 = 39;
    }
  }
  else
  {
    v16 = -2003292288;
    v17 = 29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, v17, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v16;
}
