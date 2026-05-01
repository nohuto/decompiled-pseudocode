/*
 * XREFs of ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x1804C647C
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1804C6BD0 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall Geometry::CRect::GetNearestEdgeToPointDistanceSquared(
        Geometry::CRect *this,
        const struct tagPOINT *a2)
{
  bool v2; // al
  int *v3; // rdx
  int *v4; // rcx
  _DWORD *v5; // r10
  int v6; // r8d
  int v7; // r8d
  _DWORD *v8; // r11
  int v9; // r9d
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // ebx
  int v16; // ecx
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // ebx
  int v22; // r9d
  int v23; // ecx
  int v24; // eax
  int v25; // r10d
  int v26; // edi
  int v27; // eax

  v2 = Geometry::CRect::Contains(this, a2);
  v6 = 0;
  if ( !v2 )
  {
    v7 = v4[1];
    v8 = v4 + 3;
    v9 = v3[1];
    if ( v9 >= v7 && v9 <= *v8 )
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
    if ( *v3 >= *v4 && v15 <= v4[2] )
    {
      v16 = v7 - v9;
      if ( v7 - v9 < 0 )
        v16 = v9 - v7;
      v17 = v9 - *v8;
      v14 = -v17;
      if ( v17 > 0 )
        v14 = v17;
      if ( v16 < v14 )
        v14 = v16;
      return (unsigned int)(v14 * v14);
    }
    v18 = v15 - *v4;
    v19 = v9;
    v20 = v18 * v18;
    v21 = (v15 - v5[2]) * (v15 - v5[2]);
    v22 = (v9 - *v8) * (v9 - *v8);
    v23 = (v19 - v7) * (v19 - v7);
    v24 = v20;
    v25 = v22 + v20;
    v26 = v23 + v20;
    v6 = v21 + v23;
    if ( v22 + v20 >= v22 + v21 )
      v24 = v21;
    v27 = v22 + v24;
    if ( v26 >= v6 )
      v20 = v21;
    if ( v23 + v20 >= v27 )
    {
      v6 = v22 + v21;
      if ( v25 < v22 + v21 )
        return (unsigned int)v25;
    }
    else if ( v26 < v6 )
    {
      return (unsigned int)v26;
    }
  }
  return (unsigned int)v6;
}
