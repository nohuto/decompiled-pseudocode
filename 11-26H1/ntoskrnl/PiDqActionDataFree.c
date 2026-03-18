/*
 * XREFs of PiDqActionDataFree @ 0x140990C3C
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14098E76C (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryFreeActiveData @ 0x140990044 (PiDqQueryFreeActiveData.c)
 *     PiDqActionDataCreate @ 0x1409907EC (PiDqActionDataCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140990C90 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqActionDataFree(_QWORD *P)
{
  void *v2; // rcx
  __int64 v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)P[2];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = P[4];
    if ( v3 )
      PnpFreeDevPropertyArray(*((unsigned int *)P + 6), v3, 1483763280LL);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
