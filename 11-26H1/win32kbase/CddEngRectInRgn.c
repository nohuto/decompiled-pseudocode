/*
 * XREFs of CddEngRectInRgn @ 0x1401FBAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?bInside@RGNCOREOBJ@@QEBAHPEAU_RECTL@@@Z @ 0x1400A8618 (-bInside@RGNCOREOBJ@@QEBAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall CddEngRectInRgn(REGION_CORE *a1, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  REGION_CORE *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = a1;
  if ( a2 && a1 )
    LOBYTE(v2) = (unsigned int)RGNCOREOBJ::bInside(&v4, a2) == 2;
  return v2;
}
