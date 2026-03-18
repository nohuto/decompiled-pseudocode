/*
 * XREFs of ?Uninitialize@Log@CoreMessagingK@@SAXXZ @ 0x1401A136C
 * Callers:
 *     CoreMsgUninitialize @ 0x1400FC8A0 (CoreMsgUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::Log::Uninitialize(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  REGHANDLE v3; // rcx

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( !(unsigned int)PsGetProcessSessionId(CurrentProcess) )
  {
    v3 = qword_14029F150;
    qword_14029F150 = 0LL;
    dword_14029F130 = 0;
    EtwUnregister(v3);
  }
}
