/*
 * XREFs of MiImageVadHotPatchEligible @ 0x1408769B4
 * Callers:
 *     MiGetVadForHotPatchInProgress @ 0x1408763E8 (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     MmCommitHotPatchTable @ 0x14087AD88 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x14087B034 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 */

_BOOL8 __fastcall MiImageVadHotPatchEligible(__int64 a1)
{
  char VadFlags2; // al
  __int64 v2; // rcx
  __int16 v3; // dx
  _BOOL8 result; // rax

  VadFlags2 = MiReadVadFlags2(a1);
  result = 0;
  if ( (VadFlags2 & 0x20) != 0 )
  {
    if ( HIDWORD(stru_140E366D8.SListFaultAddress) )
    {
      if ( (VadFlags2 & 1) == 0 )
      {
        v3 = *(_WORD *)(*(_QWORD *)(***(_QWORD ***)(v2 + 80) + 56LL) + 48LL);
        if ( v3 == -31132 || v3 == 332 || v3 == -21916 )
          return 1;
      }
    }
  }
  return result;
}
