/*
 * XREFs of KeAllocateXStateContext @ 0x140468760
 * Callers:
 *     VfCtxInit @ 0x140C46BC4 (VfCtxInit.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KeAllocateXStateContext(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  _DWORD *Pool2; // rcx
  __int64 v8; // rcx
  _GENERAL_LOOKASIDE *L; // rsi

  v3 = 576;
  *(_BYTE *)(a1 + 12) = 0;
  if ( a3 >= 0x240 )
    v3 = a3;
  if ( v3 == MEMORY[0xFFFFF780000003E8] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[9].P;
    ++P->TotalAllocates;
    Pool2 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( Pool2
      || (++P->AllocateMisses,
          L = CurrentPrcb->PPLookasideList[9].L,
          ++L->TotalAllocates,
          (Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
      || (++L->AllocateMisses,
          (Pool2 = (_DWORD *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0LL) )
    {
      *Pool2 = CurrentPrcb->Number;
    }
    *(_BYTE *)(a1 + 12) |= 1u;
  }
  else
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x42uLL);
  }
  *(_QWORD *)(a1 + 24) = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v8 = *(_QWORD *)(a1 + 24) + 63LL;
  *(_DWORD *)(a1 + 8) = v3;
  v8 &= 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(a1 + 16) = v8;
  memset_0((void *)(v8 + 512), 0, 0x40uLL);
  return 0LL;
}
