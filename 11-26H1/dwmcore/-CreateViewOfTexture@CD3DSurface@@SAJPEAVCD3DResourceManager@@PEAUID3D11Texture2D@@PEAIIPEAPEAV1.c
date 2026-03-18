/*
 * XREFs of ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1802A46B0
 * Callers:
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1802A45FC (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800F7A8C (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x1802A4924 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DSurface::CreateViewOfTexture(
        struct CD3DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        unsigned int *a3,
        __int64 a4,
        struct CD3DSurface **a5)
{
  CD3DResource *v7; // rax
  CD3DSurface *v8; // rbx
  __int64 v9; // rdx
  unsigned int *v10; // r8
  unsigned int v11; // r9d
  int v12; // eax
  unsigned int v13; // edi

  *a5 = 0LL;
  v7 = (CD3DResource *)operator new(0xF0uLL);
  v8 = v7;
  if ( v7 )
  {
    CD3DResource::CD3DResource(v7, 0LL);
    *((_QWORD *)v8 + 16) = a2;
    *((_QWORD *)v8 + 15) = &CD3DSurface::`vftable'{for `IPixelFormat'};
    *(_QWORD *)v8 = &CD3DSurface::`vftable'{for `CD3DResource'};
    *((_DWORD *)v8 + 34) = v9;
    *((_QWORD *)v8 + 23) = v9;
    *((_QWORD *)v8 + 24) = v9;
    *((_QWORD *)v8 + 25) = v9;
    *((_QWORD *)v8 + 26) = v9;
    *((_QWORD *)v8 + 27) = v9;
    *((_QWORD *)v8 + 28) = v9;
    ((void (__fastcall *)(struct ID3D11Texture2D *))a2->lpVtbl->AddRef)(a2);
    (*(void (__fastcall **)(CD3DSurface *))(*(_QWORD *)v8 + 8LL))(v8);
    v12 = CD3DSurface::Init(v8, a1, v10, v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x68u, 0LL);
    }
    else
    {
      *a5 = v8;
      v8 = 0LL;
    }
  }
  else
  {
    v8 = 0LL;
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x63u, 0LL);
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v8);
  return v13;
}
