/*
 * XREFs of EtwpTiFreeVad @ 0x140A88C10
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x140A88B10 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTiFreeVad(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 56);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
