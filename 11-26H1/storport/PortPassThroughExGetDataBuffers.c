/*
 * XREFs of PortPassThroughExGetDataBuffers @ 0x1401B1D24
 * Callers:
 *     PortPassThroughExValidate @ 0x14012FFC4 (PortPassThroughExValidate.c)
 *     PortPassThroughExSendAsync @ 0x1401B3488 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PortPassThroughExGetDataBuffers(__int64 a1, __int64 a2, char a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  _QWORD *result; // rax

  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    if ( a3 )
      v6 = *(_QWORD *)(a1 + 40);
    else
      v6 = *(_QWORD *)(a1 + 40) + *(_QWORD *)(a2 + 24);
  }
  else
  {
    v6 = 0LL;
  }
  *a4 = v6;
  if ( *(_DWORD *)(a1 + 36) )
  {
    if ( a3 )
      v5 = *(_QWORD *)(a1 + 48);
    else
      v5 = *(_QWORD *)(a1 + 48) + *(_QWORD *)(a2 + 24);
  }
  result = a5;
  *a5 = v5;
  return result;
}
