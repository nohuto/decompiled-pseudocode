/*
 * XREFs of ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C2A50
 * Callers:
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x14002677C (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140027A5C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z @ 0x14004DD24 (-xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402597B4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402D3C90 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1402C1C5C (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

void __fastcall NotifyShell::TrackedWindowPosChanged(NotifyShell *this, struct tagWND *a2)
{
  char v2; // di

  v2 = (char)a2;
  if ( ShellWindowManagement::WindowSubjectToBehavior((__int64)this, 0x10u, 0, 1) )
    anonymous_namespace_::NotifyShellWindowPosChangedCommon(this, v2, 0, 0);
}
