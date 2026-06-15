/*
 * XREFs of ?_Init@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXPEBG_KH@Z @ 0x18015BA04
 * Callers:
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180158BD8 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 */

void __fastcall std::basic_stringbuf<unsigned short>::_Init(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  unsigned int v5; // edi
  size_t v7; // rbx
  char *v8; // rbp
  char *v9; // r8

  v5 = a4 & 0xFFFFFFDF;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( !a3 || (v5 & 6) == 6 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    v7 = 2 * a3;
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * a3);
    memcpy_0(v8, a2, v7);
    *(_QWORD *)(a1 + 104) = &v8[v7];
    if ( (v5 & 4) == 0 )
      std::basic_streambuf<unsigned short>::setg(a1, v8, v8);
    if ( (v5 & 2) == 0 )
    {
      v9 = v8;
      if ( (v5 & 0x18) != 0 )
        v9 = *(char **)(a1 + 104);
      std::basic_streambuf<unsigned short>::setp(a1, v8, v9);
      if ( (v5 & 4) != 0 )
        std::basic_streambuf<unsigned short>::setg(a1, v8, v8);
    }
    v5 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = v5;
}
