/*
 * XREFs of ExpAllocateLowLevelTable @ 0x140972760
 * Callers:
 *     ExpAllocateHandleTable @ 0x140971C08 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140972494 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x14097284C (ExpAllocateMidLevelTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x140972798 (ExpAllocateTablePagedPoolNoZero.c)
 */

_QWORD *__fastcall ExpAllocateLowLevelTable(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExpAllocateTablePagedPoolNoZero(*(_QWORD *)(a1 + 16), 4096LL);
  if ( result )
  {
    result[1] = a2;
    *result = 0LL;
  }
  return result;
}
