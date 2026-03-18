/*
 * XREFs of ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x140234E48
 * Callers:
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x14011F9C0 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientLpkDrawTextEx @ 0x140121E74 (xxxClientLpkDrawTextEx.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x140122584 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x140123D9C (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DT_DrawStr(
        Gre::Base *a1,
        unsigned int a2,
        unsigned int a3,
        WCHAR *a4,
        int a5,
        int a6,
        unsigned int a7,
        struct DRAWTEXTDATA *a8,
        int a9)
{
  __int64 v13; // rcx
  unsigned int v14; // r15d
  struct tagTHREADINFO *v15; // rax
  __int64 result; // rax
  int v17; // [rsp+20h] [rbp-48h]

  v14 = a2 - 1;
  if ( (GreGetLayout((HDC)a1) & 1) == 0 )
    v14 = a2;
  if ( *((_DWORD *)a8 + 15) )
  {
    v15 = PtiCurrent(v13);
    result = CALL_LPK(v15);
    if ( (_DWORD)result )
      return xxxClientLpkDrawTextEx(a1, v14, a3, a4, a5, a6, a7, (__int64)a8, 1, a9);
  }
  else
  {
    if ( a6 )
    {
      v17 = a5;
      (*((void (__fastcall **)(Gre::Base *, _QWORD, _QWORD, WCHAR *))a8 + 6))(a1, v14, a3, a4);
    }
    return (unsigned int)DT_GetExtentMinusPrefixes(a1, a4, a5, a7, v17, a8, a9) - *((_DWORD *)a8 + 14);
  }
  return result;
}
