/*
 * XREFs of HalPutScatterGatherListDmaThin @ 0x14046C970
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListDmaThin(__int64 a1, _QWORD *a2)
{
  if ( *(_BYTE *)(a2[1] + 97LL) )
    ExFreePoolWithTag(a2, 0);
}
