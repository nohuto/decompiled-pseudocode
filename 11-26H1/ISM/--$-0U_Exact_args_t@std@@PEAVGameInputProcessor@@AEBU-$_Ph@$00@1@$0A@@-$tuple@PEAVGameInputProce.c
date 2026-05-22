/*
 * XREFs of ??$?0U_Exact_args_t@std@@PEAVGameInputProcessor@@AEBU?$_Ph@$00@1@$0A@@?$tuple@PEAVGameInputProcessor@@U?$_Ph@$00@std@@@std@@QEAA@U_Exact_args_t@1@$$QEAPEAVGameInputProcessor@@AEBU?$_Ph@$00@1@@Z @ 0x1800943AC
 * Callers:
 *     ??$?0PEAVGameInputProcessor@@AEBU?$_Ph@$00@std@@$0A@@?$tuple@PEAVGameInputProcessor@@U?$_Ph@$00@std@@@std@@QEAA@$$QEAPEAVGameInputProcessor@@AEBU?$_Ph@$00@1@@Z @ 0x180094390 (--$-0PEAVGameInputProcessor@@AEBU-$_Ph@$00@std@@$0A@@-$tuple@PEAVGameInputProcessor@@U-$_Ph@$00@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::tuple<GameInputProcessor *,std::_Ph<1>>::tuple<GameInputProcessor *,std::_Ph<1>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *(_QWORD *)(a1 + 8) = *a3;
  return a1;
}
