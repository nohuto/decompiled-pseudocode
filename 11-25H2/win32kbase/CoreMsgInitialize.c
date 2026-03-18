/*
 * XREFs of CoreMsgInitialize @ 0x1400FC350
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400FC3D8 (-TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1400FC414 (-Initialize@EntryLock@CoreMessagingK@@SAJXZ.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1400FDE48 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x14019EC04 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?TraceInitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1401A1FA4 (-TraceInitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402CA314 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall CoreMsgInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  int v4; // ebx

  if ( *(_BYTE *)(W32GetUserCoreMessagingSessionState(a1, a2, a3) + 8) )
    CoreMessagingK::Runtime::BugCheck(1LL, 0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess();
  if ( !(unsigned int)PsGetProcessSessionId(CurrentProcess) )
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14029F130);
  CoreMessagingK::Log::TraceInitializeStart();
  v4 = CoreMessagingK::EntryLock::Initialize();
  if ( v4 >= 0 )
    CoreMessagingK::RegistrarClient::Initialize();
  CoreMessagingK::Log::TraceInitializeStop(v4);
  return (unsigned int)v4;
}
