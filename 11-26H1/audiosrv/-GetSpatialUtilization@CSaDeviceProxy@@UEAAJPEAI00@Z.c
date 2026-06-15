/*
 * XREFs of ?GetSpatialUtilization@CSaDeviceProxy@@UEAAJPEAI00@Z @ 0x1800FDEE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSaDeviceProxy::GetSpatialUtilization(
        CSaDeviceProxy *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, unsigned int *))(**((_QWORD **)this + 12)
                                                                                           + 136LL))(
           *((_QWORD *)this + 12),
           a2,
           a3,
           a4);
}
