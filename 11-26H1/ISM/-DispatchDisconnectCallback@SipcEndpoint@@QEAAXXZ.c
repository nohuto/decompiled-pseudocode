/*
 * XREFs of ?DispatchDisconnectCallback@SipcEndpoint@@QEAAXXZ @ 0x1801118A8
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180060180 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcEndpoint::DispatchDisconnectCallback(SipcEndpoint *this)
{
  (*((void (__fastcall **)(SipcEndpoint *, _QWORD, _QWORD))this + 10))(this, 0LL, *((_QWORD *)this + 11));
}
