/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x140A77BB0
 * Callers:
 *     NtAllocateUuids @ 0x140A75270 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x140A76B60 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x140841068 (ExpUuidSaveSequenceNumber.c)
 */

__int64 ExpUuidSaveSequenceNumberIf()
{
  __int64 result; // rax

  result = 0LL;
  if ( ExpUuidSequenceNumberNotSaved == 1 )
  {
    result = ExpUuidSaveSequenceNumber();
    if ( (int)result >= 0 )
      ExpUuidSequenceNumberNotSaved = 0;
  }
  return result;
}
