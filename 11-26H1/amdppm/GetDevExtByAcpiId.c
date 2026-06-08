/*
 * XREFs of GetDevExtByAcpiId @ 0x140005454
 * Callers:
 *     AcpiParseProcessorContainer @ 0x14002B3B0 (AcpiParseProcessorContainer.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall GetDevExtByAcpiId(int a1)
{
  __int64 *i; // rdx
  __int64 *result; // rax

  for ( i = (__int64 *)qword_140015618; ; i = (__int64 *)*i )
  {
    result = 0LL;
    if ( i == &qword_140015618 )
      break;
    result = i - 4;
    if ( *((_DWORD *)i + 5) == a1 )
      break;
  }
  return result;
}
