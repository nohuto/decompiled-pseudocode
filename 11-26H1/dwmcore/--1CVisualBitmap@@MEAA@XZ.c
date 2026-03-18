/*
 * XREFs of ??1CVisualBitmap@@MEAA@XZ @ 0x1802680DC
 * Callers:
 *     ??_ECVisualBitmap@@MEAAPEAXI@Z @ 0x180247000 (--_ECVisualBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualBitmap::~CVisualBitmap(CVisualBitmap *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CVisualBitmap::`vftable'{for `CVisualBitmapGeneratedT<CVisualBitmap,CContent>'};
  *((_QWORD *)this + 10) = &CVisualBitmap::`vftable'{for `IBitmapResource'};
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 11));
  CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>((struct CResource **)this);
}
