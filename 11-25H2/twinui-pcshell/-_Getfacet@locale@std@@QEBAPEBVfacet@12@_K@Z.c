/*
 * XREFs of ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18006572C
 * Callers:
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800653A8 (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x1805ECF4C (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 * Callees:
 *     <none>
 */

const struct std::locale::facet *__fastcall std::locale::_Getfacet(std::locale *this, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  const struct std::locale::facet *result; // rax
  __int64 v6; // rax

  v3 = *((_QWORD *)this + 1);
  v4 = 8 * a2;
  if ( a2 >= *(_QWORD *)(v3 + 24) )
  {
    result = 0LL;
  }
  else
  {
    result = *(const struct std::locale::facet **)(v4 + *(_QWORD *)(v3 + 16));
    if ( result )
      return result;
  }
  if ( *(_BYTE *)(v3 + 36) )
  {
    v6 = std::locale::_Getgloballocale();
    if ( a2 >= *(_QWORD *)(v6 + 24) )
      return 0LL;
    else
      return *(const struct std::locale::facet **)(v4 + *(_QWORD *)(v6 + 16));
  }
  return result;
}
