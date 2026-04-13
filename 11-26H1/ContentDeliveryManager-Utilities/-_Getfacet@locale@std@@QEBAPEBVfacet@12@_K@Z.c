/*
 * XREFs of ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18005AAB0
 * Callers:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049C5C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180049D38 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180049E14 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180084ED0 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18009F4D0 (--$use_facet@V-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x18009F5AC (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800B52A4 (--$use_facet@V-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAA.c)
 * Callees:
 *     ?_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ @ 0x1800052EC (-_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ.c)
 */

const struct std::locale::facet *__fastcall std::locale::_Getfacet(std::locale *this, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdi
  const struct std::locale::facet *result; // rax
  struct std::locale::_Locimp *v7; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)this;
  v5 = 8 * a2;
  if ( a2 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
  {
    result = 0LL;
  }
  else
  {
    result = *(const struct std::locale::facet **)(v5 + *(_QWORD *)(v4 + 16));
    if ( result )
      return result;
  }
  if ( *(_BYTE *)(v4 + 36) )
  {
    v7 = std::locale::_Getgloballocale();
    if ( a2 < *((_QWORD *)v7 + 3) )
      return *(const struct std::locale::facet **)(v5 + *((_QWORD *)v7 + 2));
    return (const struct std::locale::facet *)v3;
  }
  return result;
}
