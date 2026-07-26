/*
 * XREFs of ndisCompareProcNumInit @ 0x14018F220
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x140021250 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 */

__int64 __fastcall ndisCompareProcNumInit(struct _PROCESSOR_NUMBER *a1, struct _PROCESSOR_NUMBER *a2)
{
  return ndisCompareProcNum(*a1, *a2);
}
