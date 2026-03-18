/*
 * XREFs of ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8
 * Callers:
 *     PostIAMShellHookMessageEx @ 0x140010AC0 (PostIAMShellHookMessageEx.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x1400110B0 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x14001122C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14001144C (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140046B9C (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x14015D1C8 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     _lambda_bb68417babed644e5befeb743872af35_::operator() @ 0x1401DAEAC (_lambda_bb68417babed644e5befeb743872af35_--operator().c)
 *     ?IsTooltipHittest@@YA_NPEAUtagWND@@I@Z @ 0x140214008 (-IsTooltipHittest@@YA_NPEAUtagWND@@I@Z.c)
 *     ?GetTooltipIdFromHitTest@@YA?AW4tagTOOLTIPID@@PEAUtagWND@@H@Z @ 0x140261970 (-GetTooltipIdFromHitTest@@YA-AW4tagTOOLTIPID@@PEAUtagWND@@H@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402C5B78 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C7A78 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellWindowManagement::BehaviorEnabled(ShellWindowManagement *this)
{
  int v1; // ebx
  __int64 *CurrentThreadWin32Thread; // rdx
  __int64 v3; // rax

  v1 = (int)this;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  v3 = 0LL;
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  return (v1 & *(_DWORD *)(*(_QWORD *)(v3 + 488) + 336LL)) != 0;
}
