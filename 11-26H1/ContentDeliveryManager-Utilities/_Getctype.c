/*
 * XREFs of _Getctype @ 0x180005C8C
 * Callers:
 *     ?_Getcat@?$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18000734C (-_Getcat@-$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180009A48 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180014914 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015584 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Init@?$ctype@_W@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x18005BCD0 (-_Init@-$ctype@_W@std@@IEAAXAEBV_Locinfo@2@@Z.c)
 * Callees:
 *     _GetLocaleName @ 0x18000DD78 (_GetLocaleName.c)
 */

_Ctypevec *__cdecl Getctype(_Ctypevec *__return_ptr retstr)
{
  const __int16 *v2; // rax
  __int16 *v3; // rdi
  const unsigned __int16 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // xmm1

  *(_OWORD *)&retstr->_Page = 0LL;
  *(_OWORD *)&retstr->_Delfl = 0LL;
  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 4);
  *(&retstr->_Page + 1) = ___lc_codepage_func();
  v2 = (const __int16 *)calloc(0x100uLL, 2uLL);
  retstr->_Table = v2;
  v3 = (__int16 *)v2;
  if ( v2 )
  {
    v4 = __pctype_func();
    v5 = 4LL;
    v6 = 128LL;
    do
    {
      *(_OWORD *)v3 = *(_OWORD *)v4;
      *((_OWORD *)v3 + 1) = *((_OWORD *)v4 + 1);
      *((_OWORD *)v3 + 2) = *((_OWORD *)v4 + 2);
      *((_OWORD *)v3 + 3) = *((_OWORD *)v4 + 3);
      *((_OWORD *)v3 + 4) = *((_OWORD *)v4 + 4);
      *((_OWORD *)v3 + 5) = *((_OWORD *)v4 + 5);
      *((_OWORD *)v3 + 6) = *((_OWORD *)v4 + 6);
      v3 += 64;
      v7 = *((_OWORD *)v4 + 7);
      v4 += 64;
      *((_OWORD *)v3 - 1) = v7;
      --v5;
    }
    while ( v5 );
    retstr->_Delfl = 1;
  }
  else
  {
    retstr->_Table = (const __int16 *)__pctype_func();
    retstr->_Delfl = 0;
  }
  retstr->_LocaleName = (wchar_t *)GetLocaleName(1LL, v6);
  return retstr;
}
