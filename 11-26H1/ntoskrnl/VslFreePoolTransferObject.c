/*
 * XREFs of VslFreePoolTransferObject @ 0x14040ED2C
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     VslFinishSecureImageValidation @ 0x14040EC30 (VslFinishSecureImageValidation.c)
 * Callees:
 *     VslpUnlockPagesForTransfer @ 0x140410B74 (VslpUnlockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFreePoolTransferObject(__int64 *P, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi

  v3 = *P;
  v4 = *(_QWORD *)(v3 + 32) + *(unsigned int *)(v3 + 44);
  if ( a2 )
    *a2 = *(unsigned int *)(v3 + 40);
  VslpUnlockPagesForTransfer(P);
  ExFreePoolWithTag(P, 0);
  return v4;
}
