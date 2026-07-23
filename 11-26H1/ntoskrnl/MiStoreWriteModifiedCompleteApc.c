/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x140403940
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 */

__int64 __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  return MiWriteComplete(*a4);
}
