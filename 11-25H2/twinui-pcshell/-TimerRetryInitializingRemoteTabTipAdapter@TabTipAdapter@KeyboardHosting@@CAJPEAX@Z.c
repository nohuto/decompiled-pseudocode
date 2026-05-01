/*
 * XREFs of ?TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x180471A40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800D4FB0 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::TimerRetryInitializingRemoteTabTipAdapter(
        KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this )
    (*(void (__fastcall **)(KeyboardHosting::TabTipAdapter *))(*(_QWORD *)this + 8LL))(this);
  v2 = KeyboardHosting::TabTipAdapter::InitializeRemoteTabTipAdapter(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6E4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
  if ( this )
    (*(void (__fastcall **)(KeyboardHosting::TabTipAdapter *))(*(_QWORD *)this + 16LL))(this);
  return 0LL;
}
