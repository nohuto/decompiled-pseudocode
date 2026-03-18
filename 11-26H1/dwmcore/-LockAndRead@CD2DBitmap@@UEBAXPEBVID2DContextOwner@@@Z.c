/*
 * XREFs of ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x1802A9A30
 * Callers:
 *     ?LockAndRead@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAXPEBVID2DContextOwner@@@Z @ 0x1802AA0C0 (-LockAndRead@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAXPEBVID2DContext.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x1801025E0 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18028CF2C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DBitmap::LockAndRead(CD2DBitmap *this, const struct ID2DContextOwner *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  struct ID3D11Texture2D *v8; // rcx
  int v9; // eax

  v4 = (_DWORD *)((char *)this - 72);
  if ( (v4[44] & 0x400000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024891, 0xB1u, 0LL);
  }
  else
  {
    if ( a2 )
    {
      v5 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 40LL))(v4);
      v7 = CD2DContext::FlushD2D((CD2DContext *)(v5 + 16), a2, v6);
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xA6u, 0LL);
    }
    v8 = (struct ID3D11Texture2D *)*((_QWORD *)this + 4);
    if ( v8 )
    {
      v9 = DebugInspectTexture(v8, *((_DWORD *)this + 40));
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xABu, 0LL);
    }
  }
}
