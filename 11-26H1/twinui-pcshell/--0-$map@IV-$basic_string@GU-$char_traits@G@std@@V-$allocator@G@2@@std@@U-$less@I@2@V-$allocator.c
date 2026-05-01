/*
 * XREFs of ??0?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1802BE090
 * Callers:
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1801366D8 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::map<unsigned int,std::wstring>::map<unsigned int,std::wstring>(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *a1 = v2;
  return a1;
}
