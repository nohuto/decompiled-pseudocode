/*
 * XREFs of ?SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z @ 0x1402C23A0
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C26F0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AdvancedWindowPos::CWindowAction::SetFrameBounds(
        AdvancedWindowPos::CWindowAction *this,
        const struct tagRECT *a2)
{
  LONG top; // eax
  int v4; // ecx
  __int64 v5; // [rsp+8h] [rbp+8h]

  *((_DWORD *)this + 1) |= 1u;
  if ( a2 )
  {
    LODWORD(v5) = a2->left;
    top = a2->top;
    *(_DWORD *)this |= 2u;
    HIDWORD(v5) = top;
    *(_QWORD *)((char *)this + 12) = v5;
    LODWORD(v5) = a2->right - a2->left;
    v4 = a2->bottom - a2->top;
    *(_DWORD *)this |= 4u;
    HIDWORD(v5) = v4;
    *(_QWORD *)((char *)this + 20) = v5;
  }
}
