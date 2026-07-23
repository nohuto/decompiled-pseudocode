/*
 * XREFs of PopDiagTraceMtrrError @ 0x140C03C94
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PopDiagTraceMtrrError()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_MTRR_CHANGED) )
    {
      UserData.Ptr = (ULONGLONG)&dword_140F10458;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_MTRR_CHANGED, 0LL, 1u, &UserData);
    }
  }
}
