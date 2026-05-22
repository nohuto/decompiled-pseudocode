/*
 * XREFs of _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x180070C78
 * Callers:
 *     wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x180070AA4 (wil--details--ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___--_ScopeExitFn__lambda_2c96.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x180070AC4 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 * Callees:
 *     ?Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x180070D14 (-Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180070D3C (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

bool __fastcall lambda_2c96748461f4900de3746577f815c647_::operator()(__int64 a1)
{
  bool result; // al

  if ( **(_BYTE **)(a1 + 32) )
  {
    *(_OWORD *)*(_QWORD *)a1 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 380LL);
    *(_OWORD *)(*(_QWORD *)a1 + 16LL) = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 12LL);
    *(_DWORD *)(*(_QWORD *)a1 + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 376LL);
  }
  else
  {
    *(_OWORD *)*(_QWORD *)a1 = 0LL;
    *(_OWORD *)(*(_QWORD *)a1 + 16LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)a1 + 32LL) = 0;
  }
  MPCCursorManager::UpdateCursorVisibility(*(MPCCursorManager **)a1, **(_BYTE **)(a1 + 16), **(_BYTE **)(a1 + 24), 0);
  result = !MPCCursorManager::Is3DCursorVisible(*(MPCCursorManager **)a1);
  **(_BYTE **)(a1 + 8) = result;
  return result;
}
