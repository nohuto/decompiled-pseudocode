/*
 * XREFs of KiStartPrcbThreads @ 0x1405EB9A4
 * Callers:
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 * Callees:
 *     KiStartPrcbThread @ 0x1405EC620 (KiStartPrcbThread.c)
 */

__int64 __fastcall KiStartPrcbThreads(__int64 a1)
{
  KiStartPrcbThread(*(_QWORD *)(a1 + 14392), a1);
  return KiStartPrcbThread(*(_QWORD *)(a1 + 36544), a1);
}
