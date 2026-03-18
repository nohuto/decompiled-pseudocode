/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x140B40E7C
 * Callers:
 *     PfpLogApplicationEvent @ 0x140446FB0 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
