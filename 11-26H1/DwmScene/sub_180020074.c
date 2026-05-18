/*
 * XREFs of sub_180020074 @ 0x180020074
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_1800351DC @ 0x1800351DC (sub_1800351DC.c)
 *     sub_18003587C @ 0x18003587C (sub_18003587C.c)
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 *     sub_180035EE0 @ 0x180035EE0 (sub_180035EE0.c)
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 *     sub_180063CC0 @ 0x180063CC0 (sub_180063CC0.c)
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 *     unknown_libname_26 @ 0x1800D9F6D (unknown_libname_26.c)
 *     unknown_libname_31 @ 0x1800DA0E1 (unknown_libname_31.c)
 *     sub_1800DA117 @ 0x1800DA117 (sub_1800DA117.c)
 *     sub_1800DA13B @ 0x1800DA13B (sub_1800DA13B.c)
 *     sub_1800DA1CB @ 0x1800DA1CB (sub_1800DA1CB.c)
 *     sub_1800DA225 @ 0x1800DA225 (sub_1800DA225.c)
 *     sub_1800DA492 @ 0x1800DA492 (sub_1800DA492.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_3 @ 0x1800DA4B6 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800DA4B6.c)
 *     sub_1800DA4EC @ 0x1800DA4EC (sub_1800DA4EC.c)
 *     unknown_libname_36 @ 0x1800DA510 (unknown_libname_36.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180020264 @ 0x180020264 (sub_180020264.c)
 *     sub_18002030C @ 0x18002030C (sub_18002030C.c)
 */

__int64 __fastcall sub_180020074(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 48) )
    result = sub_18002030C(
               *(_QWORD *)a1,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 56));
  else
    result = sub_180020264(
               *(_QWORD *)a1,
               2,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    return sub_180010EC8(v3);
  return result;
}
