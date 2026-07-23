/*
 * XREFs of MiDeleteZeroThreadContext @ 0x140532C28
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 *     MiInsertNewZeroThread @ 0x14050FC38 (MiInsertNewZeroThread.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14049ABC4 (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
