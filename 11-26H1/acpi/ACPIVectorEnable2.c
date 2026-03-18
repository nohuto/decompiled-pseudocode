/*
 * XREFs of ACPIVectorEnable2 @ 0x14006AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorEnable @ 0x140020340 (ACPIVectorEnable.c)
 */

__int64 __fastcall ACPIVectorEnable2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorEnable(*(_QWORD *)(a1 + 768), a2);
}
