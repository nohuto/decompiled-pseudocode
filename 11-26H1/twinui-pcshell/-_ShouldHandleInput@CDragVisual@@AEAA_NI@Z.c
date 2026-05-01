/*
 * XREFs of ?_ShouldHandleInput@CDragVisual@@AEAA_NI@Z @ 0x180544258
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180544B70 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDragVisual::_ShouldHandleInput(CDragVisual *this, int a2)
{
  char result; // al
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  HWND v7; // rbx

  result = 0;
  if ( *((_QWORD *)this + 2) )
  {
    if ( *((_BYTE *)this + 278) || *((_QWORD *)this + 21) )
    {
      return 1;
    }
    else
    {
      v3 = a2 - 512;
      if ( v3 && (v4 = v3 - 1) != 0 && (v5 = v4 - 1) != 0 )
      {
        v6 = v5 - 67;
        if ( !v6 || (unsigned int)(v6 - 1) <= 1 )
          return *((_DWORD *)this + 82) != 0;
      }
      else
      {
        v7 = (HWND)*((_QWORD *)this + 19);
        return GetCapture() == v7;
      }
    }
  }
  return result;
}
