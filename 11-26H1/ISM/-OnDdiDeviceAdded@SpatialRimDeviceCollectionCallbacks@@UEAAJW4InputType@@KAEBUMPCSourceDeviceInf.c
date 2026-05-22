/*
 * XREFs of ?OnDdiDeviceAdded@SpatialRimDeviceCollectionCallbacks@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D6C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::OnDdiDeviceAdded(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 200LL))(*(_QWORD *)(a1 + 16));
}
