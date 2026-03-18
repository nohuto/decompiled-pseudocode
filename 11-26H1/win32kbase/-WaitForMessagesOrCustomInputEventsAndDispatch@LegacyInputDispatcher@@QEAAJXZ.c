/*
 * XREFs of ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1402189F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x14013F820 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

NTSTATUS __fastcall LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(
        LegacyInputDispatcher *this,
        __int64 a2)
{
  NTSTATUS result; // eax
  unsigned int i; // edx

  if ( !*((_QWORD *)this + 2) )
    return -1073741790;
  **((_QWORD **)this + 2) = *((_QWORD *)PtiCurrent((__int64)this, a2) + 201);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(
               *((_DWORD *)this + 12),
               *((PVOID **)this + 2),
               WaitAny,
               WrUserRequest,
               *((_BYTE *)this + 56),
               *((_BYTE *)this + 57),
               0LL,
               *((PKWAIT_BLOCK *)this + 3));
    if ( result < 0 )
      break;
    if ( !result )
    {
      result = *((_DWORD *)this + 15);
      break;
    }
    for ( i = *((_DWORD *)this + 10); i < *((_DWORD *)this + 13); ++i )
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * i) == *(_QWORD *)(*((_QWORD *)this + 2) + 8LL
                                                                                             * (unsigned int)result) )
        goto LABEL_10;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 3108);
    i = 0;
LABEL_10:
    LegacyInputDispatcher::Dispatch(this, i);
  }
  *((_DWORD *)this + 12) = 1;
  return result;
}
