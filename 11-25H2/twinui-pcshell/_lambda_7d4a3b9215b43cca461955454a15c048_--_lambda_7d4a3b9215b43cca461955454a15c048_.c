/*
 * XREFs of _lambda_7d4a3b9215b43cca461955454a15c048_::_lambda_7d4a3b9215b43cca461955454a15c048_ @ 0x1802E3908
 * Callers:
 *     ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18006B4C0 (-OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall lambda_7d4a3b9215b43cca461955454a15c048_::_lambda_7d4a3b9215b43cca461955454a15c048_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  if ( a1 != a2 )
  {
    v2 = *a2;
    *a2 = 0LL;
    *a1 = v2;
  }
  return a1;
}
