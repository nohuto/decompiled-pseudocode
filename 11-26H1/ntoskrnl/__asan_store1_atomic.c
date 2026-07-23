/*
 * XREFs of __asan_store1_atomic @ 0x1405E2FC0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 */

signed __int8 __fastcall _asan_store1_atomic(ULONG_PTR a1)
{
  signed __int8 result; // al
  unsigned __int64 v2; // rdx
  char v3; // r8
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniValidationEnabled )
  {
    result = 0;
    if ( a1 >= 0xFFFF800000000000uLL )
    {
      result = KasaniShadow;
      v2 = (a1 + 0x800000000000LL) >> 3;
      v3 = *(_BYTE *)(v2 + KasaniShadow);
      if ( v3 )
      {
        if ( v3 < 8 )
        {
          result = (a1 & 7) + 1;
          if ( result > v3 )
            KasaniReport(a1, 1uLL, 1u, retaddr, *(_BYTE *)(v2 + KasaniShadow));
        }
        if ( v3 == 9 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result >= 2u )
            KasaniReport(a1, 1uLL, 1u, retaddr, 9u);
        }
      }
    }
  }
  return result;
}
