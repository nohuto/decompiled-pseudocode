/*
 * XREFs of _lambda_9d62ddb24c480631ca4fb973be46ca08_::operator() @ 0x1800EAEC8
 * Callers:
 *     ?SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800ED520 (-SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0A@U_Mul.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 */

_DWORD **__fastcall lambda_9d62ddb24c480631ca4fb973be46ca08_::operator()(_QWORD *a1)
{
  _DWORD **result; // rax
  __int64 i; // rbx
  __int64 *v4; // rax
  __int64 v5; // r14
  __int64 j; // rsi

  result = (_DWORD **)*a1;
  for ( i = 0LL; (unsigned int)i < **(_DWORD **)*a1; i = (unsigned int)(i + 1) )
  {
    v4 = (__int64 *)a1[1];
    v5 = *v4;
    operator delete(*(void **)(*v4 + 40 * i + 16));
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v5 + 40 * i + 24); j = (unsigned int)(j + 1) )
      operator delete(*(void **)(*(_QWORD *)(v5 + 40 * i + 32) + 8 * j));
    result = (_DWORD **)*a1;
  }
  return result;
}
