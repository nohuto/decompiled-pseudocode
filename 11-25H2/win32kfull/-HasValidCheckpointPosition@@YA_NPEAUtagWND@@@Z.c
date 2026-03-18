/*
 * XREFs of ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x14014FD30
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402D042C (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D884C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DCB7C (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall HasValidCheckpointPosition(struct tagWND *a1)
{
  char v1; // cl
  bool v3; // al

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 )
    return 1;
  v3 = IsArranged(a1);
  v1 = 0;
  if ( v3 )
    return 1;
  return v1;
}
