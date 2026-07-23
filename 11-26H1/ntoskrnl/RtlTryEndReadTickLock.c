/*
 * XREFs of RtlTryEndReadTickLock @ 0x140444140
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140B6DAC4 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
