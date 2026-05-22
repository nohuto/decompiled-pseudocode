/*
 * XREFs of ??$_Construct@$00PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXQEBD_K@Z @ 0x1800E91A8
 * Callers:
 *     ??$?0PEAD$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEAD0AEBV?$allocator@D@1@@Z @ 0x1800E90C4 (--$-0PEAD$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEAD0AEBV-$alloc.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800EA340 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800998FC (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x1800C5FE8 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

void *__fastcall std::string::_Construct<1,char const *>(_QWORD *a1, const void *a2, size_t a3)
{
  void *result; // rax
  unsigned __int64 v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  if ( a3 > 0xF )
  {
    v7 = std::string::_Calculate_growth(a3, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits>(v7 + 1);
    *a1 = v8;
    a1[2] = a3;
    a1[3] = v7;
    v9 = v8;
    result = memcpy_0(v8, a2, a3);
    v9[a3] = 0;
  }
  else
  {
    a1[3] = 15LL;
    a1[2] = a3;
    result = memcpy_0(a1, a2, a3);
    *((_BYTE *)a1 + a3) = 0;
  }
  return result;
}
