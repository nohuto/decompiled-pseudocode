/*
 * XREFs of _anonymous_namespace_::TestFeature @ 0x14014C74C
 * Callers:
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C134 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C174 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1B4 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1F8 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x14014C274 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14022B230 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402D042C (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402D0E60 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::TestFeature(__int64 a1, __int64 a2)
{
  return ((unsigned int)a1 & *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 63448) + 28LL)) == (_DWORD)a1;
}
