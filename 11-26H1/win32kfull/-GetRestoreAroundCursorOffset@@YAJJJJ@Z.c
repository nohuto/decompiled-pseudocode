/*
 * XREFs of ?GetRestoreAroundCursorOffset@@YAJJJJ@Z @ 0x1402939B4
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRestoreAroundCursorOffset(int a1, int a2, int a3)
{
  unsigned int v3; // r9d
  int v4; // r10d
  unsigned int v6; // r8d

  v3 = a2;
  v4 = a1 - a2;
  if ( a1 <= a3 )
  {
    v6 = a3 - v4;
    if ( a2 > a1 / 2 )
      return v6;
    return v3;
  }
  if ( a2 < a3 / 2 )
    return v3;
  if ( v4 < a3 / 2 )
    return (unsigned int)(a3 - v4);
  else
    return (unsigned int)(a3 * a2 / a1);
}
