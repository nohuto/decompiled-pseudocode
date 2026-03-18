/*
 * XREFs of ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1400E1A18
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1400E1918 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 * Callees:
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1400E1654 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bRecordSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400E21D4 (-bRecordSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400E22E0 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400E248C (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400E2CC4 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bEnumLine(XCLIPOBJ *this, unsigned int a2, struct _CLIPLINE *a3)
{
  ULONG *p_c; // r11
  _DWORD *v6; // r8
  __int64 v7; // rcx
  int i; // eax

  p_c = &a3->c;
  a3->ptfxA = *(POINTFIX *)(*((_QWORD *)this + 18) + 4LL);
  a3->ptfxB = **(POINTFIX **)(*((_QWORD *)this + 18) + 16LL);
  a3->c = 0;
  v6 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (int)v6[45] > 0 )
    a3->lStyleState = (unsigned __int16)(v6[43] % v6[50]) | ((unsigned __int16)(v6[43] / v6[50]) << 16);
  v7 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v7 + 24) & 0x10000) != 0 )
    return 0LL;
  *(_DWORD *)(v7 + 36) = ((unsigned __int64)a2 - 24) >> 3;
  *(_QWORD *)(*((_QWORD *)this + 18) + 48LL) = a3->arun;
  *(_QWORD *)(*((_QWORD *)this + 18) + 40LL) = p_c;
  *(_DWORD *)(*((_QWORD *)this + 18) + 56LL) = 0x7FFFFFFF;
  if ( !*(_DWORD *)(*((_QWORD *)this + 18) + 36LL) )
    return 0LL;
  if ( !(unsigned int)XCLIPOBJ::bSetup(this) )
  {
LABEL_6:
    *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x10000u;
    return 0LL;
  }
  while ( (unsigned int)XCLIPOBJ::bRecordSegment(this) )
  {
    for ( i = XCLIPOBJ::bFindNextSegment(this); !i; i = XCLIPOBJ::bFindFirstSegment(this) )
    {
      if ( !(unsigned int)XCLIPOBJ::bFindNextScan(this) )
        goto LABEL_6;
    }
  }
  return 1LL;
}
