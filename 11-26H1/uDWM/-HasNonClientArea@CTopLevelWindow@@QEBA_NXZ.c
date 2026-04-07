/*
 * XREFs of ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ @ 0x18004B6FC
 * Callers:
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18004B548 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CTopLevelWindow::HasNonClientArea(CTopLevelWindow *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 143) || *((_DWORD *)this + 144) || *((_DWORD *)this + 145) || *((_DWORD *)this + 146) )
    return 1;
  return result;
}
