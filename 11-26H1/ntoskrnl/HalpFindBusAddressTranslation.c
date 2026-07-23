/*
 * XREFs of HalpFindBusAddressTranslation @ 0x14057BED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HalpFindBusAddressTranslation(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  char result; // al

  if ( !a4 )
    return 0;
  result = 1;
  if ( *a4 )
  {
    if ( a5 == 1 )
      return 0;
  }
  *a4 = 1LL;
  *a3 = a1;
  return result;
}
