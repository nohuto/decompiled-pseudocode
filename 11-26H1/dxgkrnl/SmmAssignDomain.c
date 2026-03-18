/*
 * XREFs of SmmAssignDomain @ 0x14009BB18
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140285400 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285654 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x140285730 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400416A0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

__int64 __fastcall SmmAssignDomain(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  KIRQL v7; // al

  v6 = operator new(16, (struct DXGK_LOG *)(a1 + 256), 2u, 0);
  if ( v6 )
  {
    *(_DWORD *)v6 = a3;
    *(_QWORD *)(v6 + 8) = a2;
  }
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_QWORD *)(a1 + 112) = a2;
  *(_DWORD *)(a1 + 104) = a3;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v7);
  return ExReleasePushLockExclusiveEx(a1 + 80, 0LL);
}
