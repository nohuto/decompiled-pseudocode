/*
 * XREFs of SwitchedCloseHandleRaiseUMException_Current @ 0x14001CBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void SwitchedCloseHandleRaiseUMException_Current()
{
  int ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_140031CF0 != 1 )
  {
    ProcessInformation = 1;
    if ( !NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDebugPort|0x40, &ProcessInformation, 4u) )
      dword_140031CF0 = 1;
  }
}
