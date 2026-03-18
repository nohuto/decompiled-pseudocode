/*
 * XREFs of ?Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ @ 0x140085DCC
 * Callers:
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x140245390 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 * Callees:
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall AUTO_ADAPTER_LOCK::Acquire(AUTO_ADAPTER_LOCK *this, __int64 a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 9) )
    return 0LL;
  LOBYTE(a2) = *((_BYTE *)this + 8);
  result = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, a2);
  if ( (int)result >= 0 )
    *((_BYTE *)this + 9) = 1;
  return result;
}
