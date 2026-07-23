/*
 * XREFs of PsInitializeThreadRngState @ 0x14048D204
 * Callers:
 *     KiAllocatePrcbThread @ 0x1405EECFC (KiAllocatePrcbThread.c)
 *     KiInitializeAndStartInitialThread @ 0x1405F921C (KiInitializeAndStartInitialThread.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 * Callees:
 *     RtlInitializeTRng @ 0x14048D290 (RtlInitializeTRng.c)
 */

__int64 __fastcall PsInitializeThreadRngState(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1 ^ *(_QWORD *)(a1 + 40) ^ *(_QWORD *)(a1 + 240) ^ *(_QWORD *)(a1 + 1216) ^ *(_QWORD *)(a1 + 1288) ^ *(_QWORD *)(a1 + 1296);
  v3 ^= (unsigned __int64)KeGetCurrentThread();
  v1 = (unsigned __int64)&v3 ^ v3 ^ KeGetCurrentPrcb()->InterruptCount ^ __rdtsc();
  if ( !v1 )
    v1 = 1LL;
  return RtlInitializeTRng(a1 + 1888, v1);
}
