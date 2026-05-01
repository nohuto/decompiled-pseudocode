/*
 * XREFs of ?load@?$_Atomic_storage@N$07@std@@QEBANW4memory_order@2@@Z @ 0x18035996C
 * Callers:
 *     ?GetCpuSpeedInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN@Z @ 0x180348080 (-GetCpuSpeedInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN@Z.c)
 *     ?GetMemoryUsageGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z @ 0x180349740 (-GetMemoryUsageGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z.c)
 *     ?get_SearchBoxPlacementMargin@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@@impl@winrt@@UEAAHPEAN@Z @ 0x1803BD070 (-get_SearchBoxPlacementMargin@-$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@.c)
 * Callees:
 *     <none>
 */

double __fastcall std::_Atomic_storage<double,8>::load(__int64 a1)
{
  return *(double *)a1;
}
