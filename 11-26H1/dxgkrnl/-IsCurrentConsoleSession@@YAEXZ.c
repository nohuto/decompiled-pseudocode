/*
 * XREFs of ?IsCurrentConsoleSession@@YAEXZ @ 0x14006CC34
 * Callers:
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x140192BE0 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x14042C8BC (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x140411CCC (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

bool IsCurrentConsoleSession(void)
{
  DXGGLOBAL *Global; // rax
  int v1; // ebx

  Global = DXGGLOBAL::GetGlobal();
  v1 = *((_DWORD *)DXGGLOBAL::GetSessionMgr(Global) + 36);
  return (unsigned int)PsGetCurrentProcessSessionId() == v1;
}
