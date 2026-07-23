/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x140534F5C
 * Callers:
 *     DbgkFlushErrorPort @ 0x140AF614C (DbgkFlushErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140AF6254 (DbgkpRemoveErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140B5AFE4 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x14078DA80 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}
