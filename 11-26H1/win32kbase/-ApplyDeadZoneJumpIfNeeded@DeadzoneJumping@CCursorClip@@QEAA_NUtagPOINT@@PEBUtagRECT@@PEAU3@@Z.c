/*
 * XREFs of ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x140148AC0
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x140217B84 (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     ?DeadzoneJumpSuggestion@Cursor@InputTraceLogging@@SAXIAEBUtagPOINT@@0@Z @ 0x140198A84 (-DeadzoneJumpSuggestion@Cursor@InputTraceLogging@@SAXIAEBUtagPOINT@@0@Z.c)
 *     ?Proximity@DeadzoneJumping@CCursorClip@@CAJJJJ@Z @ 0x1401C514C (-Proximity@DeadzoneJumping@CCursorClip@@CAJJJJ@Z.c)
 */

char __fastcall CCursorClip::DeadzoneJumping::ApplyDeadZoneJumpIfNeeded(
        CCursorClip::DeadzoneJumping *this,
        struct tagPOINT a2,
        const struct tagRECT *a3,
        struct tagPOINT *a4)
{
  _QWORD *v4; // r10
  __int64 v6; // rcx
  LONG left; // r11d
  LONG *p_right; // rax
  LONG x; // r9d
  LONG top; // esi
  LONG *p_bottom; // r8
  bool v12; // cl
  unsigned int v13; // ebx
  unsigned int v14; // r11d
  bool v16; // zf
  __int64 *v17; // r10
  __int64 *v18; // r11
  int v19; // esi
  _DWORD *v20; // rsi
  INT v21; // r9d
  int v22; // eax
  int v23; // r8d
  int v24; // r10d
  int v25; // ecx
  int v26; // eax
  LONG v27; // r8d
  LONG y; // ecx
  int v29; // edx
  int v30; // r8d
  int v31; // eax
  int v32; // r8d
  int v33; // r10d
  int v34; // ecx
  int v35; // eax
  LONG v36; // r8d
  struct tagPOINT v37; // [rsp+48h] [rbp+10h] BYREF

  v37 = a2;
  v4 = *(_QWORD **)this;
  *a4 = a2;
  while ( 1 )
  {
    if ( !v4 )
      return 0;
    v6 = v4[1] - *(_QWORD *)&a3->left;
    if ( !v6 )
      v6 = v4[2] - *(_QWORD *)&a3->right;
    if ( !v6 )
      break;
    v4 = (_QWORD *)*v4;
  }
  left = a3->left;
  p_right = &a3->right;
  if ( a2.x < a3->left )
  {
    x = a3->left;
  }
  else if ( a2.x < *p_right )
  {
    x = a2.x;
  }
  else
  {
    x = *p_right - 1;
  }
  top = a3->top;
  p_bottom = &a3->bottom;
  a2.x = a2.y;
  if ( a2.y < top )
  {
    a2.x = top;
  }
  else if ( a2.y >= *p_bottom )
  {
    a2.x = *p_bottom - 1;
  }
  v12 = 0;
  v13 = x == left;
  if ( a2.x == top )
  {
    v12 = x == left;
    v13 = 2;
    if ( x == left )
      return 0;
  }
  v14 = v13;
  if ( x != *p_right - 1 || (v16 = v13 == 0, v13 = 3, v12 = !v16, !v14) )
  {
    if ( a2.x == *p_bottom - 1 )
    {
      v16 = v13 == 0;
      v13 = 4;
      v12 = !v16;
    }
    else if ( !v13 )
    {
      return 0;
    }
  }
  if ( v12 )
    return 0;
  v17 = (__int64 *)v4[3];
  v18 = 0LL;
  v19 = 0x7FFFFFFF;
  if ( !v17 )
    return 0;
  do
  {
    if ( *((_DWORD *)v17 + 16) == v13 )
    {
      if ( ((v13 - 1) & 0xFFFFFFFD) != 0 )
      {
        y = a4->x;
        v29 = *((_DWORD *)v17 + 8);
        v30 = *((_DWORD *)v17 + 10);
      }
      else
      {
        y = a4->y;
        v29 = *((_DWORD *)v17 + 9);
        v30 = *((_DWORD *)v17 + 11);
      }
      v31 = CCursorClip::DeadzoneJumping::Proximity(y, v29, v30);
      if ( v31 < v19 )
      {
        v18 = v17;
        v19 = v31;
      }
    }
    v17 = (__int64 *)*v17;
  }
  while ( v17 );
  if ( !v18 )
    return 0;
  v20 = (_DWORD *)v18[1];
  v21 = EngMulDiv(1500, *(unsigned __int16 *)(v18[3] + 32), 2540);
  v22 = 2 * v21;
  if ( ((v13 - 1) & 0xFFFFFFFD) != 0 )
  {
    v23 = v20[14];
    v24 = v20[12];
    if ( v23 - v24 <= v22 )
    {
      a4->x = v24 + (v23 - v24) / 2;
    }
    else
    {
      v25 = v24 - a4->x;
      if ( v25 < 0 )
        v25 = a4->x - v24;
      v26 = v23 - a4->x;
      if ( a4->x - v23 > 0 )
        v26 = a4->x - v23;
      if ( v25 >= v26 )
        v27 = v23 - v21;
      else
        v27 = v24 + v21;
      a4->x = v27;
    }
  }
  else
  {
    v32 = v20[15];
    v33 = v20[13];
    if ( v32 - v33 <= v22 )
    {
      a4->y = v33 + (v32 - v33) / 2;
    }
    else
    {
      v34 = v33 - a4->y;
      if ( v34 < 0 )
        v34 = a4->y - v33;
      v35 = v32 - a4->y;
      if ( a4->y - v32 > 0 )
        v35 = a4->y - v32;
      if ( v34 >= v35 )
        v36 = v32 - v21;
      else
        v36 = v33 + v21;
      a4->y = v36;
    }
  }
  InputTraceLogging::Cursor::DeadzoneJumpSuggestion(v13, &v37, a4);
  return 1;
}
