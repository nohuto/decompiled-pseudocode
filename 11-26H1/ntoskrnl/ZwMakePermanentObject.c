/*
 * XREFs of ZwMakePermanentObject @ 0x1407256F0
 * Callers:
 *     NtCreateCpuPartition @ 0x1407F18E0 (NtCreateCpuPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwMakePermanentObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
