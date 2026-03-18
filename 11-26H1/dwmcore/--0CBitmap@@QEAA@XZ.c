/*
 * XREFs of ??0CBitmap@@QEAA@XZ @ 0x1800E64E4
 * Callers:
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1800E1D48 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800E646C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@@Z @ 0x1801C619C (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CBitmap *__fastcall CBitmap::CBitmap(CBitmap *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  CBitmap *result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
    (__int64)this,
    a2);
  InitializeCriticalSection(v3 + 1);
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 4) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  result = this;
  *((_DWORD *)this + 29) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  return result;
}
