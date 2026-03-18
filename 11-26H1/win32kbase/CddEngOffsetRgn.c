/*
 * XREFs of CddEngOffsetRgn @ 0x1401FBA50
 * Callers:
 *     <none>
 * Callees:
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x14012E038 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401FB550 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 */

__int64 __fastcall CddEngOffsetRgn(Win32kRS *a1, LONG a2, const struct _POINTL *a3)
{
  unsigned int v3; // ebx
  struct _POINTL v5; // [rsp+30h] [rbp+8h] BYREF
  Win32kRS *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = a1;
  v3 = 0;
  v5.x = a2;
  v5.y = (int)a3;
  if ( RGNCOREOBJ::bOffset(&v6, &v5, a3) )
    return (unsigned int)RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v6);
  return v3;
}
