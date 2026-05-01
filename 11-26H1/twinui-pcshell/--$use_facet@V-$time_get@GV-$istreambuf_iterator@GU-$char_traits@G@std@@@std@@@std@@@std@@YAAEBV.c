/*
 * XREFs of ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18013BF44
 * Callers:
 *     ??$?5GU?$char_traits@G@std@@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@AEAV10@AEBU?$_Timeobj@GPEAUtm@@@0@@Z @ 0x18013B650 (--$-5GU-$char_traits@G@std@@@std@@YAAEAV-$basic_istream@GU-$char_traits@G@std@@@0@AEAV10@AEBU-$_.c)
 * Callees:
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18013C1D4 (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     ?_Throw_bad_cast@std@@YAXXZ @ 0x1802C1F98 (-_Throw_bad_cast@std@@YAXXZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1802CDB08 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     ??$_Get_index@$0A@@id@locale@std@@QEAA_KXZ @ 0x180316D18 (--$_Get_index@$0A@@id@locale@std@@QEAA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct std::_Facet_base *__fastcall std::use_facet<std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(
        std::locale *this)
{
  unsigned __int64 v2; // rax
  struct std::_Facet_base *v3; // rbx
  struct std::_Facet_base *v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct std::_Facet_base *v7; // [rsp+40h] [rbp+18h] BYREF
  struct std::_Facet_base *v8; // [rsp+48h] [rbp+20h]

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v7 = (struct std::_Facet_base *)std::_Facetptr<std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>>::_Psave;
  v2 = std::locale::id::_Get_index<0>(std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::id);
  v3 = std::locale::_Getfacet(this, v2);
  if ( !v3 )
  {
    v3 = v7;
    if ( !v7 )
    {
      if ( std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getcat(&v7, this) == -1 )
        std::_Throw_bad_cast();
      v4 = v7;
      v8 = v7;
      std::_Facet_Register(v7);
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = v7;
      std::_Facetptr<std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>>::_Psave = (__int64)v7;
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v3;
}
