/*
 * XREFs of CoreMsgSend @ 0x14008B78C
 * Callers:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     ?SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z @ 0x1401CDE20 (-SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z.c)
 * Callees:
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x14008B838 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?TraceSendStart@Log@CoreMessagingK@@SAXPEAXD@Z @ 0x14008BB04 (-TraceSendStart@Log@CoreMessagingK@@SAXPEAXD@Z.c)
 *     ?TraceSendStop@Log@CoreMessagingK@@SAXJ@Z @ 0x14008BB54 (-TraceSendStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1401BE08C (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

__int64 __fastcall CoreMsgSend(void *a1, char a2, const void *a3, unsigned int a4)
{
  __int64 UserCoreMessagingSessionState; // rax
  char v8; // dl
  unsigned int v9; // ebx
  PRKMUTEX *v10; // rax

  CoreMessagingK::Log::TraceSendStart(a1, a2);
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState();
  if ( !*(_BYTE *)(UserCoreMessagingSessionState + 8) )
    CoreMessagingK::Runtime::BugCheck(4LL, 0LL, 0LL);
  KeWaitForSingleObject(*(PVOID *)UserCoreMessagingSessionState, Executive, 0, 0, 0LL);
  v9 = CoreMessagingK::ServerPorts::Send(a1, v8, a3, a4);
  CoreMessagingK::Log::TraceSendStop(v9);
  v10 = (PRKMUTEX *)W32GetUserCoreMessagingSessionState();
  KeReleaseMutex(*v10, 0);
  return v9;
}
