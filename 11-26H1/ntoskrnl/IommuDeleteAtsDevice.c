/*
 * XREFs of IommuDeleteAtsDevice @ 0x14059E020
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDeleteAtsDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9

  v2 = *(_QWORD *)(a1 + 32);
  if ( HalpHvIommu )
  {
    guard_dispatch_icall_no_overrides(v2, 17LL);
  }
  else
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 16), *(_QWORD *)(a1 + 40));
    --*(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 60) = 0;
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 64));
    _InterlockedExchange64((volatile __int64 *)(a1 + 64), 1LL);
  }
  return HalpIommuDeleteDevice((__int64 *)a1, v3, v4, v5);
}
