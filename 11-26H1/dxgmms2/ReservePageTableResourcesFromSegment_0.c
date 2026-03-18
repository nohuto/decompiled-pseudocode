/*
 * XREFs of ReservePageTableResourcesFromSegment_0 @ 0x140124FD8
 * Callers:
 *     ?ReservePageTableResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ @ 0x140099070 (-ReservePageTableResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReservePageTableResourcesFromSegment_0(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 112LL))(v3, *(unsigned int *)(a1 + 1724));
}
