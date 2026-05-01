/*
 * XREFs of ?IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18016FC1C
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800437F8 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CApplicationManagerUtility::IsModernAppWindow(CApplicationManagerUtility *this, HWND a2)
{
  char v2; // bl
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v5 = 0;
  if ( (unsigned int)GetWindowBand(this, &v5)
    && ((v5 == 1 || v5 == 8) && v5 != 1 || v5 == 1 && (unsigned int)IsShellManagedWindow(this)) )
  {
    return 1;
  }
  return v2;
}
