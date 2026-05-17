/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1800DBC50
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18010BE60 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     <none>
 */

char RtlIsStateSeparationEnabled()
{
  _DWORD *SharedData; // rax

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 29);
  else
    return (MEMORY[0x7FFE02F0] & 0x400) != 0;
}
