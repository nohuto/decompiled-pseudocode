/*
 * XREFs of ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800E0BF0
 * Callers:
 *     ?CopyPixels@CCompressedSourceBitmap@@WCA@EAAJPEBUWICRect@@IIPEAE@Z @ 0x180224A20 (-CopyPixels@CCompressedSourceBitmap@@WCA@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800E0C94 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompressedSourceBitmap::CopyPixels(
        CCompressedSourceBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v9; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = CCompressedSourceBitmap::EnsureUncompressedBitmap(this);
  if ( v9 < 0 )
  {
    v11 = 71LL;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct WICRect *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 18) + 48LL))(
           *((_QWORD *)this + 18),
           a2,
           a3,
           a4,
           a5);
    if ( v9 >= 0 )
      return 0LL;
    v11 = 76LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
