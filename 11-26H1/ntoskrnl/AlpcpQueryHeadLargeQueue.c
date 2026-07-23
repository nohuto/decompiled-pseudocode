/*
 * XREFs of AlpcpQueryHeadLargeQueue @ 0x140A81570
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AlpcpQueryHeadLargeQueue(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1 + 160);
  result = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  if ( !result )
    return 0LL;
  return result;
}
