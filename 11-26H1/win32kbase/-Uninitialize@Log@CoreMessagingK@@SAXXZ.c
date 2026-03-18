/*
 * XREFs of ?Uninitialize@Log@CoreMessagingK@@SAXXZ @ 0x1401C4D8C
 * Callers:
 *     CoreMsgUninitialize @ 0x1400DAAB4 (CoreMsgUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::Log::Uninitialize(__int64 a1)
{
  __int64 CurrentProcess; // rax
  REGHANDLE v2; // rcx

  CurrentProcess = PsGetCurrentProcess(a1);
  if ( !(unsigned int)PsGetProcessSessionId(CurrentProcess) )
  {
    v2 = qword_1402AA170;
    qword_1402AA170 = 0LL;
    dword_1402AA150 = 0;
    EtwUnregister(v2);
  }
}
