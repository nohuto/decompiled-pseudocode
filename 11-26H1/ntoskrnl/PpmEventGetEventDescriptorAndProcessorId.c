/*
 * XREFs of PpmEventGetEventDescriptorAndProcessorId @ 0x1404479D0
 * Callers:
 *     PpmEventAutonomousModeChange @ 0x140611010 (PpmEventAutonomousModeChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEventGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  if ( *(_BYTE *)(a1 + 68) )
  {
    *(_WORD *)a4 = *(unsigned __int8 *)(a1 - 35056);
    *(_BYTE *)(a4 + 2) = *(_BYTE *)(a1 - 35055);
    *a5 = a4;
    a5[1] = 3LL;
    return a2;
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
    *a5 = a4;
    a5[1] = 4LL;
    return a3;
  }
}
