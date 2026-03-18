/*
 * XREFs of CoreMsgObjectCallout @ 0x1400D83A0
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     ?TraceObjectCalloutStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400D8414 (-TraceObjectCalloutStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1400D8450 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?OnCallback@CoreMsgObject@CoreMessagingK@@SAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1400D84B4 (-OnCallback@CoreMsgObject@CoreMessagingK@@SAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 *     ?TraceObjectCalloutStart@Log@CoreMessagingK@@SAXW4_WIN32_CALLOUTS_OPERATION@@@Z @ 0x1400D852C (-TraceObjectCalloutStart@Log@CoreMessagingK@@SAXW4_WIN32_CALLOUTS_OPERATION@@@Z.c)
 */

__int64 __fastcall CoreMsgObjectCallout(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  PRKMUTEX *UserCoreMessagingSessionState; // rax
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  CoreMessagingK::Log::TraceObjectCalloutStart();
  CoreMessagingK::EntryLock::Acquire(&v10, 5LL);
  v4 = CoreMessagingK::CoreMsgObject::OnCallback(a1, a2);
  CoreMessagingK::Log::TraceObjectCalloutStop(v4);
  if ( v10 )
  {
    UserCoreMessagingSessionState = (PRKMUTEX *)W32GetUserCoreMessagingSessionState(v6, v5, v7);
    KeReleaseMutex(*UserCoreMessagingSessionState, 0);
  }
  return v4;
}
