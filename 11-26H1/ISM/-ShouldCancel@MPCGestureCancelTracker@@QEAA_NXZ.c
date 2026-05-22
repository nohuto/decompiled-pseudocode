/*
 * XREFs of ?ShouldCancel@MPCGestureCancelTracker@@QEAA_NXZ @ 0x1801C9BB8
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C4F4C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C648C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCGestureCancelTracker::ShouldCancel(MPCGestureCancelTracker *this)
{
  if ( *((_BYTE *)this + 17) )
    return *((_BYTE *)this + 16);
  else
    return 0;
}
