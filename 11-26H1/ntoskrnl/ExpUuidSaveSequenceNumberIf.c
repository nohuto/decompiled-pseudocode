/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x140A808D0
 * Callers:
 *     NtAllocateUuids @ 0x140A7DF90 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1408472A8 (ExpUuidSaveSequenceNumber.c)
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
