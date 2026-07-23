/*
 * XREFs of __asan_load2_atomic @ 0x1405E13A0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 */

void __fastcall _asan_load2_atomic(ULONG_PTR BugCheckParameter1)
{
  signed __int8 v2; // cl
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( !KasaniValidationEnabled || BugCheckParameter1 < 0xFFFF800000000000uLL )
    return;
  v2 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow);
  if ( (BugCheckParameter1 & 7) == 7 )
  {
    if ( !v2 || v2 >= 8 )
    {
      v2 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000001LL) >> 3) + KasaniShadow);
      if ( !v2 || v2 >= 8 || (char)(((BugCheckParameter1 + 1) & 7) + 1) <= v2 )
        goto LABEL_12;
    }
LABEL_21:
    KasaniReport(BugCheckParameter1, 2uLL, 0, retaddr, v2);
  }
  if ( v2 && v2 < 8 && (char)(((BugCheckParameter1 + 1) & 7) + 1) > v2 )
    goto LABEL_21;
LABEL_12:
  if ( v2 == 9 && KeGetCurrentIrql() >= 2u )
    KasaniReport(BugCheckParameter1, 2uLL, 0, retaddr, 9u);
}
