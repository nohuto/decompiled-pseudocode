/*
 * XREFs of ?OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x18026B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18026AF0C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionMipmapSurface::OnSceneReady(
        CCompositionMipmapSurface *this,
        struct ISpectreRenderer *a2)
{
  struct _LUID *v4; // rdi
  char *v5; // rsi
  int v6; // eax
  unsigned int v7; // edi
  __int64 (__fastcall *v8)(struct ISpectreRenderer *, _QWORD, _QWORD, char *); // rdi
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(struct ISpectreRenderer *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v11);
  if ( *((_QWORD *)this + 4) == v11 )
  {
    v4 = (struct _LUID *)((char *)this - 88);
    v5 = (char *)this + 80;
  }
  else
  {
    v5 = (char *)this + 80;
    v4 = (struct _LUID *)((char *)this - 88);
    *((_QWORD *)this + 4) = v11;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 10);
  }
  v6 = CCompositionMipmapSurface::EnsureMipmapSurface(v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x59u, 0LL);
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD, _QWORD, char *))(*(_QWORD *)a2 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
    v9 = v8(a2, *(_QWORD *)(*(_QWORD *)v5 + 128LL), *(_QWORD *)(*(_QWORD *)v5 + 200LL), (char *)this + 64);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x5Cu, 0LL);
  }
  return v7;
}
