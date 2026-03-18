/*
 * XREFs of RtlTryEndReadTickLock @ 0x14044C020
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140B6A8B4 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
