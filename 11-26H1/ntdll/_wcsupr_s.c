/*
 * XREFs of _wcsupr_s @ 0x180129260
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     wcsnlen @ 0x18012DAB0 (wcsnlen.c)
 */

errno_t __cdecl wcsupr_s(wchar_t *String, size_t Size)
{
  wchar_t *v2; // rbx
  wchar_t v4; // cx

  v2 = String;
  if ( !String )
    goto LABEL_2;
  if ( wcsnlen(String, Size) >= Size )
  {
    *v2 = 0;
LABEL_2:
    invalid_parameter();
    return 22;
  }
  while ( 1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    if ( (unsigned __int16)(v4 - 97) <= 0x19u )
      *v2 = v4 - 32;
    ++v2;
  }
  return 0;
}
