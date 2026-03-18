/*
 * XREFs of ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x180192654
 * Callers:
 *     ??_ECSystemMemoryBitmap@@MEAAPEAXI@Z @ 0x180192550 (--_ECSystemMemoryBitmap@@MEAAPEAXI@Z.c)
 *     ??1CClientMemoryBitmap@@MEAA@XZ @ 0x1801925CC (--1CClientMemoryBitmap@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall CSystemMemoryBitmap::~CSystemMemoryBitmap(CSystemMemoryBitmap *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CSystemMemoryBitmap::`vftable'{for `CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 4) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 15) = &CSystemMemoryBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 16) = &CClientMemoryBitmap::`vftable'{for `IPixelColor'};
  v2 = (void *)*((_QWORD *)this + 17);
  if ( v2 )
    operator delete(v2);
  CBitmap::~CBitmap(this);
}
