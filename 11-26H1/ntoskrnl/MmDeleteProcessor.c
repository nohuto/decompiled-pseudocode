/*
 * XREFs of MmDeleteProcessor @ 0x14086AAF8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)(a1 + 34872);
  if ( v1 )
  {
    MiDeleteUltraThreadContext((__int64)v1 + 8);
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 34872) = 0LL;
  }
}
