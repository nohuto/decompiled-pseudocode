/*
 * XREFs of ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x18013FDC8
 * Callers:
 *     ??1?$_Bt_state_t@PEBG@std@@QEAA@XZ @ 0x1801350DC (--1-$_Bt_state_t@PEBG@std@@QEAA@XZ.c)
 *     ??1?$_Tgt_state_t@PEBG@std@@QEAA@XZ @ 0x1801351B0 (--1-$_Tgt_state_t@PEBG@std@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x1801351F8 (--1-$_Tidy_guard@V-$vector@IV-$allocator@I@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013F81C (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ??$_Reset@PEBG@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_constants@1@@Z @ 0x180149800 (--$_Reset@PEBG@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_.c)
 *     ??1?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@XZ @ 0x18014A5BC (--1-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAA@XZ.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$8 @ 0x1801668AA (_AtmosCheck--AtmosCheck_--_1_--dtor$8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned int>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
