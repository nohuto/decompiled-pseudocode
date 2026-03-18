/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1402C2A04
 * Callers:
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401BADEC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401F80B0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401F8310 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401F8BC0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1402C0A40 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryStatisticsInternal @ 0x1402C12E8 (DxgkQueryStatisticsInternal.c)
 *     DxgkQueryProcessOfferInfo @ 0x1402C3CA0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14033BBA0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkTrimProcessCommitment @ 0x14040B170 (DxgkTrimProcessCommitment.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1404144A0 (DxgkGetProcessSchedulingPriorityClass.c)
 * Callees:
 *     <none>
 */

DXGPROCESSMUTEXBYHANDLE *__fastcall DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
        DXGPROCESSMUTEXBYHANDLE *this,
        void *a2,
        int a3)
{
  DXGPROCESSMUTEXBYHANDLE *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 14) = 0;
  *((_BYTE *)this + 30) = 0;
  result = this;
  *((_DWORD *)this + 6) = a3;
  return result;
}
