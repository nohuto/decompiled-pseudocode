/*
 * XREFs of ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402597B4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x140029D14 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1401D9D38 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x1402721FC (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C2A50 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1402C2D6C (_anonymous_namespace_--WindowSizingUpdate.c)
 */

void __fastcall NotifyShell::PositioningChanged(NotifyShell *this, struct tagWND *a2, const struct tagCVR *a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v6; // ecx
  bool v7; // zf
  unsigned int v8; // edx
  bool v9; // r8

  if ( (*((_DWORD *)a2 + 8) & 0x80u) != 0 )
    NotifyShell::CuratedWindowHidden((__int64)this, (__int64)a2);
  IsEnabledDeviceUsageNoInline = Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline(
                                   this,
                                   a2,
                                   a3);
  v6 = *((_DWORD *)a2 + 8);
  if ( IsEnabledDeviceUsageNoInline )
    v7 = (v6 & 0x1000C0) == 0;
  else
    v7 = (v6 & 0x1100C0) == 0;
  if ( v7 && (v6 & 3) != 3 && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) != 0 && !IsWindowCloaked(this) )
  {
    if ( ShellWindowManagement::WindowSubjectToBehavior((__int64)this, 0x10u, 0, 1) )
      NotifyShell::TrackedWindowPosChanged(this, 0LL, v9);
    if ( IsShellParticipatesInSizing(this, v8) )
      anonymous_namespace_::WindowSizingUpdate(this);
  }
}
