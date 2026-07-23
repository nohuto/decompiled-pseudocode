/*
 * XREFs of PsSetProcessPriorityByClass @ 0x140ABC220
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x140518324 (PspSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABC24C (PspSetProcessForegroundBackgroundRequest.c)
 */

void __fastcall PsSetProcessPriorityByClass(void *a1, __int64 a2)
{
  if ( (_DWORD)a2 == 2 )
  {
    PspSetProcessPriorityByClass(a1, 2);
  }
  else
  {
    LOBYTE(a2) = (_DWORD)a2 == 1;
    PspSetProcessForegroundBackgroundRequest(a1, a2, 0LL);
  }
}
