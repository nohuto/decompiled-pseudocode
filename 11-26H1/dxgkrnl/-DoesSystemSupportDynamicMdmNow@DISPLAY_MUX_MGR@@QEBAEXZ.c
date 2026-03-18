/*
 * XREFs of ?DoesSystemSupportDynamicMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ @ 0x14001537C
 * Callers:
 *     ?FillMdmStatus@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_STATUS@@@Z @ 0x140015204 (-FillMdmStatus@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_STATUS@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DISPLAY_MUX_MGR::DoesSystemSupportDynamicMdmNow(DISPLAY_MUX_MGR *this)
{
  int v1; // eax
  unsigned __int8 result; // al

  v1 = *((_DWORD *)this + 3);
  if ( v1 == 4 )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2961;
  }
  else
  {
    if ( v1 == 1 || !*(_BYTE *)this )
    {
      WdLogSingleEntry0(4LL);
      result = 0;
      WdLogGlobalForLineNumber = 2970;
      return result;
    }
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2966;
  }
  return 1;
}
