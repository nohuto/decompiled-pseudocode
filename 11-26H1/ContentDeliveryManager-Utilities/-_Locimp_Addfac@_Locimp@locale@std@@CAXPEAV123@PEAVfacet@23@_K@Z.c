/*
 * XREFs of ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x180009868
 * Callers:
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180009A48 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180014914 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015584 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001DD7C (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Init@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@AEAAXPEBV?$codecvt_utf8@G$0BAPPPP@$0A@@2@@Z @ 0x18006AC6C (-_Init@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@.c)
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004758 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800050E0 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180005170 (--1_Lockit@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::locale::_Locimp::_Locimp_Addfac(void **a1, struct std::locale::facet *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rdi
  void *v7; // rax
  void *v8; // rcx
  __int64 v9; // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // rax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v11, 0);
  if ( (unsigned __int64)a1[3] <= a3 )
  {
    v6 = a3 + 1;
    if ( a3 + 1 < 0x28 )
      v6 = 40LL;
    v7 = realloc(a1[2], 8 * v6);
    if ( !v7 )
      std::_Xbad_alloc();
    a1[2] = v7;
    while ( 1 )
    {
      v8 = a1[3];
      if ( (unsigned __int64)v8 >= v6 )
        break;
      *((_QWORD *)a1[2] + (_QWORD)v8) = 0LL;
      a1[3] = (char *)a1[3] + 1;
    }
  }
  (*(void (__fastcall **)(struct std::locale::facet *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = *((_QWORD *)a1[2] + a3);
  if ( v9 )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v10 )
      (**v10)(v10, 1LL);
  }
  *((_QWORD *)a1[2] + a3) = a2;
  std::_Lockit::~_Lockit((std::_Lockit *)&v11);
}
