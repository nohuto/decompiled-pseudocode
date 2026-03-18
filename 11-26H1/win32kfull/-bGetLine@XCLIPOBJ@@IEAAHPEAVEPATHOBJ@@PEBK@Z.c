/*
 * XREFs of ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z @ 0x1400E1B48
 * Callers:
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1400E1388 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1400E1918 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 * Callees:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1400E1C6C (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 *     ?bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1400E2058 (-bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bGetLine(XCLIPOBJ *this, struct EPATHOBJ *a2, const unsigned int *a3)
{
  int v5; // edi
  __int64 v6; // r8
  int v7; // eax
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF
  int v10; // [rsp+44h] [rbp+1Ch]

  v10 = HIDWORD(a3);
  v9 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 18);
    v7 = *(_DWORD *)(v6 + 24);
    if ( (v7 & 0x2000000) != 0 )
      break;
    if ( *(_DWORD *)v6 > 1u )
    {
      *(_QWORD *)(v6 + 4) = **(_QWORD **)(v6 + 16);
      *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) += 8LL;
      --**((_DWORD **)this + 18);
      if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v5 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 8u) )
        return 1LL;
    }
    else if ( (v7 & 8) != 0 )
    {
      *(_QWORD *)(v6 + 4) = **(_QWORD **)(v6 + 16);
      *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) = *((_QWORD *)this + 18) + 204LL;
      if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, 0x100000u) && !v5 )
        return 1LL;
    }
    else
    {
      if ( !(unsigned int)XCLIPOBJ::bGetMorePoints(this, a2, &v9) )
        return 0LL;
      if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v9 | v5) )
        return 1LL;
      v5 |= *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 5;
    }
  }
  return 0LL;
}
