/*
 * XREFs of UT_GetParentDCClipBox @ 0x140053AE4
 * Callers:
 *     xxxFillWindow @ 0x140054024 (xxxFillWindow.c)
 * Callees:
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 */

__int64 __fastcall UT_GetParentDCClipBox(__int64 a1, __int64 a2, int *a3)
{
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v6 = 0LL;
  if ( (unsigned int)GreGetClipBox(a2, a3, 1LL) == 1 )
    return 0LL;
  if ( !a1 || *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 8LL) >= 0 )
    return 1LL;
  GetRect(a1, (__int64)v6, 17);
  return IntersectRect(a3, a3, v6);
}
