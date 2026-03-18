/*
 * XREFs of BltColor @ 0x140191F60
 * Callers:
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402EA1A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 */

__int64 __fastcall BltColor(
        HDC a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  __int64 v14; // rsi
  int v15; // r15d
  int v16; // r12d
  __int64 v17; // rcx
  int v18; // edi

  v14 = 0LL;
  v15 = GreSetTextColor(a1, 0);
  v16 = GreSetBkColor(a1, 0xFFFFFF);
  if ( a2 )
    v14 = GreSelectBrush(a1, a2);
  v17 = a10;
  v18 = ((a10 & 1) != 0 ? 12060490 : 14812998) | 0x80000000;
  if ( (a10 & 2) == 0 )
    v18 = (a10 & 1) != 0 ? 12060490 : 14812998;
  if ( !a3 )
  {
    LOBYTE(v17) = -(a10 & 1);
    a3 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v17, (a10 & 1) != 0 ? 12060490 : 14812998) + 56968) + 80LL);
  }
  GreBitBltInternal(a1, a4, a5, a6, a7, a3, a8, a9, v18, 0xFFFFFFu, 0);
  if ( a2 )
    GreSelectBrush(a1, v14);
  GreSetTextColor(a1, v15);
  return GreSetBkColor(a1, v16);
}
