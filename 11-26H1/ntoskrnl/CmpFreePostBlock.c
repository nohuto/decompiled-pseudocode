/*
 * XREFs of CmpFreePostBlock @ 0x1408D75E0
 * Callers:
 *     CmpPostApcRunDown @ 0x1408572F0 (CmpPostApcRunDown.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpPostNotify @ 0x1408D1490 (CmpPostNotify.c)
 *     CmpFreeSubordinatePost @ 0x1408D6E80 (CmpFreeSubordinatePost.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x14093CF14 (CmpNotifyChangeKey.c)
 *     CmNotifyRunDown @ 0x14094BC20 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x140AE20D0 (CmpPostApc.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreePostBlock(PVOID P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 6);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*((PVOID *)P + 6), 0);
  }
  if ( (*((_DWORD *)P + 14) & 0x10000) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 8), 0);
  ExFreePoolWithTag(P, 0);
}
