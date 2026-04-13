/*
 * XREFs of ?WilStringValidateDestA@details@wil@@YAJPEBD_K_K@Z @ 0x18003D374
 * Callers:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18003BC58 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::WilStringValidateDestA(wil::details *this, const char *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 2147942487LL;
  return result;
}
