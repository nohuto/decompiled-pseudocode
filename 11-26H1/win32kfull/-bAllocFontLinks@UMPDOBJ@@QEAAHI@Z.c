/*
 * XREFs of ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x14021B7BC
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDOBJ::bAllocFontLinks(UMPDOBJ *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  void **v5; // rdi
  void *v7; // rcx

  v3 = 0;
  v4 = a2;
  v5 = (void **)((char *)this + 400);
  if ( a2 > *((_DWORD *)this + 108) )
  {
    if ( *v5 )
    {
      Win32FreePool(*v5);
      *((_DWORD *)this + 108) = 0;
    }
    *v5 = (void *)PALLOCNOZ(4 * (int)v4, 1886221639LL, a3);
  }
  v7 = *v5;
  if ( *v5 )
  {
    *((_DWORD *)this + 108) = v4;
    memset_0(v7, 0, 4 * v4);
  }
  LOBYTE(v3) = *v5 != 0LL;
  return v3;
}
