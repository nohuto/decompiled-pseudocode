/*
 * XREFs of BmlIsSupportedByMonitorTargetMode @ 0x140393438
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1402DD530 (BmlDoesTargetModeObeyConstraint.c)
 * Callees:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403937B0 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

bool __fastcall BmlIsSupportedByMonitorTargetMode(__int64 a1, unsigned __int8 a2)
{
  int IsSupportedByMonitor; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  bool result; // al
  _QWORD *v8; // rdi
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF
  int v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(
                           (DMMVIDPNTARGETMODE *)a1,
                           a2,
                           &v9,
                           (enum _D3DKMDT_MODE_PRUNING_REASON *const)&v10);
  v6 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor >= 0 )
    return v9 != 0;
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
  v8[3] = v6;
  v8[4] = *(unsigned int *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v8[5] = *(_QWORD *)(a1 + 40);
  result = 0;
  WdLogGlobalForLineNumber = 1416;
  return result;
}
