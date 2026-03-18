/*
 * XREFs of ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400E22E0
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1400E1A18 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400E248C (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1400E1278 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bFindNextSegment(XCLIPOBJ *this)
{
  struct _POINTL *v1; // r9
  int v2; // r8d
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  __int64 v6; // rax
  int v7; // edx

  v1 = (struct _POINTL *)*((_QWORD *)this + 18);
  v2 = 0;
  v4 = *((_DWORD *)this + 24);
  if ( (v1[3].x & 0x400000) != 0 )
  {
    if ( v4 >= *((_DWORD *)this + 26) )
      return 0LL;
  }
  else if ( !v4 )
  {
    return 0LL;
  }
  v5 = *((_DWORD *)this + 25) + v4;
  v6 = *((_QWORD *)this + 10);
  *((_DWORD *)this + 24) = v5;
  v7 = *(_DWORD *)(v6 + 4LL * (int)v5 + 12);
  LOBYTE(v2) = v7 > v1[18].x;
  if ( (((unsigned int)v1[3].x >> 22) & 1) == v2 )
    return 0LL;
  XCLIPOBJ::bIntersectWall(this, v7, 0LL, v1 + 16, &v1[3].y);
  return 1LL;
}
