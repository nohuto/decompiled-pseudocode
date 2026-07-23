/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x140B42E8C
 * Callers:
 *     PfpLogApplicationEvent @ 0x14043FAA0 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
