/*
 * XREFs of ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x180062AE8
 * Callers:
 *     ??1SaDeviceParams@@QEAA@XZ @ 0x180013C30 (--1SaDeviceParams@@QEAA@XZ.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180046420 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800628AC (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x180062ADC (--1-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ.c)
 *     ?Move_Resource_From_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800FE7F0 (-Move_Resource_From_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z.c)
 *     ?Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800FE870 (-Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z.c)
 * Callees:
 *     ??1CResourcePriorityTracker@@QEAA@XZ @ 0x180062B30 (--1CResourcePriorityTracker@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<CResourcePriorityTracker>::Free(CResourcePriorityTracker **a1)
{
  CResourcePriorityTracker *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CResourcePriorityTracker::~CResourcePriorityTracker(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x40);
  }
  *a1 = 0LL;
}
