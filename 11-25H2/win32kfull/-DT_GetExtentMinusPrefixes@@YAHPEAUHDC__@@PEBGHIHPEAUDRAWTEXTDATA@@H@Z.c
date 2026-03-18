/*
 * XREFs of ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1400C1310
 * Callers:
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1400C29A4 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1400C3414 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x1400C13EC (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     xxxClientLpkDrawTextEx @ 0x1400C1458 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(
        HDC a1,
        __m128i *a2,
        unsigned int a3,
        int a4,
        int a5,
        struct DRAWTEXTDATA *a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  struct DRAWTEXTDATA *v14; // r14
  struct tagTHREADINFO *v15; // rbp
  struct tagSIZE v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  PtiCurrent((__int64)a1, (__int64)a2);
  v13 = PtiCurrent(v12, v11);
  v14 = a6;
  v15 = v13;
  if ( *((_DWORD *)a6 + 15) && (unsigned int)CALL_LPK(v13) )
    return xxxClientLpkDrawTextEx(a1, a3, 0, a4, (__int64)v14, 1, a7);
  if ( (unsigned int)CALL_LPK(v15) )
    xxxClientGetTextExtentPointW(a1, (PCWSTR)a2);
  else
    GreGetTextExtentW(a1, a2, a3, &v17);
  return (unsigned int)v17.cx;
}
