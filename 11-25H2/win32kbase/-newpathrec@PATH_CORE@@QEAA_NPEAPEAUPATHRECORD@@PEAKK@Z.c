/*
 * XREFs of ?newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z @ 0x1400D570C
 * Callers:
 *     ?bClone@PATH_CORE@@QEAA_NAEBV1@@Z @ 0x1400D55B0 (-bClone@PATH_CORE@@QEAA_NAEBV1@@Z.c)
 *     pprFlattenRec @ 0x1400D5820 (pprFlattenRec.c)
 * Callees:
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400D6250 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 */

bool __fastcall PATH_CORE::newpathrec(
        struct PATHALLOC **this,
        struct PATHRECORD **a2,
        unsigned int *a3,
        unsigned int a4)
{
  struct PATHALLOC *v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v9; // rbx
  char *v10; // rax
  struct PATHALLOC *v11; // rax

  v4 = *this;
  LODWORD(v5) = 0;
  if ( *this )
  {
    v9 = *((_QWORD *)v4 + 1) + 24LL;
    v10 = (char *)v4 + *((unsigned int *)v4 + 4);
    if ( (unsigned __int64)v10 > v9 )
      v5 = (__int64)&v10[-v9] >> 3;
  }
  if ( (unsigned int)v5 < a4 && (unsigned int)v5 < 8 )
  {
    v11 = newpathalloc();
    v4 = v11;
    if ( !v11 )
      return (char)v11;
    *(_QWORD *)v11 = *this;
    *this = v11;
    v5 = ((unsigned __int64)(unsigned int)((_DWORD)v11 + *((_DWORD *)v11 + 4) - *((_DWORD *)v11 + 2)) - 24) >> 3;
  }
  *a2 = (struct PATHRECORD *)*((_QWORD *)v4 + 1);
  LOBYTE(v11) = 1;
  *a3 = v5;
  return (char)v11;
}
