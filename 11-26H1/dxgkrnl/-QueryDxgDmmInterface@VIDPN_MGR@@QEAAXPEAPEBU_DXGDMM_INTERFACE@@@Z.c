/*
 * XREFs of ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x140365B64
 * Callers:
 *     DxgkQueryDmmInterface @ 0x140365A0C (DxgkQueryDmmInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmInterface(VIDPN_MGR *this, const struct _DXGDMM_INTERFACE **a2)
{
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1608;
  }
  *a2 = (const struct _DXGDMM_INTERFACE *)*((_QWORD *)this + 57);
}
