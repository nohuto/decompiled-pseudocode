/*
 * XREFs of ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAA_NPEAUtagPOINT@@@Z @ 0x140135384
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1400658A8 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCursorClip::ApplySpeedBumpAndCornerLock(CCursorClip *this, struct tagPOINT *a2)
{
  unsigned __int64 v2; // rax
  bool v4; // cl
  int x; // r9d
  int v7; // edx
  int v8; // r11d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  LONG v12; // r9d
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  int v16; // r11d
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  unsigned __int64 v20; // rcx

  v2 = (unsigned __int64)*a2;
  v4 = 0;
  if ( *((_BYTE *)this + 268) )
  {
    if ( SHIDWORD(v2) >= *((_DWORD *)this + 13) + 6 && SHIDWORD(v2) < *((_DWORD *)this + 15) - 6 )
    {
      x = a2->x;
    }
    else
    {
      x = *((_DWORD *)this + 12);
      v7 = x;
      if ( (int)v2 > x )
        v7 = v2;
      if ( v7 < *((_DWORD *)this + 14) - 1 )
      {
        if ( (int)v2 > x )
          x = v2;
      }
      else
      {
        x = *((_DWORD *)this + 14) - 1;
      }
      a2->x = x;
    }
    if ( (int)v2 < *((_DWORD *)this + 12) + 6 || (int)v2 >= *((_DWORD *)this + 14) - 6 )
    {
      v8 = *((_DWORD *)this + 13);
      if ( SHIDWORD(v2) <= v8 )
        LODWORD(v9) = *((_DWORD *)this + 13);
      else
        v9 = HIDWORD(v2);
      LODWORD(v10) = *((_DWORD *)this + 15) - 1;
      if ( (int)v9 < (int)v10 )
      {
        if ( SHIDWORD(v2) <= v8 )
          LODWORD(v10) = *((_DWORD *)this + 13);
        else
          v10 = HIDWORD(v2);
      }
      a2->y = v10;
    }
    v4 = __PAIR64__(a2->y, x) != v2;
  }
  if ( *((_BYTE *)this + 269) && !v4 )
  {
    v12 = *((_DWORD *)this + 12);
    v13 = v12 - v2;
    if ( v12 - (int)v2 < 0 )
      v13 = v2 - v12;
    if ( v13 < 6 )
      goto LABEL_34;
    v14 = *((_DWORD *)this + 14) - v2;
    if ( v14 < 0 )
      v14 = v2 - *((_DWORD *)this + 14);
    if ( v14 < 6 )
    {
LABEL_34:
      v15 = *((_DWORD *)this + 12);
      if ( (int)v2 > v12 )
        v15 = v2;
      if ( v15 >= *((_DWORD *)this + 14) - 1 )
      {
        v12 = *((_DWORD *)this + 14) - 1;
      }
      else if ( (int)v2 > v12 )
      {
        v12 = v2;
      }
      a2->x = v12;
    }
    v16 = *((_DWORD *)this + 13);
    v17 = v16 - HIDWORD(v2);
    if ( v16 - HIDWORD(v2) < 0 )
      v17 = HIDWORD(v2) - v16;
    if ( v17 < 6 )
      goto LABEL_48;
    v18 = *((_DWORD *)this + 15) - HIDWORD(v2);
    if ( v18 < 0 )
      v18 = HIDWORD(v2) - *((_DWORD *)this + 15);
    if ( v18 < 6 )
    {
LABEL_48:
      v19 = *((_DWORD *)this + 13);
      if ( SHIDWORD(v2) > v16 )
        v19 = HIDWORD(v2);
      LODWORD(v20) = *((_DWORD *)this + 15) - 1;
      if ( v19 < (int)v20 )
      {
        if ( SHIDWORD(v2) <= v16 )
          LODWORD(v20) = *((_DWORD *)this + 13);
        else
          v20 = HIDWORD(v2);
      }
      a2->y = v20;
    }
    return *a2 != v2;
  }
  return v4;
}
