/*
 * XREFs of MiStoreModifiedWriteComplete @ 0x14020BAAC
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiStoreFreeWriteSupport @ 0x14020A1E8 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x14020A990 (MiStoreModifiedWriteDereference.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14070F954 (MiStoreLogWriteCompleteFailure.c)
 */

__int64 __fastcall MiStoreModifiedWriteComplete(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // r13
  __int64 v3; // rdx
  __int64 v4; // r15
  void *FirstArgument; // rcx
  ULONG_PTR v7; // rdi
  unsigned __int8 CurrentIrql; // si
  int v9; // ebx
  __int64 v10; // r8
  int v11; // r10d
  _DWORD *v12; // rax
  _DWORD *SubsectionFromPte; // rax
  int v14; // [rsp+50h] [rbp+8h] BYREF

  Next = ListEntry->Next;
  v3 = *((unsigned int *)&ListEntry->Next + 2);
  v4 = *((_QWORD *)&ListEntry->Next[3].Next + 1);
  if ( (int)v3 < 0 )
  {
    FirstArgument = stru_140E366D8.FirstArgument;
    if ( stru_140E366D8.FirstArgument )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument )
      {
        if ( (*((_BYTE *)stru_140E366D8.FirstArgument + 16) & 2) != 0 )
        {
          FirstArgument = (void *)*((_QWORD *)stru_140E366D8.FirstArgument + 3);
          if ( (void *)((unsigned __int8)FirstArgument & 2) == FirstArgument )
            MiStoreLogWriteCompleteFailure();
        }
      }
    }
    v7 = 48 * (__int64)ListEntry[5].Next - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = 2;
      LOBYTE(FirstArgument) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(FirstArgument, v3);
    }
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v9 = *(_DWORD *)(v7 + 32);
    v10 = 1024LL;
    if ( *(__int64 *)(v7 + 40) < 0 )
    {
      v3 = 0x400000000000400LL;
      if ( (*(_QWORD *)(v7 + 16) & 0x400000000000400LL) == 0x400 )
      {
        SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16), 0x400000000000400LL, 1024LL);
        if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
          KeBugCheckEx(0x1Au, 0x8840uLL, v7, 0LL, 1uLL);
      }
    }
    if ( *(__int64 *)(v7 + 40) < 0
      && (*(_DWORD *)(v7 + 16) & (unsigned int)v10) != 0
      && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
    {
      v12 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16), v3, v10);
      if ( (*(_DWORD *)(*(_QWORD *)v12 + 56LL) & 0x20) == 0 && (v12[38] & 1) == 0 )
        MiSetSubsectionModified(v12, 0LL);
    }
    v11 = 0x100000;
    if ( (v9 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v7)
      && (v9 & v11) == 0
      && (*(_DWORD *)(v7 + 16) & 8) != 0 )
    {
      *(_QWORD *)(v7 + 16) &= ~8uLL;
    }
    *(_DWORD *)(v7 + 32) = v11 | v9;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v3) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
      }
      __writecr8(CurrentIrql);
    }
    *(_DWORD *)(v4 + 1316) = 32;
  }
  MiStoreFreeWriteSupport(ListEntry, (_SLIST_HEADER *)v4);
  return MiStoreModifiedWriteDereference((__int64)Next);
}
