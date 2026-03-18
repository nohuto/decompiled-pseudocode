/*
 * XREFs of CoreMsgInitialize @ 0x1400DA980
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1400D8D30 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400DAA08 (-TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1400DAA44 (-Initialize@EntryLock@CoreMessagingK@@SAJXZ.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1401BE08C (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?TraceInitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1401C5E84 (-TraceInitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402D36E4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall CoreMsgInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8

  if ( *(_BYTE *)(W32GetUserCoreMessagingSessionState(a1, a2, a3) + 8) )
    CoreMessagingK::Runtime::BugCheck(1LL, 0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v3);
  if ( !(unsigned int)PsGetProcessSessionId(CurrentProcess) )
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1402AA150);
  CoreMessagingK::Log::TraceInitializeStart();
  v7 = CoreMessagingK::EntryLock::Initialize();
  if ( v7 >= 0 )
    CoreMessagingK::RegistrarClient::Initialize(v6, v5, v8);
  CoreMessagingK::Log::TraceInitializeStop(v7);
  return (unsigned int)v7;
}
