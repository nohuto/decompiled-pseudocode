/*
 * XREFs of ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXI@Z @ 0x1801C6118
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z @ 0x1801C6024 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CCompressedSourceBitmap::HrInitFromCompressedBytes(
        CCompressedSourceBitmap *this,
        const void *a2,
        unsigned int a3)
{
  size_t v4; // rdi
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rcx

  v4 = a3;
  v6 = MIDL_user_allocate(a3);
  v7 = (void *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = v6;
  if ( v7 )
    operator delete(v7);
  v8 = (void *)*((_QWORD *)this + 19);
  if ( !v8 )
    return 2147942414LL;
  *((_DWORD *)this + 40) = v4;
  memcpy_0(v8, a2, v4);
  return 0LL;
}
