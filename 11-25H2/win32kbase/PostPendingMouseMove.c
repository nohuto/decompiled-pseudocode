/*
 * XREFs of PostPendingMouseMove @ 0x1400EBE10
 * Callers:
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14021F98C (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EBE5C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall PostPendingMouseMove(struct tagQ *a1, __int64 a2)
{
  __int64 v3; // rcx
  CMouseProcessor *v4; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3136);
  if ( v3 )
  {
    v4 = (CMouseProcessor *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v4 )
      CMouseProcessor::PostPendingMouseMove(v4, a1);
  }
}
