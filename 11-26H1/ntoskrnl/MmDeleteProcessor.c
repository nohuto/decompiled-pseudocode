/*
 * XREFs of MmDeleteProcessor @ 0x140864718
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
