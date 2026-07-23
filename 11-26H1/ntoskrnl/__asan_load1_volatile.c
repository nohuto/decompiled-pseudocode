/*
 * XREFs of __asan_load1_volatile @ 0x1405E11C0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

signed __int8 __fastcall _asan_load1_volatile(ULONG_PTR a1)
{
  signed __int8 result; // al
  signed __int8 v2; // r8
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniValidationEnabled )
  {
    result = 0;
    if ( a1 >= 0xFFFF800000000000uLL )
    {
      result = KasaniShadow;
      v2 = *(_BYTE *)(((a1 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v2 )
      {
        if ( v2 < 8 )
        {
          result = (a1 & 7) + 1;
          if ( result > v2 )
            KasaniReport(a1, 1uLL, 0, retaddr, v2);
        }
        if ( v2 == 9 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result >= 2u )
            KasaniReport(a1, 1uLL, 0, retaddr, 9u);
        }
      }
      if ( KcsaniValidationEnabled )
        return KcsanValidateAddress(a1, 1, 0, 1, retaddr);
    }
  }
  return result;
}
