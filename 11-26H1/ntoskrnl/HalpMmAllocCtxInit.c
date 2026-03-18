/*
 * XREFs of HalpMmAllocCtxInit @ 0x14057DC1C
 * Callers:
 *     HalpMmInitSystem @ 0x140BEB980 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  result = &HalpNPPoolAllocCtx;
  qword_140FBCC70 = 0LL;
  qword_140FBCC68 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
