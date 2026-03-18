/*
 * XREFs of ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1400FC414
 * Callers:
 *     CoreMsgInitialize @ 0x1400FC350 (CoreMsgInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::EntryLock::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 UserCoreMessagingSessionState; // rdi
  struct _KMUTANT *Pool2; // rax
  unsigned int v5; // ebx

  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  Pool2 = (struct _KMUTANT *)ExAllocatePool2(66LL, 56LL, 1279610179LL);
  v5 = 0;
  if ( Pool2 )
  {
    *(_QWORD *)UserCoreMessagingSessionState = Pool2;
    KeInitializeMutex(Pool2, 0);
    *(_BYTE *)(UserCoreMessagingSessionState + 8) = 1;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
