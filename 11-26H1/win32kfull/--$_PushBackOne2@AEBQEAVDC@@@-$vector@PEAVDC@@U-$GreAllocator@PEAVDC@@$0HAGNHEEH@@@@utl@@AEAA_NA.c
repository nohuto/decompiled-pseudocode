/*
 * XREFs of ??$_PushBackOne2@AEBQEAVDC@@@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_NAEBQEAVDC@@@Z @ 0x140331298
 * Callers:
 *     ??0PALDCOBJs@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@PEAVDC@@@Z @ 0x1402562E8 (--0PALDCOBJs@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@PEAVDC@@@Z.c)
 * Callees:
 *     ?_SetCapacity@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_N_K@Z @ 0x140331688 (-_SetCapacity@-$vector@PEAVDC@@U-$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_N_K@Z.c)
 */

char __fastcall utl::vector<DC *,GreAllocator<DC *,1886221383>>::_PushBackOne2<DC * const &>(_QWORD *a1, char *a2)
{
  char *v3; // rsi
  __int64 v4; // rcx
  char *v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char v8; // di

  v3 = a2;
  v4 = a1[2];
  if ( a1[1] != v4 )
    return 0;
  v5 = &a2[-*a1];
  v6 = (v4 - *a1) >> 3;
  v7 = 7 * (v6 >> 2) + 8;
  if ( v7 > 0xFFFFFFFFFFFFFFFLL )
    v7 = 0xFFFFFFFFFFFFFFFLL;
  v8 = 0;
  if ( v6 < v7 && (unsigned __int8)utl::vector<DC *,GreAllocator<DC *,1886221383>>::_SetCapacity(a1) )
  {
    if ( (unsigned __int64)v5 < a1[1] - *a1 )
      v3 = &v5[*a1];
    v8 = 1;
    *(_QWORD *)a1[1] = *(_QWORD *)v3;
    a1[1] += 8LL;
  }
  return v8;
}
