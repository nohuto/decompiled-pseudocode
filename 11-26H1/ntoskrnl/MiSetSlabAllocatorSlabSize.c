/*
 * XREFs of MiSetSlabAllocatorSlabSize @ 0x14070C690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetSlabAllocatorSlabSize(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_WORD *)(a2 + 136) ^= ((unsigned __int8)*(_WORD *)(a2 + 136) ^ (unsigned __int8)(8 * a3)) & 0x18;
  return result;
}
