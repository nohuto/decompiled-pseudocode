/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x14093D2D0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     ExCreateDpcEvent @ 0x1406D3AF0 (ExCreateDpcEvent.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSecurityDescriptor @ 0x140A60CA0 (SeReleaseSecurityDescriptor.c)
 */

__int64 __fastcall ObDeleteCapturedInsertInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *v7; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 result; // rax

  LOBYTE(a3) = 1;
  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a1 - 16);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 32);
      if ( v5 )
      {
        LOBYTE(v4) = *(_BYTE *)(v4 + 16);
        SeReleaseSecurityDescriptor(v5, v4, a3);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = *(_SLIST_ENTRY **)(a1 - 16);
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        result = (__int64)RtlpInterlockedPushEntrySList(&P->ListHead, v7);
      }
      else
      {
        ++P->FreeMisses;
        result = guard_dispatch_icall_no_overrides((__int64)v7, (__int64)v7);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
  return result;
}
