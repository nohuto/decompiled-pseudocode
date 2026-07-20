/*
 * XREFs of SmpConfigureExcludeKnownDlls @ 0x140013CF0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x140019758 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureExcludeKnownDlls(__int64 a1, int a2, _WORD *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( a2 == 7 || a2 == 1 )
  {
    while ( *a3 )
    {
      result = SmpSaveRegistryValue(a6, a3, 0LL, 1LL, 0LL);
      if ( (int)result < 0 || a2 == 1 )
        return result;
      while ( *a3++ )
        ;
    }
  }
  return 0LL;
}
