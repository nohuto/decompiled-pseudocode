/*
 * XREFs of MiWaitForFreePage @ 0x1403D1DB4
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiReplenishCloneLeafPage @ 0x14030E9E0 (MiReplenishCloneLeafPage.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiGetSystemPage @ 0x140338B90 (MiGetSystemPage.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A2E0C (MiCopyOnWriteCheckConditions.c)
 *     MiConvertFaultStatus @ 0x1403A2F50 (MiConvertFaultStatus.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiAllocateTopLevelPage @ 0x140ABD7B0 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140AEAC6C (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF46EC (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiSufficientAvailablePages @ 0x14028EAB0 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     MiCanFlushMakeProgress @ 0x1403E0D04 (MiCanFlushMakeProgress.c)
 *     MiDemoteSlabEntries @ 0x140506A84 (MiDemoteSlabEntries.c)
 *     MiObtainFreePages @ 0x140531914 (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x140703B60 (MiNoPagesLastChance.c)
 *     VslReclaimPartitionPages @ 0x140792974 (VslReclaimPartitionPages.c)
 */

void __fastcall MiWaitForFreePage(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // r13d
  _DWORD *v5; // r14
  int v6; // r12d
  ULONG v7; // r15d
  PVOID *p_Object; // r14
  __int64 v9; // rbp
  volatile LONG *v10; // rcx
  unsigned int v11; // ebp
  unsigned int v12; // edi
  KIRQL v13; // di
  volatile LONG *v14; // rcx
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  __int64 v16; // [rsp+50h] [rbp-58h]
  int v17; // [rsp+B0h] [rbp+8h]
  int v18; // [rsp+B8h] [rbp+10h]
  LARGE_INTEGER Timeout; // [rsp+C0h] [rbp+18h] BYREF
  _DWORD *v20; // [rsp+C8h] [rbp+20h]

  Timeout.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v4 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 ? 34 : 50;
  v5 = (_DWORD *)((-(__int64)((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                + a1
                + 16616);
  v20 = v5;
  Object = v5;
  v6 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v16 = a1 + 22088;
  v7 = (v6 != 0) + 1;
LABEL_25:
  while ( 1 )
  {
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16576));
    if ( (unsigned int)MiSufficientAvailablePages(a1, v4) )
      break;
    v18 = v5[6];
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 22080) )
        break;
      v17 = *(_DWORD *)(a1 + 22112);
    }
    p_Object = &Object;
    v9 = v7;
    do
    {
      KeResetEvent((PRKEVENT)*p_Object++);
      --v9;
    }
    while ( v9 );
    v10 = (volatile LONG *)(a1 + 16576);
    if ( v13 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    else
      ExReleaseSpinLockExclusive(v10, v13);
    MiObtainFreePages(a1);
    if ( *(_QWORD *)(a1 + 504) )
      VslReclaimPartitionPages(*(_QWORD *)(a1 + 256));
    v5 = v20;
    v11 = 0;
    while ( 1 )
    {
      if ( !*(_QWORD *)(a1 + 23248) || (v12 = 1000, !(unsigned int)MiCanFlushMakeProgress(a1, 0LL, 1056LL)) )
        v12 = 100;
      Timeout.QuadPart = -10000LL * v12;
      if ( KeWaitForMultipleObjects(v7, &Object, WaitAny, WrFreePage, 0, 0, &Timeout, 0LL) != 258
        || v18 != v5[6]
        || v6 && v17 != *(_DWORD *)(a1 + 22112) )
      {
        break;
      }
      v11 += v12;
      MiDemoteSlabEntries(a1, 0LL);
      if ( v18 != v5[6] )
        break;
      if ( v11 >= (unsigned int)(MiNoPagesTimeout / -10000) )
      {
        MiNoPagesLastChance(a1, v4);
        goto LABEL_25;
      }
    }
  }
  v14 = (volatile LONG *)(a1 + 16576);
  if ( v13 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  else
    ExReleaseSpinLockExclusive(v14, v13);
}
