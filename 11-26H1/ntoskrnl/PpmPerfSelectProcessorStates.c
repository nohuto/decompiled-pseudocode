/*
 * XREFs of PpmPerfSelectProcessorStates @ 0x140450260
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfSelectProcessorState @ 0x1404502F0 (PpmPerfSelectProcessorState.c)
 */

void PpmPerfSelectProcessorStates()
{
  PBOOLEAN i; // rbx
  unsigned int j; // edi
  int v2; // eax

  for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        i = *(PBOOLEAN *)i )
  {
    v2 = *((_DWORD *)i + 360);
    if ( v2 != -1 )
      *((_DWORD *)i + 360) = v2 + 1;
    for ( j = 0; j < *((_DWORD *)i + 74); ++j )
    {
      if ( *(_QWORD *)(1224LL * j + *((_QWORD *)i + 39)) )
        PpmPerfSelectProcessorState();
    }
  }
}
