/*
 * XREFs of sub_14007E43C @ 0x14007E43C
 * Callers:
 *     sub_1400778E0 @ 0x1400778E0 (sub_1400778E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14007E43C(HSTRING *newString, HSTRING *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*a2 || *a2 != *newString )
  {
    WindowsDeleteString(*newString);
    *newString = 0LL;
    return (unsigned int)WindowsDuplicateString(*a2, newString);
  }
  return v2;
}
