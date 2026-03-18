/*
 * XREFs of KeGetIdealNodeNumberProcess @ 0x1404F0804
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     SmProcessCreateRequest @ 0x140967230 (SmProcessCreateRequest.c)
 *     KeInitThread @ 0x140C07424 (KeInitThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetIdealNodeNumberProcess(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 260);
}
