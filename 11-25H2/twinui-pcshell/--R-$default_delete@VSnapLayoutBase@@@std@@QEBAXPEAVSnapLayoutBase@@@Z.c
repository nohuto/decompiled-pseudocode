/*
 * XREFs of ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x1800BD5FC
 * Callers:
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1800BD588 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 *     ??1KioskPositioner@@UEAA@XZ @ 0x1800F64D8 (--1KioskPositioner@@UEAA@XZ.c)
 *     ??$?4U?$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804DCA1C (--$-4U-$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@-$unique_ptr@VPrimaryAppProxyBase@@U-$de.c)
 *     ??1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ @ 0x1804DD4FC (--1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ.c)
 *     ??_GKioskPositionerConfiguration@KioskPositioner@@QEAAPEAXI@Z @ 0x1804DD784 (--_GKioskPositionerConfiguration@KioskPositioner@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::default_delete<SnapLayoutBase>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
