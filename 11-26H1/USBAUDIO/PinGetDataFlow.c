/*
 * XREFs of PinGetDataFlow @ 0x14002E3B0
 * Callers:
 *     PinBuildDescriptors @ 0x14003F668 (PinBuildDescriptors.c)
 * Callees:
 *     PinGetTerminalUnit @ 0x14003FCF4 (PinGetTerminalUnit.c)
 */

__int64 PinGetDataFlow()
{
  __int64 TerminalUnit; // rax
  unsigned int v1; // r10d
  _DWORD *v2; // r11

  TerminalUnit = PinGetTerminalUnit();
  if ( TerminalUnit )
  {
    *v2 = (*(_DWORD *)(TerminalUnit + 20) != 0) + 1;
    return 0;
  }
  return v1;
}
