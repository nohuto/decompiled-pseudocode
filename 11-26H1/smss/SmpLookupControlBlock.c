/*
 * XREFs of SmpLookupControlBlock @ 0x140007480
 * Callers:
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmpStopCsr @ 0x140007420 (SmpStopCsr.c)
 * Callees:
 *     SmpTreeLookupControlBlock @ 0x1400074D0 (SmpTreeLookupControlBlock.c)
 */

__int64 __fastcall SmpLookupControlBlock(unsigned int a1)
{
  __int64 v2; // rbx

  RtlAcquireSRWLockShared(&SmpControlLock);
  v2 = SmpTreeLookupControlBlock(SmpControlBlockRoot, a1);
  RtlReleaseSRWLockShared(&SmpControlLock);
  return v2;
}
