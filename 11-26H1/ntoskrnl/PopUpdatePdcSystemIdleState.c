/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x1409F7B64
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1409F79EC (PopExecuteSystemIdleAction.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerRequestNotifySystemIdleStateChanged @ 0x1409F7C58 (PopPowerRequestNotifySystemIdleStateChanged.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  PopPowerRequestNotifySystemIdleStateChanged();
  result = 0LL;
  if ( qword_140E677D0 )
  {
    LOBYTE(v2) = a1;
    return guard_dispatch_icall_no_overrides(v2, qword_140E677D0);
  }
  return result;
}
