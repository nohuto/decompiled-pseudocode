/*
 * XREFs of EngCreateBitmap @ 0x140024340
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14002550C (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 */

HBITMAP __stdcall EngCreateBitmap(SIZEL sizl, LONG lWidth, ULONG iFormat, FLONG fl, PVOID pvBits)
{
  HBITMAP v5; // rbx
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))CreateDriverSurfMem)(
    v7,
    0LL,
    0LL,
    sizl,
    lWidth,
    iFormat,
    fl,
    pvBits);
  v5 = 0LL;
  if ( v7[0] )
    v5 = *(HBITMAP *)(v7[0] + 32LL);
  SURFMEM::~SURFMEM((SURFMEM *)v7);
  return v5;
}
