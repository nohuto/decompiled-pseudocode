/*
 * XREFs of ?MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ @ 0x14012E1B0
 * Callers:
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401EDBF0 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     PREALLOCMEM2 @ 0x1401EDDDC (PREALLOCMEM2.c)
 */

char __fastcall ThreadRestrictNewHandlesRegion::MakeRoom(
        ThreadRestrictNewHandlesRegion *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  char *v7; // rcx
  __int64 v8; // rsi
  _OWORD *v9; // rax

  v4 = *((_QWORD *)this + 4);
  if ( *((_QWORD *)this + 3) != v4 )
    return 1;
  v7 = (char *)*((_QWORD *)this + 5);
  v8 = 2 * v4;
  if ( v7 == (char *)this + 48 )
  {
    v9 = (_OWORD *)PALLOCMEM((unsigned int)(8 * v4), 1852994631LL, (unsigned int)(8 * v4), a4);
    if ( v9 )
    {
      *v9 = *((_OWORD *)this + 3);
      v9[1] = *((_OWORD *)this + 4);
LABEL_6:
      *((_QWORD *)this + 5) = v9;
      *((_QWORD *)this + 4) = v8;
      return 1;
    }
  }
  else
  {
    v9 = (_OWORD *)PREALLOCMEM2(v7, (unsigned int)(4 * *((_DWORD *)this + 8)));
    if ( v9 )
      goto LABEL_6;
  }
  return 0;
}
