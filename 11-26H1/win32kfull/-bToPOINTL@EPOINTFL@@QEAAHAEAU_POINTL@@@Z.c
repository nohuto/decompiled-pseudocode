/*
 * XREFs of ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x140111928
 * Callers:
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 * Callees:
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

__int64 __fastcall EPOINTFL::bToPOINTL(EPOINTFL *this, struct _POINTL *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r11d

  v3 = bFToL(this, a2, 6LL);
  v6 = 0;
  if ( v3 )
    return (unsigned int)bFToL(v4, &a2->y, v5) != 0;
  return v6;
}
