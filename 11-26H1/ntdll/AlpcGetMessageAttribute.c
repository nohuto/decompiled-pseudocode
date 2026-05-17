/*
 * XREFs of AlpcGetMessageAttribute @ 0x1800D7F70
 * Callers:
 *     <none>
 * Callees:
 *     AlpcGetHeaderSize @ 0x1800D7FB0 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
