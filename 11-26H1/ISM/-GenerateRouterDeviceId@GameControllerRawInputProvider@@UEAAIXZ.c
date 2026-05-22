/*
 * XREFs of ?GenerateRouterDeviceId@GameControllerRawInputProvider@@UEAAIXZ @ 0x1800CD700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GameControllerRawInputProvider::GenerateRouterDeviceId(GameControllerRawInputProvider *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4));
}
