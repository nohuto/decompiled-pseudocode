/*
 * XREFs of EtwWriteEndScenario @ 0x140AD7F30
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x140527E20 (PnpCompleteSystemStartProcess.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140B65450 (PopDiagTracePowerTransitionEnd.c)
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x1404E3CDC (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WdipSemDisableScenario @ 0x140AD6000 (WdipSemDisableScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  struct _KLOCK_ENTRIES *v10; // r9
  __int128 v11; // [rsp+30h] [rbp-58h] BYREF

  v11 = 0LL;
  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = EtwGetProviderIdFromHandle(RegHandle, 0, &v11);
  if ( result >= 0 )
  {
    if ( ActivityId->Data1
      || ActivityId->Data2
      || ActivityId->Data3
      || ActivityId->Data4[0]
      || ActivityId->Data4[1]
      || ActivityId->Data4[2]
      || ActivityId->Data4[3]
      || ActivityId->Data4[4]
      || ActivityId->Data4[5]
      || ActivityId->Data4[6]
      || ActivityId->Data4[7] )
    {
      if ( LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) )
        WdipSemDisableScenario(&v11, EventDescriptor->Id, (__int64)ActivityId, v10);
    }
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
