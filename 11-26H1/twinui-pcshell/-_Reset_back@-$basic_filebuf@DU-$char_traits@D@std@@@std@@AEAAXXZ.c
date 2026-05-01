/*
 * XREFs of ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1802C2E5C
 * Callers:
 *     ?uflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x1801FB610 (-uflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHXZ.c)
 *     ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1806123C8 (--1-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180617D00 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     ?seekoff@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x180617EC0 (-seekoff@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@_JHH@Z.c)
 *     ?seekpos@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x180617FC0 (-seekpos@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@V32@H@Z.c)
 *     ?xsgetn@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z @ 0x180618140 (-xsgetn@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filebuf::_Reset_back(__int64 a1)
{
  __int64 result; // rax

  result = std::streambuf::eback(a1);
  if ( result == a1 + 112 )
    return std::streambuf::setg(a1, *(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 144));
  return result;
}
