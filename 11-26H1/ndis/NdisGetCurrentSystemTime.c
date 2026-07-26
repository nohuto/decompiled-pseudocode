/*
 * XREFs of NdisGetCurrentSystemTime @ 0x1400DA0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetCurrentSystemTime(_QWORD *a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000014];
  *a1 = MEMORY[0xFFFFF78000000014];
  return result;
}
