/*
 * XREFs of RtlIsZeroMemory @ 0x1801483C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsZeroMemory(PVOID Buffer, SIZE_T Length)
{
  BOOLEAN result; // al

  result = 0;
  while ( ((unsigned __int8)Buffer & 7) != 0 && Length )
  {
    if ( *(_BYTE *)Buffer )
      return result;
    Buffer = (char *)Buffer + 1;
    --Length;
  }
  while ( Length >= 8 )
  {
    if ( *(_QWORD *)Buffer )
      return result;
    Buffer = (char *)Buffer + 8;
    Length -= 8LL;
  }
  while ( Length )
  {
    if ( *(_BYTE *)Buffer )
      return result;
    Buffer = (char *)Buffer + 1;
    --Length;
  }
  return 1;
}
