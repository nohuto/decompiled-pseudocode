/*
 * XREFs of ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1401767D0
 * Callers:
 *     FindBestPos @ 0x14017604C (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
 */

__int64 __fastcall TryRect(
        int a1,
        __int32 right,
        __int32 bottom,
        int a4,
        int a5,
        struct tagRECT *a6,
        struct tagPOINT *a7,
        struct tagMONITOR *a8)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  unsigned int v13; // r9d
  int v14; // esi
  int v15; // esi
  bool v16; // cc
  LONG v18; // edx
  LONG left; // ecx
  LONG v20; // eax
  LONG top; // ecx
  __m128i v22; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorWorkRectForDpi(&v22, (__int64)a8, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  v13 = 0;
  if ( a1 )
  {
    v14 = a1 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
          goto LABEL_8;
        bottom = a6->bottom;
        v16 = bottom + a5 <= v22.m128i_i32[3];
      }
      else
      {
        right = a6->right;
        v16 = right + a4 <= v22.m128i_i32[2];
      }
      if ( !v16 )
        return 0LL;
    }
    else
    {
      bottom = a6->top - a5;
      if ( bottom < v22.m128i_i32[1] )
        return 0LL;
    }
  }
  else
  {
    right = a6->left - a4;
    if ( right < v22.m128i_i32[0] )
      return 0LL;
  }
LABEL_8:
  v18 = right + a4;
  left = a6->left;
  a7->x = right;
  a7->y = bottom;
  if ( right + a4 >= a6->right )
    v18 = a6->right;
  if ( right <= left )
    right = left;
  if ( right >= v18 )
    return 1;
  v20 = a6->bottom;
  top = a6->top;
  if ( bottom + a5 < v20 )
    v20 = bottom + a5;
  if ( bottom > top )
    top = bottom;
  if ( top >= v20 )
    return 1;
  return v13;
}
