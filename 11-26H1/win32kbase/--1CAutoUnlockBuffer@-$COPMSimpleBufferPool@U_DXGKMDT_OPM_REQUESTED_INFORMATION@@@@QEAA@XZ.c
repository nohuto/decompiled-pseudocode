/*
 * XREFs of ??1CAutoUnlockBuffer@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x14017DA54
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1401F42F0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::CAutoUnlockBuffer::~CAutoUnlockBuffer(
        __int64 a1)
{
  PLOOKASIDE_LIST_EX *v2; // rcx
  void *v3; // rdx

  v2 = *(PLOOKASIDE_LIST_EX **)(a1 + 8);
  if ( v2 )
  {
    v3 = *(void **)a1;
    if ( v3 )
      ExFreeToLookasideListEx(*v2, v3);
  }
}
