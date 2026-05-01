/*
 * XREFs of ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x1804B46E8
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1804B4E20 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802388B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall Geometry::CRect::GetNearestEdgeToPointDistanceSquared(
        Geometry::CRect *this,
        const struct tagPOINT *a2)
{
  bool v2; // al
  int *v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // r10
  int v6; // r8d
  int v7; // r9d
  _DWORD *v8; // r11
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // r9d
  int v19; // r9d
  int v20; // edx
  int v21; // ecx
  int v22; // ebx
  int v23; // eax
  int v24; // r10d
  int v25; // edi
  int v26; // eax

  v2 = Geometry::CRect::Contains(this, a2);
  v6 = 0;
  if ( !v2 )
  {
    v7 = v3[1];
    v8 = v5 + 3;
    v9 = *(_DWORD *)(v4 + 4);
    if ( v7 >= v9 && v7 <= *v8 )
    {
      v10 = *v3;
      v11 = *v3 - *v5;
      v12 = *v5 - *v3;
      if ( v12 < 0 )
        v12 = v11;
      v13 = v10 - v5[2];
      v14 = -v13;
      if ( v13 > 0 )
        v14 = v13;
      if ( v12 < v14 )
        v14 = v12;
      return (unsigned int)(v14 * v14);
    }
    v15 = *v3;
    if ( *v3 >= *v5 && v15 <= v5[2] )
    {
      v16 = v7 - v9;
      v17 = v9 - v7;
      if ( v17 < 0 )
        v17 = v16;
      v18 = v7 - *v8;
      v14 = -v18;
      if ( v18 > 0 )
        v14 = v18;
      if ( v17 < v14 )
        v14 = v17;
      return (unsigned int)(v14 * v14);
    }
    v19 = (v7 - *v8) * (v7 - *v8);
    v20 = (v3[1] - v9) * (v3[1] - v9);
    v21 = (v15 - *v5) * (v15 - *v5);
    v22 = (v15 - v5[2]) * (v15 - v5[2]);
    v23 = v21;
    v24 = v19 + v21;
    v25 = v21 + v20;
    v6 = v22 + v20;
    if ( v19 + v21 >= v19 + v22 )
      v23 = v22;
    v26 = v19 + v23;
    if ( v25 >= v6 )
      v21 = v22;
    if ( v20 + v21 >= v26 )
    {
      v6 = v19 + v22;
      if ( v24 < v19 + v22 )
        return (unsigned int)v24;
    }
    else if ( v25 < v6 )
    {
      return (unsigned int)v25;
    }
  }
  return (unsigned int)v6;
}
