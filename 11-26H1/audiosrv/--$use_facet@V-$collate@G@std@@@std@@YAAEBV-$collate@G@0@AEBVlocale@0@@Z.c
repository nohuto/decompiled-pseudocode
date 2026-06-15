/*
 * XREFs of ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x18014A0A8
 * Callers:
 *     ?_Cache_locale@?$_Regex_traits@G@std@@AEAAXXZ @ 0x18014C3FC (-_Cache_locale@-$_Regex_traits@G@std@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1800B06D0 (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800B1B8C (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     ??$_Get_index@$0A@@id@locale@std@@QEAA_KXZ @ 0x18014935C (--$_Get_index@$0A@@id@locale@std@@QEAA_KXZ.c)
 *     ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18014D5E4 (-_Getcat@-$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18014D6E8 (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     ?_Throw_bad_cast@std@@YAXXZ @ 0x18014DE30 (-_Throw_bad_cast@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct std::_Facet_base *__fastcall std::use_facet<std::collate<unsigned short>>(std::locale *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  struct std::_Facet_base *v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct std::_Facet_base *v7; // [rsp+40h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v2 = std::_Facetptr<std::collate<unsigned short>>::_Psave;
  v7 = (struct std::_Facet_base *)std::_Facetptr<std::collate<unsigned short>>::_Psave;
  v3 = std::locale::id::_Get_index<0>(std::collate<unsigned short>::id);
  v4 = std::locale::_Getfacet(this, v3);
  if ( !v4 )
  {
    if ( v2 )
    {
      v4 = (struct std::_Facet_base *)v2;
    }
    else
    {
      if ( std::collate<unsigned short>::_Getcat(&v7, this) == -1 )
        std::_Throw_bad_cast();
      v4 = v7;
      std::_Facet_Register(v7);
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v4 + 8LL))(v4);
      std::_Facetptr<std::collate<unsigned short>>::_Psave = (__int64)v4;
      v7 = 0LL;
      std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>((__int64 (__fastcall ****)(_QWORD, __int64))&v7);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v4;
}
