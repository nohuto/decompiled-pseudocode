/*
 * XREFs of ??C?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@QEBAPEAUPrimitiveUVDesc@@XZ @ 0x18025A01C
 * Callers:
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016CBCC (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<PrimitiveUVDesc *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 56 * v1;
}
