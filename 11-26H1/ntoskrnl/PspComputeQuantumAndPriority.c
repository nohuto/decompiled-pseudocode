/*
 * XREFs of PspComputeQuantumAndPriority @ 0x140AB8340
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x140518324 (PspSetProcessPriorityByClass.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     MmSetMemoryPriorityProcess @ 0x1404D0A3C (MmSetMemoryPriorityProcess.c)
 *     PspComputeQuantum @ 0x140AB8418 (PspComputeQuantum.c)
 */

__int64 __fastcall PspComputeQuantumAndPriority(__int64 a1, __int64 a2, _BYTE *a3, _DWORD *a4, _DWORD *a5)
{
  char v7; // bl

  v7 = (_DWORD)a2 != 1 ? 0 : 2;
  if ( (_DWORD)a2 == 2 && (KiVelocityFlags & 0x40000) != 0 )
    v7 = 2;
  if ( a4 )
    *a4 = *(_BYTE *)(a1 + 1210) == 2 && !(_DWORD)a2;
  if ( a5 )
  {
    if ( !*(_BYTE *)(a1 + 1210) && (_DWORD)a2 == 1 )
    {
      *a5 = 1;
      goto LABEL_5;
    }
    *a5 = 0;
  }
  if ( (_DWORD)a2 != 2 )
LABEL_5:
    MmSetMemoryPriorityProcess(a1, v7);
  LOBYTE(a2) = v7;
  *a3 = PspComputeQuantum(a1, a2);
  return *(unsigned int *)&PspPriorityTable[2 * *(unsigned __int8 *)(a1 + 839)];
}
