/*
 * XREFs of DifIsSupportedDomain @ 0x140643D50
 * Callers:
 *     DifClearCallerContext @ 0x14064E250 (DifClearCallerContext.c)
 *     DifSetCallerContext @ 0x14064E5A0 (DifSetCallerContext.c)
 * Callees:
 *     <none>
 */

char __fastcall DifIsSupportedDomain(unsigned __int64 a1)
{
  char v1; // r8
  unsigned int i; // edx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx

  v1 = 0;
  for ( i = 0; i < 8; ++i )
  {
    v4 = 4LL * i;
    if ( *((_DWORD *)&VfLegacyCallWhitelist + 2 * v4 + 7) == 33 )
    {
      v5 = (unsigned __int64)*(&VfLegacyCallWhitelist + v4 + 1);
      if ( a1 >= v5 && a1 < (unsigned __int64)(&VfLegacyCallWhitelist)[v4 + 1] + v5 )
        return 1;
    }
  }
  return v1;
}
