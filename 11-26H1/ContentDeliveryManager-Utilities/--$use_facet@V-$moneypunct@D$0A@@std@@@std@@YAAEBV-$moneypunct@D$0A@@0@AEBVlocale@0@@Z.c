/*
 * XREFs of ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001BAD4
 * Callers:
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x18001CC74 (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001DD7C (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x18001E524 (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800050E0 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180005170 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800052AC (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     ?_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ @ 0x1800052EC (-_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ.c)
 *     ?_Getcat@?$moneypunct@D$0A@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18001C49C (-_Getcat@-$moneypunct@D$0A@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     _CxxThrowException_0 @ 0x180021CDC (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
struct std::_Facet_base *__fastcall std::use_facet<std::moneypunct<char,0>>(__int64 *a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  struct std::_Facet_base *v6; // rbx
  struct std::locale::_Locimp *v7; // rax
  _BYTE pExceptionObject[64]; // [rsp+28h] [rbp-40h] BYREF
  char v10; // [rsp+70h] [rbp+8h] BYREF
  char v11; // [rsp+78h] [rbp+10h] BYREF
  struct std::_Facet_base *v12; // [rsp+80h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v11, 0);
  v2 = std::_Facetptr<std::moneypunct<char,0>>::_Psave;
  v12 = (struct std::_Facet_base *)std::_Facetptr<std::moneypunct<char,0>>::_Psave;
  v3 = std::moneypunct<char,0>::id;
  if ( !std::moneypunct<char,0>::id )
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v10, 0);
    if ( !std::moneypunct<char,0>::id )
      std::moneypunct<char,0>::id = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit((std::_Lockit *)&v10);
    v3 = std::moneypunct<char,0>::id;
  }
  v4 = *a1;
  v5 = 8 * v3;
  if ( v3 >= *(_QWORD *)(*a1 + 24) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = *(struct std::_Facet_base **)(v5 + *(_QWORD *)(v4 + 16));
    if ( v6 )
      goto LABEL_18;
  }
  if ( *(_BYTE *)(v4 + 36) )
  {
    v7 = std::locale::_Getgloballocale();
    if ( v3 >= *((_QWORD *)v7 + 3) )
      v6 = 0LL;
    else
      v6 = *(struct std::_Facet_base **)(v5 + *((_QWORD *)v7 + 2));
  }
  if ( !v6 )
  {
    if ( v2 )
    {
      v6 = (struct std::_Facet_base *)v2;
    }
    else
    {
      if ( std::moneypunct<char,0>::_Getcat(&v12, a1) == -1 )
      {
        bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
        throw (bad_cast *)pExceptionObject;
      }
      v6 = v12;
      std::_Facetptr<std::moneypunct<char,0>>::_Psave = (__int64)v12;
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 8LL))(v12);
      std::_Facet_Register(v6);
    }
  }
LABEL_18:
  std::_Lockit::~_Lockit((std::_Lockit *)&v11);
  return v6;
}
