/*
 * XREFs of ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1400F4C68
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400F4200 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400F5938 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400F5C6C (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 */

__int64 __fastcall XCLIPOBJ::bFindFirstScan(XCLIPOBJ *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  REGION_CORE *v4; // rcx
  struct SCAN *pScan; // rax
  _DWORD *v6; // r8
  unsigned int v7; // r9d
  bool v8; // zf
  struct SCAN *pscnTail; // rax
  _DWORD *v10; // rax
  _DWORD *i; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = *((_QWORD *)this + 7);
  v3 = *(_DWORD *)(v2 + 48);
  if ( v3 <= 2 )
    return 0LL;
  v4 = (REGION_CORE *)(v2 + 24);
  *((_DWORD *)this + 22) = v3 - 2;
  if ( (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x800000) != 0 )
  {
    pScan = REGION_CORE::get_pScan(v4);
    v6 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
    v7 = 0;
    while ( 1 )
    {
      *((_QWORD *)this + 10) = v6;
      if ( *v6 )
      {
        v13 = *((_QWORD *)this + 18);
        if ( v6[2] > *(_DWORD *)(v13 + 156) )
          break;
      }
      v8 = (*((_DWORD *)this + 22))-- == 1;
      if ( v8 )
        return 0LL;
      v6 = (_DWORD *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
    }
    LOBYTE(v7) = v6[1] <= *(_DWORD *)(v13 + 124);
  }
  else
  {
    pscnTail = REGION_CORE::get_pscnTail(v4);
    v10 = (_DWORD *)((char *)pscnTail - (unsigned int)(4 * *((_DWORD *)pscnTail - 1) + 16) - 4);
    v7 = 0;
    for ( i = (_DWORD *)((char *)v10 - (unsigned int)(4 * *v10 + 16) + 4);
          ;
          i = (_DWORD *)((char *)i - (unsigned int)(4 * *(i - 1) + 16)) )
    {
      *((_QWORD *)this + 10) = i;
      if ( *i )
      {
        v12 = *((_QWORD *)this + 18);
        if ( i[1] <= *(_DWORD *)(v12 + 156) )
          break;
      }
      v8 = (*((_DWORD *)this + 22))-- == 1;
      if ( v8 )
        return 0LL;
    }
    LOBYTE(v7) = i[2] > *(_DWORD *)(v12 + 124);
  }
  return v7;
}
