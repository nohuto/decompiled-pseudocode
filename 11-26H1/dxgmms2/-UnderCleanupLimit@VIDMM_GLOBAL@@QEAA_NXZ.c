/*
 * XREFs of ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x14010E940
 * Callers:
 *     ?ProcessOfferLists@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010E378 (-ProcessOfferLists@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ProcessSystemMemoryOfferList @ 0x14010E534 (ProcessSystemMemoryOfferList.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x14010E890 (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::UnderCleanupLimit(VIDMM_GLOBAL *this)
{
  if ( *(_BYTE *)(*(_QWORD *)this + 213LL) == 6 || *((_DWORD *)this + 1746) )
    return 1;
  if ( *((_QWORD *)this + 889) >= (unsigned __int64)qword_14008A4D0 )
    return 0;
  return *((_DWORD *)this + 1780) < (unsigned int)dword_14008A4D8;
}
