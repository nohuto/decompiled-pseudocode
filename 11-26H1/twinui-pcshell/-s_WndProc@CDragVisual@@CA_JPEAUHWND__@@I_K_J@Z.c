/*
 * XREFs of ?s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180545200
 * Callers:
 *     <none>
 * Callees:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180544B70 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 */

LRESULT __fastcall CDragVisual::s_WndProc(HWND a1, UINT a2, void *a3, LONG_PTR *a4)
{
  CDragVisual *WindowLongPtrW; // rsi
  LONG_PTR v9; // rbx

  WindowLongPtrW = (CDragVisual *)GetWindowLongPtrW(a1, 0);
  if ( a2 == 129 )
  {
    v9 = *a4;
    SetWindowLongPtrW(a1, 0, *a4);
    *(_QWORD *)(v9 + 152) = a1;
    goto LABEL_3;
  }
  if ( a2 != 130 )
  {
LABEL_3:
    if ( WindowLongPtrW )
      return CDragVisual::_WndProc(WindowLongPtrW, a1, a2, a3, (LPARAM)a4);
    return DefWindowProcW(a1, a2, (WPARAM)a3, (LPARAM)a4);
  }
  SetWindowLongPtrW(a1, 0, 0LL);
  if ( WindowLongPtrW )
  {
    *((_QWORD *)WindowLongPtrW + 19) = 0LL;
    return CDragVisual::_WndProc(WindowLongPtrW, a1, a2, a3, (LPARAM)a4);
  }
  return DefWindowProcW(a1, a2, (WPARAM)a3, (LPARAM)a4);
}
