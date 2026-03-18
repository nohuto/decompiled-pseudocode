/*
 * XREFs of PopDispatchShutdownEvent @ 0x1407D7410
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404EA9D8 (PopEventCalloutDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407D17E8 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 */

struct _KTHREAD *__fastcall PopDispatchShutdownEvent(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // ebx
  struct _KTHREAD *result; // rax

  v2 = _InterlockedExchange(&dword_140F10F20, 0);
  if ( v2 )
  {
    PopUserShutdownScenarioNotifyWinlogonCallout(a1, a2);
    PopEventCalloutDispatch(1, v2);
  }
  if ( qword_140E67530 )
    guard_dispatch_icall_no_overrides(a1, a2);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
