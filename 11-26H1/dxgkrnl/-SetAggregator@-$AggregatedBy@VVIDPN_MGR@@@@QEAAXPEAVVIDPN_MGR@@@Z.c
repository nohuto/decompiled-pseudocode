/*
 * XREFs of ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x140054BD0
 * Callers:
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400956F0 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400957C4 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140344904 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AggregatedBy<VIDPN_MGR>::SetAggregator(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 && *(_QWORD *)(a1 + 8) )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 140;
  }
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
