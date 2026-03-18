/*
 * XREFs of ExpStampBigPoolEntry @ 0x14029BD80
 * Callers:
 *     ExReturnPoolQuota @ 0x140264B30 (ExReturnPoolQuota.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140C109D0 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExpStampBigPoolEntry(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  unsigned int v7; // esi
  unsigned __int8 CurrentIrql; // di
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  int v12; // r10d
  unsigned int v13; // edx
  char *v14; // rax
  ULONG_PTR v15; // rsi
  ULONG_PTR v16; // rbx
  __int64 v17; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v7 = BugCheckParameter3;
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
    v10 = HIDWORD(stru_140EFEF90.Header.WaitListHead.Flink) & 0x7FFFFFFF;
    while ( 1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((_DWORD *)&stru_140EFEF90.Header.WaitListHead.Flink + 1, v10 + 1, v10);
      if ( v11 == v10 )
        break;
      if ( v10 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(
          (signed __int32 *)&stru_140EFEF90.Header.WaitListHead.Flink + 1,
          CurrentIrql,
          a3);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented((char *)&stru_140EFEF90.Header.WaitListHead.Flink + 4, CurrentIrql);
  }
  v12 = 1;
  v13 = (LODWORD(stru_140EFEF90.SListFaultAddress) - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543
                                                                                                  * (BugCheckParameter2 >> 12)) >> 32));
  while ( 1 )
  {
    v14 = (char *)stru_140EFEF90.StackLimit + 32 * v13;
    if ( *(_QWORD *)v14 == BugCheckParameter2 )
      break;
    if ( (void *)++v13 >= stru_140EFEF90.SListFaultAddress )
    {
      if ( !v12 )
        goto LABEL_14;
      v13 = 0;
      v12 = 0;
    }
  }
  if ( !v14 )
LABEL_14:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v7, 0LL);
  if ( (*((_DWORD *)v14 + 3) & 0x100) != 0 )
  {
    v15 = BugCheckParameter2 ^ (__int64)stru_140FC01F0.WaitBlock[1].WaitListEntry.Blink ^ *((_QWORD *)v14 + 3);
    v16 = (ULONG_PTR)stru_140FC01F0.WaitBlock[1].WaitListEntry.Blink ^ BugCheckParameter2;
    *a5 = *((_DWORD *)v14 + 2);
    v17 = *((_QWORD *)v14 + 2);
    *((_QWORD *)v14 + 3) = a3 ^ v16;
    *a4 = v17;
  }
  else
  {
    v15 = -1LL;
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
  __writecr8(CurrentIrql);
  return v15;
}
