/*
 * XREFs of KeGetIdealNodeNumberProcess @ 0x1404E9DE4
 * Callers:
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetIdealNodeNumberProcess(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 260);
}
