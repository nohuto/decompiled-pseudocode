/*
 * XREFs of ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x14022908C
 * Callers:
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 */

_BOOL8 __fastcall IsNewMonitorRectMostOccupied(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  IntersectRect(&v7, &a1->left, &a2->left);
  IntersectRect(&v6, &a1->left, &a3->left);
  return (DWORD2(v7) - (int)v7) * (HIDWORD(v7) - DWORD1(v7)) > (DWORD2(v6) - (int)v6) * (HIDWORD(v6) - DWORD1(v6));
}
