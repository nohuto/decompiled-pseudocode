/*
 * XREFs of ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18014A184
 * Callers:
 *     ?_Cache_locale@?$_Regex_traits@G@std@@AEAAXXZ @ 0x18014C3FC (-_Cache_locale@-$_Regex_traits@G@std@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1800B06D0 (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800B1B8C (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     ??$_Get_index@$0A@@id@locale@std@@QEAA_KXZ @ 0x18014935C (--$_Get_index@$0A@@id@locale@std@@QEAA_KXZ.c)
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18014D6E8 (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     ?_Throw_bad_cast@std@@YAXXZ @ 0x18014DE30 (-_Throw_bad_cast@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct std::_Facet_base *__fastcall std::use_facet<std::ctype<unsigned short>>(std::locale *this)
{
  unsigned __int64 v2; // rax
  struct std::_Facet_base *v3; // rbx
  struct std::_Facet_base *v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct std::_Facet_base *v7; // [rsp+40h] [rbp+18h] BYREF
  struct std::_Facet_base *v8; // [rsp+48h] [rbp+20h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v7 = (struct std::_Facet_base *)std::_Facetptr<std::ctype<unsigned short>>::_Psave;
  v2 = std::locale::id::_Get_index<0>(std::ctype<unsigned short>::id);
  v3 = std::locale::_Getfacet(this, v2);
  if ( !v3 )
  {
    v3 = v7;
    if ( !v7 )
    {
      if ( std::ctype<unsigned short>::_Getcat(&v7, this) == -1 )
        std::_Throw_bad_cast();
      v4 = v7;
      v8 = v7;
      std::_Facet_Register(v7);
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = v7;
      std::_Facetptr<std::ctype<unsigned short>>::_Psave = (__int64)v7;
      v8 = 0LL;
      std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>((__int64 (__fastcall ****)(_QWORD, __int64))&v8);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v3;
}
