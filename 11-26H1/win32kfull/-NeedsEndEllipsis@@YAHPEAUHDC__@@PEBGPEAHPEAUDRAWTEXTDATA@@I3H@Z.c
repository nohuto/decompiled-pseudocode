/*
 * XREFs of ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x14012142C
 * Callers:
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x14011FF84 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x140122584 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z @ 0x140291F08 (-DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z.c)
 */

__int64 __fastcall NeedsEndEllipsis(
        HDC a1,
        const unsigned __int16 *a2,
        int *a3,
        struct DRAWTEXTDATA *a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  int v6; // ebp
  int v7; // edi
  int v11; // esi
  int v12; // ebx
  int v14; // esi
  int v15; // ebx
  int ExtentMinusPrefixes; // eax
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]
  struct tagSIZE v19; // [rsp+80h] [rbp+18h] BYREF

  v6 = *a3;
  v7 = 0;
  v19 = 0LL;
  if ( !v6 )
    return 0LL;
  v11 = *((_DWORD *)a4 + 8);
  v12 = *((_DWORD *)a4 + 14);
  if ( (int)DT_GetExtentMinusPrefixes(a1, a2, v6, a5, v17, a6, -1) <= v11
    || !(unsigned int)GreGetTextExtentW(a1, L"...", 3, &v19) )
  {
    return 0LL;
  }
  v14 = v12 - v19.cx + v11;
  v15 = 1;
  if ( v14 > 0 )
  {
    v15 = v6;
    while ( v7 < v15 )
    {
      ExtentMinusPrefixes = DT_GetExtentMinusPrefixes(a1, a2, (v15 + v7 + 1) / 2, a5, v18, a6, -1);
      if ( ExtentMinusPrefixes >= v14 )
      {
        if ( ExtentMinusPrefixes <= v14 )
        {
          v15 = (v15 + v7 + 1) / 2;
          break;
        }
        v15 = (v15 + v7 + 1) / 2 - 1;
      }
      else
      {
        v7 = (v15 + v7 + 1) / 2;
      }
    }
    if ( v15 < 1 )
      v15 = 1;
  }
  *a3 = DT_AdjustBreakForSurrogatesAndVariationSelectors(a2, v15, v6);
  return 1LL;
}
