/*
 * XREFs of CddEngOffsetRgn @ 0x1401D2960
 * Callers:
 *     <none>
 * Callees:
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x14008BC70 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401D2450 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 */

__int64 __fastcall CddEngOffsetRgn(Win32kRS *a1, LONG a2, const struct _POINTL *a3)
{
  unsigned int v3; // ebx
  const struct REGION_CORE *v4; // rdx
  struct _POINTL v6; // [rsp+30h] [rbp+8h] BYREF
  Win32kRS *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = a1;
  v3 = 0;
  v6.x = a2;
  v6.y = (int)a3;
  if ( RGNCOREOBJ::bOffset(&v7, &v6, a3) )
    return (unsigned int)RGNCOREOBJ::iComplexity(&v7, v4);
  return v3;
}
