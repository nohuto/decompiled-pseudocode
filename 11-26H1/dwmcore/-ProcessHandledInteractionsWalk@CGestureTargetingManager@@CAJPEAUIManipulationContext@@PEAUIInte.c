/*
 * XREFs of ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x1801129B0
 * Callers:
 *     ?ProcessHandledInteractionsForNonHandlers@CGestureTargetingManager@@SAJPEAUIManipulationContext@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180112950 (-ProcessHandledInteractionsForNonHandlers@CGestureTargetingManager@@SAJPEAUIManipulationContext@.c)
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x1801129B0 (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 * Callees:
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x1801129B0 (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessHandledInteractionsWalk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v5; // ebx
  __int64 i; // rax
  __int64 v11; // rsi
  int v13; // eax

  v5 = 0;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 184LL))(a2, a3, 0LL);
    for ( i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a2);
          ;
          i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v11) )
    {
      v11 = i;
      if ( !i )
        break;
      v13 = CGestureTargetingManager::ProcessHandledInteractionsWalk(a1, i, a3, a4, a5);
      if ( v5 >= 0 )
        v5 = v13;
    }
  }
  return (unsigned int)v5;
}
