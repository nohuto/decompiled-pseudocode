/*
 * XREFs of ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1401DCE18
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x14005ABCC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1401DCF48 (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DxgkEnableFormattingBuffer(int a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::EnableFormattingBuffer(Global, a1);
}
