/*
 * XREFs of CmpFreePostBlock @ 0x1408D1020
 * Callers:
 *     CmpPostApcRunDown @ 0x140850FE0 (CmpPostApcRunDown.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpPostNotify @ 0x1408CAEE0 (CmpPostNotify.c)
 *     CmpFreeSubordinatePost @ 0x1408D08C0 (CmpFreeSubordinatePost.c)
 *     CmpSignalDeferredPosts @ 0x1408D0CA0 (CmpSignalDeferredPosts.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x14097AF04 (CmpNotifyChangeKey.c)
 *     CmNotifyRunDown @ 0x140ABE29C (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x140AE45C0 (CmpPostApc.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140265670 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
