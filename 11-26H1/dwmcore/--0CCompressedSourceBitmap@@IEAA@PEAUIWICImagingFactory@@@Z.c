/*
 * XREFs of ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@@Z @ 0x1801C619C
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z @ 0x1801C6024 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x1800E64E4 (--0CBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CCompressedSourceBitmap *__fastcall CCompressedSourceBitmap::CCompressedSourceBitmap(
        CCompressedSourceBitmap *this,
        struct IWICImagingFactory *a2)
{
  CCompressedSourceBitmap *result; // rax

  CBitmap::CBitmap(this, (__int64)a2);
  *(_QWORD *)this = &CCompressedSourceBitmap::`vftable'{for `CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CCompressedSourceBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 4) = &CCompressedSourceBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 15) = &CCompressedSourceBitmap::`vftable';
  *((_QWORD *)this + 16) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IWICImagingFactory *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 17) = 0LL;
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 26) = 87;
  *(_QWORD *)((char *)this + 108) = 1LL;
  return result;
}
