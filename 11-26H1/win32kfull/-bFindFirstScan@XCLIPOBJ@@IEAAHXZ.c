/*
 * XREFs of ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1400E2FFC
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400E248C (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A973C (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400E3898 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 */

__int64 __fastcall XCLIPOBJ::bFindFirstScan(XCLIPOBJ *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  REGION_CORE *v4; // rcx
  struct SCAN *pScan; // rax
  _DWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // rcx
  struct SCAN *pscnTail; // rax
  _DWORD *v11; // rdx
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf

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
        v8 = *((_QWORD *)this + 18);
        if ( v6[2] > *(_DWORD *)(v8 + 156) )
          break;
      }
      v14 = (*((_DWORD *)this + 22))-- == 1;
      if ( v14 )
        return 0LL;
      v6 = (_DWORD *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
    }
    LOBYTE(v7) = v6[1] <= *(_DWORD *)(v8 + 124);
  }
  else
  {
    pscnTail = REGION_CORE::get_pscnTail(v4);
    v11 = (_DWORD *)((char *)pscnTail - (unsigned int)(4 * *((_DWORD *)pscnTail - 1) + 16) - 4);
    v12 = (_DWORD *)((char *)v11 - (unsigned int)(4 * *v11 + 16) + 4);
    v7 = 0;
    while ( 1 )
    {
      *((_QWORD *)this + 10) = v12;
      if ( *v12 )
      {
        v13 = *((_QWORD *)this + 18);
        if ( v12[1] <= *(_DWORD *)(v13 + 156) )
          break;
      }
      v14 = (*((_DWORD *)this + 22))-- == 1;
      if ( v14 )
        return 0LL;
      v12 = (_DWORD *)((char *)v12 - (unsigned int)(4 * *(v12 - 1) + 16));
    }
    LOBYTE(v7) = v12[2] > *(_DWORD *)(v13 + 124);
  }
  return v7;
}
