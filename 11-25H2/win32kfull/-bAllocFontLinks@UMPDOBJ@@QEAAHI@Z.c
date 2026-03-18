/*
 * XREFs of ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1401E6BBC
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall UMPDOBJ::bAllocFontLinks(UMPDOBJ *this, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rbp
  void **v4; // rdi
  void *v6; // rcx

  v2 = 0;
  v3 = a2;
  v4 = (void **)((char *)this + 416);
  if ( a2 > *((_DWORD *)this + 112) )
  {
    if ( *v4 )
    {
      Win32FreePool(*v4);
      *((_DWORD *)this + 112) = 0;
    }
    *v4 = (void *)PALLOCNOZ(4 * (int)v3, 1886221639LL);
  }
  v6 = *v4;
  if ( *v4 )
  {
    *((_DWORD *)this + 112) = v3;
    memset_0(v6, 0, 4 * v3);
  }
  LOBYTE(v2) = *v4 != 0LL;
  return v2;
}
