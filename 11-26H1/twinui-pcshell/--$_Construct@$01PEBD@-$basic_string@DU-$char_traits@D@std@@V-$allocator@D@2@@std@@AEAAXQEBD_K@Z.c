/*
 * XREFs of ??$_Construct@$01PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXQEBD_K@Z @ 0x18030F25C
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x1803100EC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x180314DE4 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

void __fastcall std::string::_Construct<2,char const *>(_QWORD *a1, _OWORD *a2, unsigned __int64 a3)
{
  __int64 v6; // rbx
  void *v7; // rax

  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  if ( a3 > 0xF )
  {
    v6 = std::string::_Calculate_growth(a3);
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(v6 + 1);
    *a1 = v7;
    a1[2] = a3;
    a1[3] = v6;
    memcpy_0(v7, a2, a3 + 1);
  }
  else
  {
    a1[2] = a3;
    a1[3] = 15LL;
    *(_OWORD *)a1 = *a2;
  }
}
