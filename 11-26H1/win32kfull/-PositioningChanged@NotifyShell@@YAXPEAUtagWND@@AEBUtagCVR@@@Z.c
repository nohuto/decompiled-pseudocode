/*
 * XREFs of ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402DB9D8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x1400110B0 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x14001122C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x140209C58 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x140287538 (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402DC0C4 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1402DC3E4 (_anonymous_namespace_--WindowSizingUpdate.c)
 */

void __fastcall NotifyShell::PositioningChanged(NotifyShell *this, struct tagWND *a2, const struct tagCVR *a3)
{
  int v5; // eax
  bool v6; // zf
  unsigned int v7; // edx
  bool v8; // r8

  if ( (*((_DWORD *)a2 + 8) & 0x80u) != 0 )
    NotifyShell::CuratedWindowHidden((__int64)this, (__int64)a2);
  v6 = (unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline() == 0;
  v5 = *((_DWORD *)a2 + 8);
  if ( v6 )
    v6 = (v5 & 0x1100C0) == 0;
  else
    v6 = (v5 & 0x1000C0) == 0;
  if ( v6 && (v5 & 3) != 3 && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) != 0 && !IsWindowCloaked(this) )
  {
    if ( ShellWindowManagement::WindowSubjectToBehavior((__int64)this, 0x10u, 0, 1) )
      NotifyShell::TrackedWindowPosChanged(this, 0LL, v8);
    if ( IsShellParticipatesInSizing(this, v7) )
      anonymous_namespace_::WindowSizingUpdate(this);
  }
}
