/*
 * XREFs of ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1400E1C6C
 * Callers:
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z @ 0x1400E1B48 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z.c)
 * Callees:
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEBU_POINTFIX@@0@Z @ 0x1400E1DD4 (-bInit@DDA_CLIPLINE@@QEAAHPEBU_POINTFIX@@0@Z.c)
 *     ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1400E2364 (-vUpdateStyleState@XCLIPOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bEnumStartLine(XCLIPOBJ *this, int a2)
{
  char *v2; // rbx
  int v4; // eax
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // ecx
  char *v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // ecx
  char *v13; // r8
  __int64 v14; // rcx

  v2 = (char *)this + 144;
  *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) = a2 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x200000;
  v4 = DDA_CLIPLINE::bInit(
         (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
         (const struct _POINTFIX *)(*((_QWORD *)this + 18) + 4LL),
         *(const struct _POINTFIX **)(*((_QWORD *)this + 18) + 16LL));
  v5 = *(_DWORD **)v2;
  if ( v4 )
  {
    v5[28] = v5[24];
    *(_DWORD *)(*(_QWORD *)v2 + 116LL) = *(_DWORD *)(*(_QWORD *)v2 + 100LL);
    *(_DWORD *)(*(_QWORD *)v2 + 120LL) = *(_DWORD *)(*(_QWORD *)v2 + 104LL);
    *(_DWORD *)(*(_QWORD *)v2 + 124LL) = *(_DWORD *)(*(_QWORD *)v2 + 108LL);
    v6 = *(_QWORD *)v2;
    v7 = *(_DWORD *)(*(_QWORD *)v2 + 64LL);
    if ( (v7 & 5) != 0 )
    {
      v8 = *(_DWORD *)(v6 + 112);
      *(_DWORD *)(v6 + 112) = *(_DWORD *)(v6 + 116);
      *(_DWORD *)(v6 + 116) = v8;
      v9 = (char *)this + 144;
    }
    else
    {
      v9 = v2;
    }
    if ( (v7 & 8) != 0 )
    {
      v2 = v9;
      *(_DWORD *)(v6 + 116) = -*(_DWORD *)(v6 + 116);
    }
    if ( (v7 & 0x20) != 0 )
      *(_DWORD *)(v6 + 112) = -*(_DWORD *)(v6 + 112);
    v10 = *(_QWORD *)v2;
    v11 = *(_DWORD *)(*(_QWORD *)v2 + 64LL);
    if ( (v11 & 5) != 0 )
    {
      v12 = *(_DWORD *)(v10 + 120);
      v2 = (char *)this + 144;
      *(_DWORD *)(v10 + 120) = *(_DWORD *)(v10 + 124);
      *(_DWORD *)(v10 + 124) = v12;
    }
    if ( (v11 & 8) != 0 )
      *(_DWORD *)(v10 + 124) = -*(_DWORD *)(v10 + 124);
    v13 = v2;
    if ( (v11 & 0x20) != 0 )
    {
      v13 = (char *)this + 144;
      *(_DWORD *)(v10 + 120) = -*(_DWORD *)(v10 + 120);
    }
    v14 = *((_QWORD *)this + 18);
    if ( (*(_DWORD *)(v14 + 24) & 1) != 0 )
      *(_QWORD *)(v14 + 204) = *(_QWORD *)(v14 + 4);
    if ( *(int *)(*(_QWORD *)v2 + 180LL) > 0 )
    {
      *(_DWORD *)(*(_QWORD *)v2 + 172LL) = *(_DWORD *)(*(_QWORD *)v2 + 176LL);
      if ( (*(_DWORD *)(*(_QWORD *)v13 + 24LL) & 4) != 0 )
        *(_DWORD *)(*(_QWORD *)v13 + 172LL) = 0;
      XCLIPOBJ::vUpdateStyleState(this);
    }
    return 1LL;
  }
  else
  {
    v5[6] |= 0x10000u;
    return 0LL;
  }
}
