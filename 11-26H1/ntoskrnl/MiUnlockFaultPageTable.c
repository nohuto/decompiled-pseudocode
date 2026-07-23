/*
 * XREFs of MiUnlockFaultPageTable @ 0x1402CD850
 * Callers:
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 *     MiLockAndConfirmFaultClusterDescriptor @ 0x1403A14FC (MiLockAndConfirmFaultClusterDescriptor.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockFaultPageTable(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  volatile signed __int32 *v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1[2];
  v3 = *a1;
  if ( v1 )
  {
    if ( *((_WORD *)a1 + 5) )
    {
      v4 = *((unsigned __int16 *)a1 + 4);
      v5 = *((_BYTE *)a1 + 13) & 2;
      v6 = (v4 << 12) + (v1 << 25 >> 16 << 25 >> 16);
      if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v7 = v5 | 5;
      }
      else
      {
        v7 = v5 | 4;
        if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 )
          v7 = v5;
      }
      MiAddWorkingSetEntries(v3, v6, *((unsigned __int16 *)a1 + 5), v7);
      *((_WORD *)a1 + 5) = 0;
    }
    v8 = a1[2];
    if ( v8 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
        || v8 < 0xFFFFF6FB7DBED000uLL
        || v8 > 0xFFFFF6FB7DBEDFFFuLL
        || (v12 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v16 = 2 * (unsigned int)((__int64)(v8 + 0x90482413000LL) >> 3);
          _InterlockedAnd(
            (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4 * (v16 >> 5) + 4],
            ~(2 << (v16 & 0x1F)) & ~(1 << (v16 & 0x1F)));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v8, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        v13 = (v8 >> 3) & 0x1FF;
        v14 = *(_DWORD *)(v12 + 4 * v13);
        v15 = (volatile signed __int32 *)(v12 + 4 * v13);
        if ( (v14 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v15, 0xBFFFFFFF);
            _InterlockedDecrement(v15);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v15, retaddr);
          }
        }
        else
        {
          if ( v14 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v15, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v15 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
        }
      }
      goto LABEL_13;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v10 )
    {
      if ( v10 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        goto LABEL_13;
      }
      v11 = 3LL;
      if ( v10 == 5 )
        v11 = 0LL;
    }
    else
    {
      v11 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v11]);
LABEL_13:
    *((_BYTE *)a1 + 13) |= 4u;
    a1[2] = 0LL;
  }
}
