/*
 * XREFs of ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x14008CDC4
 * Callers:
 *     ?ReportMdmConnectionChange@DISPLAY_MUX_MGR@@QEAAXU_LUID@@IPEBU_DXGKARG_QUERYCONNECTIONCHANGE@@@Z @ 0x14008ED60 (-ReportMdmConnectionChange@DISPLAY_MUX_MGR@@QEAAXU_LUID@@IPEBU_DXGKARG_QUERYCONNECTIONCHANGE@@@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x14008F734 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140090678 (DpiMdmProcessAdapterBrightness.c)
 *     DpiMdmProcessStartAdapter @ 0x140090C00 (DpiMdmProcessStartAdapter.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoCreateRelatedObjects @ 0x14042F7C0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z @ 0x14008CE10 (-IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::IsTargetPartOfMux(
        DISPLAY_MUX_MGR *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  DISPLAY_MUX_PAIRING *v5; // rcx
  __int64 result; // rax

  v5 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)this + 9);
  if ( v5 )
    return DISPLAY_MUX_PAIRING::IsTargetPartOfMux(v5, a2, a3, a4, a5);
  WdLogSingleEntry0(2LL);
  result = 3221225473LL;
  WdLogGlobalForLineNumber = 2847;
  return result;
}
