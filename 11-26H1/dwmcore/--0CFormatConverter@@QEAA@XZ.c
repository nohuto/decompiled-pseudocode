/*
 * XREFs of ??0CFormatConverter@@QEAA@XZ @ 0x1802B3D84
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B4664 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CFormatConverter *__fastcall CFormatConverter::CFormatConverter(CFormatConverter *this, __int64 a2)
{
  __int64 v3; // rcx
  CFormatConverter *result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
    (__int64)this,
    a2);
  InitializeCriticalSection((LPCRITICAL_SECTION)(v3 + 16));
  *(_QWORD *)this = &CFormatConverter::`vftable';
  *((_QWORD *)this + 13) = &CScanPipeline::`vftable';
  *((_QWORD *)this + 14) = (char *)this + 144;
  *((_QWORD *)this + 15) = (char *)this + 144;
  *((_DWORD *)this + 32) = 10;
  *(_QWORD *)((char *)this + 132) = 10LL;
  *((_QWORD *)this + 80) = (char *)this + 672;
  *((_QWORD *)this + 81) = (char *)this + 672;
  *((_DWORD *)this + 164) = 3;
  *(_QWORD *)((char *)this + 660) = 3LL;
  *((_QWORD *)this + 87) = (char *)this + 728;
  *((_QWORD *)this + 88) = (char *)this + 728;
  *((_DWORD *)this + 178) = 2;
  *(_QWORD *)((char *)this + 716) = 2LL;
  result = this;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  return result;
}
