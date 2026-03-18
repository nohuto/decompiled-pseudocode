/*
 * XREFs of AlpcpIsEntryInList @ 0x140B40424
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x140A69A60 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpIsEntryInList(_QWORD **a1, _QWORD *a2)
{
  _QWORD *i; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    if ( i == a2 )
      return 1LL;
  }
  return 0LL;
}
