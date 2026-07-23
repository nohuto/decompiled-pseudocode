/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x1404C18CC
 * Callers:
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiReplaceTransitionPage @ 0x1402931E8 (MiReplaceTransitionPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiUseSlabAllocator @ 0x140375BA4 (MiUseSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14038C61C (MiCheckSlabPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  _DWORD *SubsectionFromPte; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbp
  ULONG_PTR v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 result; // rax
  int v14; // ebx
  unsigned int v15; // eax
  __int64 SlabPage; // rax
  unsigned int PfnSlabType; // eax
  __int64 v18; // rax
  unsigned __int64 DemandZeroPte; // rax
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = 0;
  v1 = 48 * a1;
  v2 = 48 * a1 - 0x220000000000LL;
  SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v2 + 16));
  v4 = 0LL;
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 60LL) & 0x3FF));
  v7 = MiPageToNode(v6);
  if ( (unsigned int)MiUseSlabAllocator(v5, SubsectionFromPte, *(_QWORD *)(v2 + 16), v7, &v20) )
  {
    if ( (*(_QWORD *)(v2 + 40) & 0x20000000000000LL) == 0 )
    {
      v14 = v20;
      if ( v20 <= 4 && ((unsigned int)MiGetPfnSlabType(v2) == 9 || !(unsigned int)MiCheckSlabPage(v2, v14, 1)) )
      {
        v15 = MI_PAGE_TO_FULL_COLOR(v1 / 48);
        SlabPage = MiGetSlabPage(v5, v14, v15, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0x20000u);
        if ( SlabPage != -1 )
          v4 = 48 * SlabPage - 0x220000000000LL;
      }
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 2;
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9, v8);
  }
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  MiRemoveLockedPageChargeAndDecRef(v2);
  if ( v4 )
  {
    if ( !(unsigned __int16)*(_DWORD *)(v2 + 32)
      && *(int *)(v2 + 32) >= 0
      && (unsigned __int8)((*(_BYTE *)(v2 + 34) & 7) - 2) <= 1u
      && (unsigned int)MiGetPfnSlabType(v4) != 9 )
    {
      PfnSlabType = MiGetPfnSlabType(v2);
      if ( (unsigned int)MiReplaceTransitionPage(v2, v4, PfnSlabType, 0) )
      {
        *(_QWORD *)(v2 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v18 = *(_QWORD *)(v2 + 16);
        if ( v18 )
          DemandZeroPte = v18 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          DemandZeroPte = MiMakeDemandZeroPte(4);
        *(_QWORD *)(v2 + 16) = DemandZeroPte;
        v4 = v2;
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v4 )
    MiReleaseFreshPageAtDpc(v4, v11, v12);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
