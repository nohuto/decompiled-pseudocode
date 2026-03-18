/*
 * XREFs of MiDeleteZeroThreadContext @ 0x140530728
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x1404976C0 (MiBackgroundZeroNodePages.c)
 *     MiInsertNewZeroThread @ 0x1405161C8 (MiInsertNewZeroThread.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x1404A1094 (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteZeroThreadContext(_QWORD *P, int a2)
{
  if ( P[41] )
    MiDereferenceAnyActiveHugeContext((__int64)P);
  else
    MiDeleteUltraThreadContext((__int64)(P + 24));
  if ( !a2 )
    ExFreePoolWithTag(P, 0);
}
