/*
 * XREFs of AlpcpQueryHeadMainQueue @ 0x140A81B24
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpQueryHeadMainQueue(__int64 a1)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)(a1 + 144);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return *v1 & -(__int64)(*v1 != 0LL);
}
