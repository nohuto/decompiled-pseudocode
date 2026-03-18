/*
 * XREFs of ZwMakePermanentObject @ 0x14069D440
 * Callers:
 *     NtCreateCpuPartition @ 0x140765E10 (NtCreateCpuPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwMakePermanentObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
