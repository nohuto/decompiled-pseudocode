/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1409BDA50
 * Callers:
 *     ExpAllocateHandleTable @ 0x1409BCEF8 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409BD784 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x1409BDB3C (ExpAllocateMidLevelTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1409BDA88 (ExpAllocateTablePagedPoolNoZero.c)
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
