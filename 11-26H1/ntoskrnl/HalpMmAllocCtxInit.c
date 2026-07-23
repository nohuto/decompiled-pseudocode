/*
 * XREFs of HalpMmAllocCtxInit @ 0x14058013C
 * Callers:
 *     HalpMmInitSystem @ 0x140BF1980 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  result = &HalpNPPoolAllocCtx;
  qword_140FBD010 = 0LL;
  qword_140FBD008 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
