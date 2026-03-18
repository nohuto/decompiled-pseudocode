/*
 * XREFs of ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400E2CC4
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1400E1A18 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400E248C (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1400E1278 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1400E1604 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bFindFirstSegment(XCLIPOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  int v5; // edi
  struct _POINTL *v6; // r8
  LONG y; // edx
  struct _POINTL *v8; // r8
  LONG x; // edx
  LONG v10; // r9d
  _DWORD *v11; // rbp
  int v12; // r8d
  int v13; // r10d
  int v14; // r11d
  int v15; // ecx
  int v16; // esi
  int v17; // ecx
  int v18; // r11d
  int v19; // edx
  int v20; // ecx
  int v21; // r11d
  int *v22; // r9
  struct _POINTL *v23; // r8
  int v24; // ecx
  struct _POINTL *v25; // rsi
  int v26; // r10d
  LONG v27; // edx
  int i; // r11d
  int v29; // ecx
  LONG v30; // edx
  int v32; // ecx
  int v33; // esi
  int v34; // ecx
  int v35; // edx

  *(_QWORD *)(*((_QWORD *)this + 18) + 128LL) = *(_QWORD *)(*((_QWORD *)this + 18) + 152LL);
  v2 = *((_QWORD *)this + 18);
  v3 = *((_QWORD *)this + 10);
  if ( (*(_DWORD *)(v2 + 24) & 0x800000) != 0 )
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 4);
    v4 = *(_DWORD *)(*((_QWORD *)this + 10) + 8LL);
  }
  else
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 8);
    v4 = *(_DWORD *)(*((_QWORD *)this + 10) + 4LL);
  }
  v5 = 0;
  *(_DWORD *)(*((_QWORD *)this + 18) + 168LL) = v4;
  v6 = (struct _POINTL *)*((_QWORD *)this + 18);
  y = v6[20].y;
  if ( (((unsigned int)v6[3].x >> 23) & 1) == v6[16].y < y )
  {
    XCLIPOBJ::vIntersectScan(this, y, 0LL, v6 + 16, &v6[3].y);
  }
  else
  {
    v6[3].y = v6[20].x;
    *(_DWORD *)(*((_QWORD *)this + 18) + 164LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 132LL);
  }
  v8 = (struct _POINTL *)*((_QWORD *)this + 18);
  x = v8[21].x;
  v10 = v8[15].y;
  if ( (((unsigned int)v8[3].x >> 23) & 1) == v10 >= x )
  {
    XCLIPOBJ::vIntersectScan(this, x, v8 + 18, v8 + 19, (int *)&v8[20]);
  }
  else
  {
    v8[18].y = v10;
    *(_DWORD *)(*((_QWORD *)this + 18) + 144LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 120LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 168LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) + 1;
    v11 = (_DWORD *)*((_QWORD *)this + 18);
    v12 = v11[16];
    v13 = v11[25];
    v14 = *(_DWORD *)((char *)v11 + ((v12 & 5) != 0 ? 4 : 0) + 96);
    v15 = v11[24];
    if ( (v12 & 5) == 0 )
      v15 = v11[25];
    v16 = -v15;
    if ( (v12 & 8) == 0 )
      v16 = v15;
    v17 = -v14;
    if ( (v12 & 0x20) == 0 )
      v17 = *(_DWORD *)((char *)v11 + ((v11[16] & 5) != 0 ? 4 : 0) + 96);
    if ( (v12 & 5) == 0 )
      v13 = v11[24];
    v18 = -v14;
    if ( (v12 & 0x20) == 0 )
      v18 = v13;
    if ( (v12 & 5) != 0 )
    {
      v32 = v11[31] - v16;
      v33 = v16 - v11[31];
      if ( v32 >= 0 )
        v33 = v32;
      v11[40] = v33;
    }
    else
    {
      v19 = v11[30] - v17;
      v20 = v11[30] - v18;
      v21 = v18 - v11[30];
      if ( v19 >= 0 )
        v21 = v20;
      v11[40] = v21;
    }
  }
  v22 = (int *)*((_QWORD *)this + 10);
  v23 = (struct _POINTL *)*((_QWORD *)this + 18);
  v24 = *v22;
  *((_DWORD *)this + 24) = 0;
  v25 = v23 + 16;
  v26 = v24 - 1;
  *((_DWORD *)this + 26) = v24 - 1;
  v27 = v23[16].x;
  if ( v27 >= v22[v24 + 2] )
  {
    *((_DWORD *)this + 24) = v26;
    if ( (v23[3].x & 0x400000) != 0 )
      return 0LL;
  }
  else if ( v27 < v22[3] )
  {
    if ( (v23[3].x & 0x400000) == 0 )
      return 0LL;
    v24 = -1;
  }
  else
  {
    for ( i = 0; ; i = v29 )
    {
      while ( 1 )
      {
        v29 = (v26 + i) / 2;
        *((_DWORD *)this + 24) = v29;
        v30 = v25->x;
        if ( v25->x >= v22[v29 + 3] )
          break;
        v26 = v29 - 1;
        if ( v30 >= v22[v29 + 2] )
          goto LABEL_26;
      }
      if ( v30 < v22[++v29 + 3] )
        break;
    }
    *((_DWORD *)this + 24) = v29;
LABEL_26:
    v24 = v29 - (((unsigned int)v23[3].x >> 22) & 1);
  }
  *((_DWORD *)this + 24) = v24;
  if ( (((unsigned __int8)v24 ^ (unsigned __int8)((unsigned int)v23[3].x >> 22)) & 1) != 0 )
    return 1LL;
  v34 = *((_DWORD *)this + 25) + v24;
  *((_DWORD *)this + 24) = v34;
  v35 = v22[v34 + 3];
  LOBYTE(v5) = v35 > v23[18].x;
  if ( (((unsigned int)v23[3].x >> 22) & 1) != v5 )
  {
    XCLIPOBJ::bIntersectWall(this, v35, 0LL, v23 + 16, &v23[3].y);
    return 1LL;
  }
  return 0LL;
}
