/*
 * XREFs of PsSetProcessPriorityByClass @ 0x140ABAD60
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x14051C2E4 (PspSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABAD8C (PspSetProcessForegroundBackgroundRequest.c)
 */

void __fastcall PsSetProcessPriorityByClass(__int64 a1, __int64 a2)
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
