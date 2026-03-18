/*
 * XREFs of ?ShouldHideMuxFromDriver@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x14008F6BC
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 * Callees:
 *     <none>
 */

bool __fastcall DISPLAY_MUX_MGR::ShouldHideMuxFromDriver(DISPLAY_MUX_MGR *this)
{
  int v1; // eax
  bool result; // al

  v1 = *((_DWORD *)this + 1);
  if ( v1 == 4 )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2560;
    return 0;
  }
  if ( v1 == 2 && *(_BYTE *)this )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2565;
    return 0;
  }
  WdLogSingleEntry0(4LL);
  result = 1;
  WdLogGlobalForLineNumber = 2569;
  return result;
}
