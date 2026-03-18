/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1400FD3E4
 * Callers:
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1400FC770 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 *     CoreMsgCreatePort @ 0x1400FC7E4 (CoreMsgCreatePort.c)
 *     CoreMsgOpenConnection @ 0x1400FD1A8 (CoreMsgOpenConnection.c)
 *     CoreMsgObjectCallout @ 0x1400FD334 (CoreMsgObjectCallout.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x14019EC04 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
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
