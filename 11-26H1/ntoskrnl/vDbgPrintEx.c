/*
 * XREFs of vDbgPrintEx @ 0x140399210
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403993F0 (vDbgPrintExWithPrefixInternalHelper.c)
 */

ULONG __stdcall vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  unsigned int v4; // ebx
  char v6; // cf
  int v7; // esi
  ULONG result; // eax

  v4 = 128;
  v6 = 1;
  v7 = (int)Format;
  do
  {
    result = vDbgPrintExWithPrefixInternalHelper((int)&File, ComponentId, Level, v7, arglist, 1, v4, v6);
    if ( result != -2147483643 )
      break;
    if ( v4 >= 0x200 )
      break;
    v4 += 128;
    v6 = v4 < 0x200;
  }
  while ( v4 <= 0x200 );
  return result;
}
