/*
 * XREFs of PspComputeQuantum @ 0x140AB8418
 * Callers:
 *     PsChangeQuantumTable @ 0x140AB8200 (PsChangeQuantumTable.c)
 *     PspComputeQuantumAndPriority @ 0x140AB8340 (PspComputeQuantumAndPriority.c)
 * Callees:
 *     <none>
 */

char __fastcall PspComputeQuantum(__int64 a1, char a2)
{
  __int64 v2; // rax
  unsigned int v4; // ecx

  if ( *(_BYTE *)(a1 + 839) == 1 )
    return 6;
  v2 = *(_QWORD *)(a1 + 672);
  if ( !v2 || !PspUseJobSchedulingClasses )
    return *((_BYTE *)&PspForegroundQuantum + (PsPrioritySeparation & (unsigned int)-(a2 != 0)));
  v4 = *(_DWORD *)(v2 + 1060);
  if ( v4 >= 0xA )
    v4 = *(_DWORD *)(v2 + 580);
  return *((_BYTE *)PspJobSchedulingClasses + v4);
}
