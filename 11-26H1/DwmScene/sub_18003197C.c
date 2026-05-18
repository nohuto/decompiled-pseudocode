/*
 * XREFs of sub_18003197C @ 0x18003197C
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
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_180063CC0 @ 0x180063CC0 (sub_180063CC0.c)
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 *     sub_18008F8D0 @ 0x18008F8D0 (sub_18008F8D0.c)
 *     sub_1800D9FA3 @ 0x1800D9FA3 (sub_1800D9FA3.c)
 *     sub_1800DA105 @ 0x1800DA105 (sub_1800DA105.c)
 *     sub_1800DA171 @ 0x1800DA171 (sub_1800DA171.c)
 *     sub_1800DA213 @ 0x1800DA213 (sub_1800DA213.c)
 *     sub_1800DA25B @ 0x1800DA25B (sub_1800DA25B.c)
 *     sub_1800DA3DE @ 0x1800DA3DE (sub_1800DA3DE.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_1 @ 0x1800DA4A4 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1800DA4A4.c)
 *     sub_1800DA4DA @ 0x1800DA4DA (sub_1800DA4DA.c)
 *     unknown_libname_35 @ 0x1800DA4FE (unknown_libname_35.c)
 *     unknown_libname_47 @ 0x1800DBF58 (unknown_libname_47.c)
 *     sub_1800DBFB2 @ 0x1800DBFB2 (sub_1800DBFB2.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800382B8 @ 0x1800382B8 (sub_1800382B8.c)
 *     sub_180097C94 @ 0x180097C94 (sub_180097C94.c)
 */

__int64 __fastcall sub_18003197C(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  result = sub_1800382B8(a1, &v4);
  if ( v4 )
    result = sub_180097C94(v4, *(_QWORD *)(a1 + 16));
  if ( v5 )
    result = sub_180010EC8(v5);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010F00(v3);
  return result;
}
