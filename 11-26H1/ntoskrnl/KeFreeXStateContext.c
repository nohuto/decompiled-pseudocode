/*
 * XREFs of KeFreeXStateContext @ 0x1403D6324
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x1403D60D8 (KeRestoreExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x140C46BC4 (VfCtxInit.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeXStateContext(__int64 a1)
{
  _SLIST_ENTRY *v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( a1 )
  {
    v1 = *(_SLIST_ENTRY **)(a1 + 24);
    if ( v1 )
    {
      if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[9].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses,
              P = CurrentPrcb->PPLookasideList[9].L,
              ++P->TotalFrees,
              LOWORD(P->ListHead.Alignment) < P->Depth) )
        {
          RtlpInterlockedPushEntrySList(&P->ListHead, v1);
        }
        else
        {
          ++P->FreeMisses;
          guard_dispatch_icall_no_overrides(v1, CurrentPrcb);
        }
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x76615358u);
      }
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
    }
  }
}
