/*
 * XREFs of ?_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18005A8AC
 * Callers:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049C5C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180084ED0 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??0?$ctype@G@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x18004B74C (--0-$ctype@G@std@@QEAA@AEBV_Locinfo@1@_K@Z.c)
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18004BB80 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18004D230 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ?c_str@locale@std@@QEBAPEBDXZ @ 0x18005CE28 (-c_str@locale@std@@QEBAPEBDXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::ctype<wchar_t>::_Getcat(__int64 *a1, std::locale *a2)
{
  char v4; // bl
  void *v5; // rsi
  char *v6; // rax
  std::_Locinfo *v7; // rax
  __int64 v8; // rax
  void *v10[14]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x60uLL);
    if ( v5 )
    {
      v6 = (char *)std::locale::c_str(a2);
      v7 = std::_Locinfo::_Locinfo((std::_Locinfo *)v10, v6);
      v4 = 1;
      v8 = std::ctype<unsigned short>::ctype<unsigned short>((__int64)v5, (__int64)v7, 0);
    }
    else
    {
      v8 = 0LL;
    }
    *a1 = v8;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo(v10);
  }
  return 2LL;
}
