/*
 * XREFs of ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x14011F9C0
 * Callers:
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x14011FF84 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x140234E48 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 */

void __fastcall DT_DrawJustifiedLine(
        HDC a1,
        int a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx

  v10 = *(_DWORD *)a6;
  if ( (a5 & 3) != 0 )
  {
    v12 = *((_DWORD *)a6 + 14) + DT_DrawStr(a1, v10, a2, a3, a4, 0, a5, a6, -1);
    v13 = *((_DWORD *)a6 + 2);
    if ( (a5 & 1) != 0 )
      v10 = *(_DWORD *)a6 + ((v13 - *(_DWORD *)a6 - v12) >> 1);
    else
      v10 = v13 - v12;
  }
  v11 = *((_DWORD *)a6 + 14) + DT_DrawStr(a1, v10, a2, a3, a4, 1, a5, a6, -1);
  if ( v11 > *((_DWORD *)a6 + 9) )
    *((_DWORD *)a6 + 9) = v11;
}
