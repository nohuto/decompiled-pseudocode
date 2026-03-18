/*
 * XREFs of ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x140122584
 * Callers:
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x14012142C (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x140234E48 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientLpkDrawTextEx @ 0x140121E74 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x140123D9C (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(
        Gre::Base *a1,
        WCHAR *a2,
        int a3,
        int a4,
        int a5,
        struct DRAWTEXTDATA *a6,
        int a7)
{
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  struct DRAWTEXTDATA *v13; // r14
  struct tagTHREADINFO *v14; // rbp
  struct tagSIZE v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = 0LL;
  PtiCurrent((__int64)a1);
  v12 = PtiCurrent(v11);
  v13 = a6;
  v14 = v12;
  if ( *((_DWORD *)a6 + 15) && (unsigned int)CALL_LPK(v12) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, a2, a3, 0, a4, (__int64)v13, 1, a7);
  if ( (unsigned int)CALL_LPK(v14) )
    xxxClientGetTextExtentPointW((HDC)a1, a2);
  else
    GreGetTextExtentW((HDC)a1, a2, a3, &v16);
  return (unsigned int)v16.cx;
}
