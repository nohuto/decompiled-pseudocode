/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1400D8450
 * Callers:
 *     CoreMsgOpenConnection @ 0x1400D8214 (CoreMsgOpenConnection.c)
 *     CoreMsgObjectCallout @ 0x1400D83A0 (CoreMsgObjectCallout.c)
 *     CoreMsgCreatePort @ 0x1400DA000 (CoreMsgCreatePort.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1400DA3B0 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1401BE08C (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

NTSTATUS __fastcall CoreMessagingK::EntryLock::Acquire(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 UserCoreMessagingSessionState; // rax
  NTSTATUS result; // eax

  v3 = a2;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  if ( !*(_BYTE *)(UserCoreMessagingSessionState + 8) )
    CoreMessagingK::Runtime::BugCheck(v3, 0LL, 0LL);
  result = KeWaitForSingleObject(*(PVOID *)UserCoreMessagingSessionState, Executive, 0, 0, 0LL);
  *a1 = 1;
  return result;
}
