/*
 * XREFs of ??1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ @ 0x140246CF0
 * Callers:
 *     ??_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022A8F0 (--_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::~CCompositionMipmapSurfaceMarshaler(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rcx

  *(_QWORD *)this = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
  v5 = (char *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    GreDeleteFastMutex(v5, a2, a3, a4);
    *((_QWORD *)this + 7) = 0LL;
  }
}
