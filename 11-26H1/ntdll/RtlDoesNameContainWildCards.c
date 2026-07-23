/*
 * XREFs of RtlDoesNameContainWildCards @ 0x180102000
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x180021848 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesNameContainWildCards(PUNICODE_STRING Expression)
{
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx

  if ( Expression->Length )
  {
    Buffer = Expression->Buffer;
    for ( i = &Buffer[((unsigned __int64)Expression->Length >> 1) - 1]; i >= Buffer && *i != 92; --i )
    {
      if ( *i < 0x40u && (byte_1801825D0[*i] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
