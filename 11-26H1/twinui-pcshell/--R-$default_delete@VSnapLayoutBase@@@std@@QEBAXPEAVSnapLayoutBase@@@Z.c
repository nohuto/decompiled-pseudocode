/*
 * XREFs of ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x1800E4830
 * Callers:
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1800E3714 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 *     ??1KioskPositioner@@UEAA@XZ @ 0x1801A9A8C (--1KioskPositioner@@UEAA@XZ.c)
 *     ??$?4U?$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804EEFC4 (--$-4U-$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@-$unique_ptr@VPrimaryAppProxyBase@@U-$de.c)
 *     ??1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ @ 0x1804EFB1C (--1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ.c)
 *     ??_GKioskPositionerConfiguration@KioskPositioner@@QEAAPEAXI@Z @ 0x1804EFDE4 (--_GKioskPositionerConfiguration@KioskPositioner@@QEAAPEAXI@Z.c)
 *     ?_Destroy@?$_Ref_count_resource@PEAVFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@EEAAXXZ @ 0x1805F8050 (-_Destroy@-$_Ref_count_resource@PEAVFlyoutView@@U-$default_delete@VFlyoutView@@@std@@@std@@EEAAX.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
