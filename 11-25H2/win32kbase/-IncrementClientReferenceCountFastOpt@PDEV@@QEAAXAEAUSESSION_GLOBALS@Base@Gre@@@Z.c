/*
 * XREFs of ?IncrementClientReferenceCountFastOpt@PDEV@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3DB0
 * Callers:
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x14004E400 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?vReferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3F70 (-vReferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019500 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C6F44 (-TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

void __fastcall PDEV::IncrementClientReferenceCountFastOpt(PDEV *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  ++*((_DWORD *)this + 2);
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    TrackObjectReferenceIncrementFast(a2, 1LL, *((_QWORD *)this + 442));
  else
    TrackObjectReferenceIncrement(1LL, *((_QWORD *)this + 442));
}
