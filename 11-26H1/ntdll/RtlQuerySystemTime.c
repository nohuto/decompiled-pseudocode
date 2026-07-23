/*
 * XREFs of RtlQuerySystemTime @ 0x1800DDD80
 * Callers:
 *     ZwQuerySystemTime @ 0x18015F980 (ZwQuerySystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQuerySystemTime(_QWORD *a1)
{
  *a1 = MEMORY[0x7FFE0014];
  return 0LL;
}
