/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140AD9BE8
 * Callers:
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1407C4154 (AlpcpReferenceMessageByWaitingThreadPort.c)
 * Callees:
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 */

_QWORD *__fastcall AlpcpReferenceMessageByWaitingThreadPortQueue(__int64 a1, _QWORD **a2)
{
  _QWORD *i; // rbx

  for ( i = *a2; ; i = (_QWORD *)*i )
  {
    if ( i == a2 )
      return 0LL;
    if ( i[4] == a1 && AlpcpReferenceBlob((ULONG_PTR)i) )
      break;
  }
  return i;
}
