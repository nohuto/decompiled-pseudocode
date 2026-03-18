/*
 * XREFs of ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14002541C
 * Callers:
 *     EngCreateDeviceSurface @ 0x140122040 (EngCreateDeviceSurface.c)
 *     EngCreateDeviceBitmap @ 0x140168F60 (EngCreateDeviceBitmap.c)
 * Callees:
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14002550C (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 */

__int64 __fastcall hbmCreateDriverSurface(
        unsigned int a1,
        struct DHSURF__ *a2,
        struct tagSIZE a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))CreateDriverSurfMem)(
    v9,
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7);
  v7 = 0LL;
  if ( v9[0] )
    v7 = *(_QWORD *)(v9[0] + 32LL);
  SURFMEM::~SURFMEM((SURFMEM *)v9);
  return v7;
}
