/*
 * XREFs of ??1CD3DSurface@@MEAA@XZ @ 0x1802A452C
 * Callers:
 *     ??_ECD3DSurface@@MEAAPEAXI@Z @ 0x1802A45C0 (--_ECD3DSurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DSurface::~CD3DSurface(CD3DSurface *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CD3DSurface::`vftable'{for `CD3DResource'};
  *((_QWORD *)this + 15) = &CD3DSurface::`vftable'{for `IPixelFormat'};
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 16));
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 24));
  v2 = *((_QWORD *)this + 25);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 26);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 27));
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 28));
  CD3DResource::~CD3DResource(this);
}
