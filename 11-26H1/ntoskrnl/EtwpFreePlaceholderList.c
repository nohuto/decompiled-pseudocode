/*
 * XREFs of EtwpFreePlaceholderList @ 0x1404305BC
 * Callers:
 *     EtwpFreeCompression @ 0x140430384 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1404F3290 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1448);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1448) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
