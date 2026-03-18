/*
 * XREFs of ?CreateRegionInfo@DeadzoneJumping@CCursorClip@@AEAAPEAURegionInfo@12@PEBUCInputSpaceRegion@@@Z @ 0x14008F770
 * Callers:
 *     ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x14008F578 (-RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct CCursorClip::DeadzoneJumping::RegionInfo *__fastcall CCursorClip::DeadzoneJumping::CreateRegionInfo(
        CCursorClip::DeadzoneJumping *this,
        const struct CInputSpaceRegion *a2)
{
  struct CCursorClip::DeadzoneJumping::RegionInfo *result; // rax

  result = (struct CCursorClip::DeadzoneJumping::RegionInfo *)Win32AllocPoolWithQuotaZInitImpl(
                                                                (int)this,
                                                                0x28uLL,
                                                                0x447A636Au);
  if ( result )
  {
    *(_OWORD *)((char *)result + 8) = *(_OWORD *)a2;
    *((_WORD *)result + 16) = *((_WORD *)a2 + 10);
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 3) = 0LL;
  }
  return result;
}
