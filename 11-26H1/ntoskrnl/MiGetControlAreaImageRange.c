/*
 * XREFs of MiGetControlAreaImageRange @ 0x1404D6208
 * Callers:
 *     MiFreeRelocations @ 0x140AA79E0 (MiFreeRelocations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaImageRange(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 92);
  *(_QWORD *)a2 = *(unsigned int *)(a1 + 88);
  *(_DWORD *)(a2 + 8) = (unsigned __int16)result;
  return result;
}
