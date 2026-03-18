/*
 * XREFs of ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x140210D80
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x14018A3EC (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?GetDispatcherObjectCallbackIndexFromDispatcherObject@LegacyInputDispatcher@@AEBAIPEAX@Z @ 0x14020F910 (-GetDispatcherObjectCallbackIndexFromDispatcherObject@LegacyInputDispatcher@@AEBAIPEAX@Z.c)
 */

NTSTATUS __fastcall LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS result; // eax
  unsigned int DispatcherObjectCallbackIndexFromDispatcherObject; // eax

  if ( !*((_QWORD *)this + 2) )
    return -1073741790;
  **((_QWORD **)this + 2) = *((_QWORD *)PtiCurrent() + 201);
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
    DispatcherObjectCallbackIndexFromDispatcherObject = LegacyInputDispatcher::GetDispatcherObjectCallbackIndexFromDispatcherObject(
                                                          this,
                                                          *(void **)(*((_QWORD *)this + 2) + 8LL * (unsigned int)result));
    LegacyInputDispatcher::Dispatch(this, DispatcherObjectCallbackIndexFromDispatcherObject);
  }
  *((_DWORD *)this + 12) = 1;
  return result;
}
