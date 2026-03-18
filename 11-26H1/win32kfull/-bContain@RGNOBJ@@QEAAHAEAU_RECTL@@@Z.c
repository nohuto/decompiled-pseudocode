/*
 * XREFs of ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1401FECF0
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x140315AA4 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 * Callees:
 *     ?bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z @ 0x1401FED24 (-bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z.c)
 */

_BOOL8 __fastcall RGNOBJ::bContain(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
  return RGNCOREOBJ::bContain((RGNCOREOBJ *)&v3, a2);
}
