/*
 * XREFs of sub_18003A870 @ 0x18003A870
 * Callers:
 *     sub_1800DA78D @ 0x1800DA78D (sub_1800DA78D.c)
 *     sub_1800DA9C8 @ 0x1800DA9C8 (sub_1800DA9C8.c)
 *     sub_1800E4CC5 @ 0x1800E4CC5 (sub_1800E4CC5.c)
 *     sub_1800E4CD7 @ 0x1800E4CD7 (sub_1800E4CD7.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_6 @ 0x1800E4FCC (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1800E4FCC.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003A870(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
