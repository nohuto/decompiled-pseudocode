/*
 * XREFs of CmpCleanupPathInfo @ 0x1408D4B60
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PSLIST_ENTRY __fastcall CmpCleanupPathInfo(__int64 a1)
{
  _SLIST_ENTRY *v1; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PSLIST_ENTRY result; // rax

  v1 = *(_SLIST_ENTRY **)(a1 + 160);
  if ( v1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth )
      return RtlpInterlockedPushEntrySList(&P->ListHead, v1);
    ++P->FreeMisses;
    P = CurrentPrcb->PPLookasideList[8].L;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth )
    {
      return RtlpInterlockedPushEntrySList(&P->ListHead, v1);
    }
    else
    {
      ++P->FreeMisses;
      return (PSLIST_ENTRY)guard_dispatch_icall_no_overrides((__int64)v1, (__int64)v1);
    }
  }
  return result;
}
