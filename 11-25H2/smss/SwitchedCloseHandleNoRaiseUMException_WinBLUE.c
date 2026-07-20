/*
 * XREFs of SwitchedCloseHandleNoRaiseUMException_WinBLUE @ 0x14001CB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int SwitchedCloseHandleNoRaiseUMException_WinBLUE()
{
  __int64 v0; // rax
  int ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  v0 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  if ( *(_BYTE *)(v0 + 2) != 1 )
  {
    if ( dword_140031CF0 )
    {
      ProcessInformation = 0;
      LODWORD(v0) = NtSetInformationProcess(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      ProcessDebugPort|0x40,
                      &ProcessInformation,
                      4u);
      if ( !(_DWORD)v0 )
        dword_140031CF0 = 0;
    }
  }
  return v0;
}
