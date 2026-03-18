/*
 * XREFs of ExpRemoveTagForBigPages @ 0x14029AE60
 * Callers:
 *     ExpSizeHeapPool @ 0x14025ECFC (ExpSizeHeapPool.c)
 *     ExQueryPoolBlockSize @ 0x1406CBF90 (ExQueryPoolBlockSize.c)
 *     ExpCleanupBigTag @ 0x1406CC080 (ExpCleanupBigTag.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpRemoveTagForBigPages(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        ULONG_PTR *a7)
{
  unsigned int v9; // esi
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int v14; // r10d
  unsigned int v15; // edx
  char *v16; // rax
  unsigned int v17; // r8d
  ULONG_PTR v18; // rdx
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v9 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter3) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, BugCheckParameter3);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    _m_prefetchw((char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4);
    v12 = HIDWORD(stru_140EFEF90.Header.WaitListHead.Flink) & 0x7FFFFFFF;
    while ( 1 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange((_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1, v12 + 1, v12);
      if ( v13 == v12 )
        break;
      if ( v12 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire((char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4, CurrentIrql);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented((char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4, CurrentIrql);
  }
  v14 = 1;
  v15 = (LODWORD(stru_140EFEF90.SListFaultAddress) - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543
                                                                                                  * (BugCheckParameter2 >> 12)) >> 32));
  while ( 1 )
  {
    v16 = (char *)stru_140EFEF90.StackLimit + 32 * v15;
    if ( *(_QWORD *)v16 == BugCheckParameter2 )
      break;
    if ( (void *)++v15 >= stru_140EFEF90.SListFaultAddress )
    {
      if ( !v14 )
        goto LABEL_14;
      v15 = 0;
      v14 = 0;
    }
  }
  if ( !v16 )
LABEL_14:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v9, 0LL);
  v17 = *((_DWORD *)v16 + 3);
  *a4 = *((_DWORD *)v16 + 2);
  *a5 = (v17 >> 8) & 0xFFF;
  *a6 = *((_QWORD *)v16 + 2);
  if ( (v17 & 0x100) != 0 )
    v18 = BugCheckParameter2 ^ (__int64)stru_140FC01F0.WaitBlock[1].WaitListEntry.Blink ^ *((_QWORD *)v16 + 3);
  else
    v18 = -1LL;
  *a7 = v18;
  if ( a3 )
  {
    _InterlockedDecrement(&ExpPoolBigEntriesInUse);
    *((_QWORD *)v16 + 3) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v16);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    _InterlockedAnd((_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1, 0xBFFFFFFF);
    _InterlockedDecrement((_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
