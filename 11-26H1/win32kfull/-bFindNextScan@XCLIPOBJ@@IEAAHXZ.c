/*
 * XREFs of ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1400E1654
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1400E1A18 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400E248C (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bFindNextScan(XCLIPOBJ *this)
{
  __int64 v1; // r9
  int v2; // eax
  _DWORD *v3; // rdx
  _DWORD *v4; // rdx
  int v6; // eax
  _DWORD *v7; // rdx
  _DWORD *v8; // r10

  v1 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v1 + 24) & 0x800000) != 0 )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)this + 22);
      if ( v6 == 1 )
        break;
      v7 = (_DWORD *)*((_QWORD *)this + 10);
      *((_DWORD *)this + 22) = v6 - 1;
      v8 = (_DWORD *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
      *((_QWORD *)this + 10) = v8;
      if ( v8[1] > *(_DWORD *)(v1 + 124) )
        break;
      if ( *v8 )
        return 1LL;
    }
  }
  else
  {
    while ( 1 )
    {
      v2 = *((_DWORD *)this + 22);
      if ( v2 == 1 )
        break;
      v3 = (_DWORD *)(*((_QWORD *)this + 10) - 4LL);
      *((_DWORD *)this + 22) = v2 - 1;
      v4 = (_DWORD *)((char *)v3 - (unsigned int)(4 * *v3 + 16) + 4);
      *((_QWORD *)this + 10) = v4;
      if ( v4[2] <= *(_DWORD *)(v1 + 124) )
        break;
      if ( *v4 )
        return 1LL;
    }
  }
  return 0LL;
}
