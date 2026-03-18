/*
 * XREFs of ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1401FC428
 * Callers:
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
 */

void __fastcall CheckPlacementBounds(
        struct tagRECT *a1,
        struct tagPOINT *a2,
        struct tagPOINT *a3,
        struct tagMONITOR *a4)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  LONG v9; // esi
  int v10; // r11d
  LONG top; // r13d
  __int32 v12; // ebx
  unsigned __int64 v13; // r14
  int v14; // r8d
  __int64 bottom; // rcx
  int v16; // r10d
  LONG left; // ebp
  int v18; // r9d
  __int64 right; // rdx
  __int32 v20; // edi
  __int32 v21; // r14d
  __int64 v22; // rcx
  int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // rcx
  LONG y; // eax
  int v27; // r8d
  __int32 v28; // edx
  int v29; // ecx
  LONG x; // eax
  int v31; // edx
  int v32; // eax
  LONG v33; // eax
  __m128i v34; // [rsp+20h] [rbp-38h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorWorkRectForDpi(&v34, (__int64)a4, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  v9 = v34.m128i_i32[0];
  v10 = -1;
  top = a1->top;
  v12 = v34.m128i_i32[2];
  v13 = HIDWORD(v34.m128i_i64[0]);
  if ( top < v34.m128i_i32[1] )
    v14 = -1;
  else
    v14 = top > v34.m128i_i32[3];
  bottom = (unsigned int)a1->bottom;
  if ( (int)bottom < v34.m128i_i32[1] )
    v16 = -1;
  else
    v16 = (int)bottom > v34.m128i_i32[3];
  left = a1->left;
  if ( a1->left < v34.m128i_i32[0] )
    v18 = -1;
  else
    v18 = left > v34.m128i_i32[2];
  right = (unsigned int)a1->right;
  if ( (int)right >= v34.m128i_i32[0] )
    v10 = (int)right > v34.m128i_i32[2];
  if ( v14 * v16 > 0 || v18 * v10 > 0 )
  {
    if ( v14 >= 0 )
    {
      if ( v16 <= 0 )
        goto LABEL_39;
      bottom = (unsigned int)(bottom - top);
      if ( v34.m128i_i32[3] - (int)bottom > v34.m128i_i32[1] )
        LODWORD(v13) = v34.m128i_i32[3] - bottom;
      a1->bottom = v13 + bottom;
    }
    else
    {
      bottom = (unsigned int)(bottom - top);
      a1->bottom = bottom;
    }
    a1->top = v13;
LABEL_39:
    if ( v18 >= 0 )
    {
      if ( v10 > 0 )
      {
        right = (unsigned int)(right - left);
        bottom = (unsigned int)(v12 - right);
        v33 = v9;
        if ( (int)bottom > v9 )
          v33 = v12 - right;
        a1->left = v33;
        a1->right = right + v33;
      }
    }
    else
    {
      right = (unsigned int)(right - left);
      a1->left = v9;
      a1->right = right;
    }
  }
  v20 = v34.m128i_i32[3];
  v21 = v34.m128i_i32[1];
  if ( a2->x != -1 )
  {
    v22 = *(_QWORD *)(W32GetUserSessionState(bottom, right) + 19904);
    v23 = *(_DWORD *)(v22 + 2084);
    v25 = *(_QWORD *)(W32GetUserSessionState(v22, v24) + 19904);
    y = a2->y;
    v27 = y >= v21 ? y > v20 : -1;
    v28 = y + *(_DWORD *)(v25 + 2088);
    v29 = v28 >= v21 ? v28 > v20 : -1;
    x = a2->x;
    v31 = a2->x >= v9 ? x > v12 : -1;
    v32 = x + v23 >= v9 ? x + v23 > v12 : -1;
    if ( v27 * v29 > 0 || v31 * v32 > 0 )
    {
      a2->y = -1;
      a2->x = -1;
    }
  }
  if ( a3->x != -1 && (v9 + a3->x >= v12 || v21 + a3->y >= v20) )
    *a3 = 0LL;
}
