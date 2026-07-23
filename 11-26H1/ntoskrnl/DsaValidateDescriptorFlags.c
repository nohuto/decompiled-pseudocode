/*
 * XREFs of DsaValidateDescriptorFlags @ 0x1404B9288
 * Callers:
 *     AccelpSiovDsaOperationHandler @ 0x1404B90F4 (AccelpSiovDsaOperationHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DsaValidateDescriptorFlags(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 <= 1 || a1 == 3 || a1 == 4 || a1 == 5 )
  {
    if ( (a3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      if ( (a3 & 1) != 0 )
      {
        if ( a1 <= 1 )
          return 3221225659LL;
        *(_BYTE *)(a2 + 4) &= ~2u;
      }
      if ( (a3 & 2) != 0 )
      {
        if ( (a1 & 0xFFFFFFFA) == 0 && a1 != 4 )
          return 3221225659LL;
        *(_BYTE *)(a2 + 5) &= ~1u;
      }
      if ( (a3 & 8) != 0 )
        *(_BYTE *)(a2 + 4) &= ~8u;
    }
  }
  else if ( a1 != 33 )
  {
    return 3221225659LL;
  }
  return result;
}
