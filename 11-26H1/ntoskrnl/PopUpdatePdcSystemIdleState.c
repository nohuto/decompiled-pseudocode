/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x140A3C144
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x140A3BFCC (PopExecuteSystemIdleAction.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerRequestNotifySystemIdleStateChanged @ 0x140A3C238 (PopPowerRequestNotifySystemIdleStateChanged.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  PopPowerRequestNotifySystemIdleStateChanged();
  result = 0LL;
  if ( qword_140E67570 )
  {
    LOBYTE(v2) = a1;
    return guard_dispatch_icall_no_overrides(v2, qword_140E67570);
  }
  return result;
}
