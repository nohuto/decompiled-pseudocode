/*
 * XREFs of ?GetWaitHandles@SipcEndpoint@@QEBAXAEAPEAX00@Z @ 0x180111FB4
 * Callers:
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@2PEAX@ZP6AX0W4SIPC_ENDPOINT_STATUS@@3@Z3PEAPEAU2@@Z @ 0x18010FE00 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SipcEndpoint::GetWaitHandles(SipcEndpoint *this, void **a2, void **a3, void **a4)
{
  *a2 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
  *a3 = *(void **)(*((_QWORD *)this + 2) + 32LL);
  *a4 = (void *)*((_QWORD *)this + 4);
}
