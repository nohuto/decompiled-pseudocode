/*
 * XREFs of FreePageTableResourcesFromSegment_0 @ 0x1400B1E88
 * Callers:
 *     ?FreePageTableResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ @ 0x1400B1E30 (-FreePageTableResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FreePageTableResourcesFromSegment_0(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 120LL))(v2);
}
