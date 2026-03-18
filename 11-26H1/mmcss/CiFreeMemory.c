/*
 * XREFs of CiFreeMemory @ 0x140003F50
 * Callers:
 *     CsTerminate @ 0x14000D444 (CsTerminate.c)
 *     CiSystemTerminate @ 0x14000DF14 (CiSystemTerminate.c)
 *     CiTaskIndexCreate @ 0x14000E260 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
