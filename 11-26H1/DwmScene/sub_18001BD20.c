/*
 * XREFs of sub_18001BD20 @ 0x18001BD20
 * Callers:
 *     sub_1800184AC @ 0x1800184AC (sub_1800184AC.c)
 *     sub_180018500 @ 0x180018500 (sub_180018500.c)
 *     sub_18001850C @ 0x18001850C (sub_18001850C.c)
 *     sub_18003A924 @ 0x18003A924 (sub_18003A924.c)
 *     sub_180043DE0 @ 0x180043DE0 (sub_180043DE0.c)
 *     sub_18004D3C4 @ 0x18004D3C4 (sub_18004D3C4.c)
 *     sub_18005CE48 @ 0x18005CE48 (sub_18005CE48.c)
 *     sub_18007CDA4 @ 0x18007CDA4 (sub_18007CDA4.c)
 *     sub_180087E28 @ 0x180087E28 (sub_180087E28.c)
 *     sub_1800DD669 @ 0x1800DD669 (sub_1800DD669.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_7 @ 0x1800E5002 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1800E5002.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18001BD20(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_18000E26C(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
