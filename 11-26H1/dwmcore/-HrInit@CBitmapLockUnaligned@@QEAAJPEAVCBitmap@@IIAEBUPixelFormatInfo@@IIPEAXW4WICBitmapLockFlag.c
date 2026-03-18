/*
 * XREFs of ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x18022535C
 * Callers:
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801E2F70 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E1EE0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800E77CC (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1801278A4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?ReadUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x180225564 (-ReadUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

__int64 __fastcall CBitmapLockUnaligned::HrInit(
        CBitmapLockUnaligned *this,
        struct CBitmap *a2,
        unsigned int a3,
        unsigned int a4,
        enum DXGI_FORMAT *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *a8,
        enum WICBitmapLockFlags a9,
        unsigned int a10,
        unsigned int a11)
{
  CBitmapLock *v11; // r15
  enum WICBitmapLockFlags v12; // r13d
  enum DXGI_FORMAT v13; // edx
  unsigned __int64 v14; // rbp
  int v15; // eax
  int v16; // edi
  unsigned __int8 *v17; // rsi
  int v18; // r9d
  unsigned int v19; // eax
  unsigned __int8 *v20; // r14
  int v21; // eax
  unsigned int v22; // edi
  unsigned __int8 *v23; // r12
  unsigned __int64 v24; // r13
  unsigned int v25; // esi
  unsigned int v26; // ebp
  unsigned __int8 *v27; // rdi
  const unsigned __int8 *v28; // r14
  unsigned int v30; // [rsp+60h] [rbp-68h]
  unsigned __int8 *v31[12]; // [rsp+68h] [rbp-60h] BYREF

  v11 = this;
  v12 = a9;
  *((_DWORD *)this + 34) = a6;
  *((_QWORD *)this + 16) = a8;
  *((_DWORD *)this + 35) = a7;
  *((_DWORD *)this + 37) = a10;
  *((_DWORD *)this + 36) = a11;
  *((_DWORD *)this + 30) = v12;
  v13 = *a5;
  v14 = a4;
  a7 = 0;
  v15 = HrCalcDWordAlignedScanlineStride(a3, v13, &a7);
  v31[0] = 0LL;
  v16 = v15;
  v17 = 0LL;
  if ( v15 < 0 )
  {
    v18 = v15;
    v19 = 149;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v19, 0LL);
    operator delete(v17);
    return (unsigned int)v16;
  }
  v20 = (unsigned __int8 *)a7;
  v21 = HrMalloc(a7, v14, (void **)v31);
  v17 = v31[0];
  v16 = v21;
  v18 = v21;
  if ( v21 < 0 )
  {
    v19 = 159;
    goto LABEL_12;
  }
  v22 = v14 * (_DWORD)v20;
  v30 = v14 * (_DWORD)v20;
  if ( (v12 & 1) != 0 )
  {
    v23 = v31[0];
    if ( (_DWORD)v14 )
    {
      v24 = v14;
      v25 = a10;
      v26 = a11;
      v31[2] = v20;
      v27 = v20;
      v28 = a8;
      do
      {
        ReadUnalignedScanline(v23, v28, v26, v25);
        v28 += a6;
        v23 = &v23[(_QWORD)v27];
        --v24;
      }
      while ( v24 );
      v17 = v31[0];
      LODWORD(v14) = a4;
      LODWORD(v20) = a7;
      v22 = v30;
      v11 = this;
      v12 = a9;
    }
  }
  v16 = CBitmapLock::HrInit(
          v11,
          (struct IBitmapUnlock *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)),
          a3,
          v14,
          a5,
          (unsigned int)v20,
          v22,
          v17,
          v12,
          0,
          0LL);
  v18 = v16;
  if ( v16 < 0 )
  {
    v19 = 204;
    goto LABEL_12;
  }
  return (unsigned int)v16;
}
