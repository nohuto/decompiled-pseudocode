/*
 * XREFs of ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x14006D8A4
 * Callers:
 *     ??1COPM@@QEAA@XZ @ 0x14006D858 (--1COPM@@QEAA@XZ.c)
 * Callees:
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x140083440 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 */

void __fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(
        OPM **a1)
{
  OPM *v2; // rcx
  void *v3; // rdx

  v2 = *a1;
  if ( v2 )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)v2);
    OPM::OPMFreeMemory(*a1, v3);
    *a1 = 0LL;
  }
}
