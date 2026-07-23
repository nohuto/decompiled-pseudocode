/*
 * XREFs of IommuHvSetAddressSpace @ 0x14059FF70
 * Callers:
 *     IommuDisableDevicePasid @ 0x14059E170 (IommuDisableDevicePasid.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuHvSetAddressSpace(__int64 a1, ULONG_PTR a2)
{
  int v4; // eax

  v4 = guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL));
  if ( v4 < 0 )
    KeBugCheckEx(0x159u, 0x3200uLL, v4, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL), a2);
  return 0LL;
}
