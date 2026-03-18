/*
 * XREFs of ?RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z @ 0x1401C9B24
 * Callers:
 *     ?MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z @ 0x1401C997C (-MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z.c)
 * Callees:
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1401C9BEC (TransformRegionBetweenCoordinateSpaces.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

bool __fastcall MOVESIZEDATA::RectInClipRegion(MOVESIZEDATA *this, const struct tagRECT *a2)
{
  __int64 v2; // r9
  __int64 v4; // r10
  int v6; // ebx
  bool v7; // di
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v2 + 104);
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 168LL);
  if ( v8 )
  {
    v6 = TransformRegionBetweenCoordinateSpaces(v2, v4, &v8);
    v9 = (__int128)*a2;
    v7 = (unsigned int)GreRectInRegion(v8, &v9) != 0;
    if ( v6 )
      GreDeleteObject(v8);
    return v7;
  }
  else
  {
    v9 = 0LL;
    return (unsigned int)IntersectRect(&v9, &a2->left, (int *)this + 22) != 0;
  }
}
