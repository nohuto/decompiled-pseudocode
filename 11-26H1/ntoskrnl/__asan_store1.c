/*
 * XREFs of __asan_store1 @ 0x1405E2750
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

char __fastcall _asan_store1(ULONG_PTR a1)
{
  char result; // al
  unsigned __int64 v2; // rdx
  int v3; // r8d
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniValidationEnabled )
  {
    result = 0;
    if ( a1 >= 0xFFFF800000000000uLL )
    {
      result = KasaniShadow;
      v2 = (a1 + 0x800000000000LL) >> 3;
      v3 = *(unsigned __int8 *)(v2 + KasaniShadow);
      if ( (_BYTE)v3 )
      {
        if ( (char)v3 < 8 )
        {
          result = (a1 & 7) + 1;
          if ( result > (char)v3 )
            KasaniReport(a1, 1uLL, 1u, retaddr, *(_BYTE *)(v2 + KasaniShadow));
        }
        if ( (_BYTE)v3 == 9 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result >= 2u )
            KasaniReport(a1, 1uLL, 1u, retaddr, 9u);
        }
      }
      if ( KcsaniValidationEnabled )
      {
        LOBYTE(v3) = 1;
        return KcsanValidateAddress(a1, 1, v3, 0, retaddr);
      }
    }
  }
  return result;
}
