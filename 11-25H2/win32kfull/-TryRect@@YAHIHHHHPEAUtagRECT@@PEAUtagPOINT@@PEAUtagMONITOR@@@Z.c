/*
 * XREFs of ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1402098C0
 * Callers:
 *     FindBestPos @ 0x140159FA4 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14009119C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x1400911FC (GetMonitorWorkRectForDpi.c)
 */

__int64 __fastcall TryRect(
        __int64 a1,
        __int32 right,
        __int32 bottom,
        int a4,
        int a5,
        struct tagRECT *a6,
        struct tagPOINT *a7,
        struct tagMONITOR *a8)
{
  int v11; // esi
  unsigned int CurrentThreadCompositedDpiContext; // eax
  unsigned int v13; // r8d
  int v14; // esi
  int v15; // esi
  LONG left; // ecx
  LONG v17; // r9d
  LONG v18; // eax
  LONG top; // ecx
  LONG v20; // eax
  bool v22; // cc
  __m128i v23; // [rsp+20h] [rbp-18h] BYREF

  v11 = a1;
  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext(a1);
  GetMonitorWorkRectForDpi(&v23, (__int64)a8, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  v13 = 0;
  if ( !v11 )
  {
    right = a6->left - a4;
    if ( right >= v23.m128i_i32[0] )
      goto LABEL_5;
    return 0LL;
  }
  v14 = v11 - 1;
  if ( !v14 )
  {
    bottom = a6->top - a5;
    if ( bottom >= v23.m128i_i32[1] )
      goto LABEL_5;
    return 0LL;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    right = a6->right;
    v22 = right + a4 <= v23.m128i_i32[2];
    goto LABEL_18;
  }
  if ( v15 == 1 )
  {
    bottom = a6->bottom;
    v22 = bottom + a5 <= v23.m128i_i32[3];
LABEL_18:
    if ( v22 )
      goto LABEL_5;
    return 0LL;
  }
LABEL_5:
  left = a6->left;
  v17 = a6->right;
  a7->x = right;
  a7->y = bottom;
  v18 = right + a4;
  if ( right <= left )
    right = left;
  if ( v18 >= v17 )
    v18 = v17;
  if ( right >= v18 )
    return 1;
  top = a6->top;
  v20 = a6->bottom;
  if ( bottom > top )
    top = bottom;
  if ( bottom + a5 < v20 )
    v20 = bottom + a5;
  if ( top >= v20 )
    return 1;
  return v13;
}
