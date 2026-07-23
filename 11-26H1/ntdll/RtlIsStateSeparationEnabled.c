/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1800D8B30
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18010B9B0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  _DWORD *SharedData; // rax

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 29);
  else
    return (MEMORY[0x7FFE02F0] & 0x400) != 0;
}
