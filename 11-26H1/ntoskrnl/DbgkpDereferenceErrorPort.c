/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x140532ABC
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     DbgkFlushErrorPort @ 0x140A43A48 (DbgkFlushErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140B3A9A0 (DbgkpRemoveErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140B581C4 (DbgkRegisterErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x14078AF50 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}
