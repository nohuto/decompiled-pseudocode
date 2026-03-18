/*
 * XREFs of HalpIommuReportIommuFault @ 0x1405A02C0
 * Callers:
 *     IvtIommuFaultLogWorkerRoutine @ 0x1405A7510 (IvtIommuFaultLogWorkerRoutine.c)
 *     HsaIommuEventLogWorkerRoutine @ 0x1405A9FC0 (HsaIommuEventLogWorkerRoutine.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HalpGetCpuInfo @ 0x1404C55D0 (HalpGetCpuInfo.c)
 *     HalpIommuTraceFault @ 0x140502F70 (HalpIommuTraceFault.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpIommuMatchFaultDevice @ 0x1405A0268 (HalpIommuMatchFaultDevice.c)
 */

void __fastcall HalpIommuReportIommuFault(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  char *SListFaultAddress; // rdi
  int StackBase; // ebx
  bool matched; // r15
  ULONG_PTR BugCheckParameter4; // r13
  ULONG_PTR v9; // r12
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // r8
  struct _KTHREAD *i; // r11
  __int64 v13; // rdx
  unsigned int *v14; // r9
  struct _KTHREAD **v15; // r11
  unsigned __int8 v16; // si
  volatile LONG *v17; // rcx
  __int64 v18; // r8
  unsigned __int64 j; // r11
  unsigned __int64 *v20; // r11
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+10h]

  BugCheckParameter2 = a2;
  SListFaultAddress = 0LL;
  if ( HalpHvIommu )
  {
    StackBase = (int)HalpDeviceBlockUnblockPushLock.StackBase;
  }
  else
  {
    StackBase = 0;
    LOBYTE(v21) = 0;
    if ( HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&v21) )
      StackBase = (_BYTE)v21 == 1;
  }
  matched = 0;
  BugCheckParameter4 = *(unsigned int *)(a3 + 28);
  v9 = *(_QWORD *)(a3 + 16);
  v21 = *(unsigned int *)(a3 + 40);
  if ( a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
    for ( i = (struct _KTHREAD *)HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink;
          i != (struct _KTHREAD *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink;
          i = *v15 )
    {
      SListFaultAddress = (char *)i->SListFaultAddress;
      if ( HalpHvIommu )
      {
        v13 = *((_QWORD *)SListFaultAddress + 4);
        v14 = 0LL;
      }
      else
      {
        v14 = (unsigned int *)*((_QWORD *)SListFaultAddress + 6);
        v13 = 0LL;
      }
      matched = HalpIommuMatchFaultDevice(a1, v13, v11, v14);
      if ( matched )
        break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( matched )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v16, 15);
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)SListFaultAddress + 104) )
        goto LABEL_46;
      if ( *((_DWORD *)SListFaultAddress + 103) == 1 )
        StackBase = 2;
      if ( *((_QWORD *)SListFaultAddress + 12) )
      {
        StackBase = 2;
        if ( !SListFaultAddress[420] && _InterlockedExchange((volatile __int32 *)SListFaultAddress + 4, 2) != 1 )
        {
          *((_OWORD *)SListFaultAddress + 7) = *(_OWORD *)a3;
          *((_OWORD *)SListFaultAddress + 8) = *(_OWORD *)(a3 + 16);
          *((_OWORD *)SListFaultAddress + 9) = *(_OWORD *)(a3 + 32);
          *((_QWORD *)SListFaultAddress + 20) = *(_QWORD *)(a3 + 48);
          SListFaultAddress[420] = KiInsertQueueDpc((ULONG_PTR)(SListFaultAddress + 168), 0LL, 0LL, 0LL, 0);
        }
      }
      v17 = (volatile LONG *)(SListFaultAddress + 416);
LABEL_45:
      ExReleaseSpinLockExclusiveFromDpcLevel(v17);
LABEL_46:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      __writecr8(v16);
      goto LABEL_49;
    }
  }
  if ( StackBase )
    goto LABEL_50;
  if ( a1 )
  {
    v16 = KeGetCurrentIrql();
    if ( v16 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 15;
      KiRaiseIrqlProcessIrqlFlags(v16, a2);
    }
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuFaultIgnoreListSpinLock) )
      goto LABEL_46;
    for ( j = HalpDeviceBlockUnblockPushLock.QuantumTarget;
          (unsigned __int64 *)j != &HalpDeviceBlockUnblockPushLock.QuantumTarget;
          j = *v20 )
    {
      if ( HalpIommuMatchFaultDevice(a1, *(_QWORD *)(j + 24), v18, *(unsigned int **)(j + 32)) )
      {
        StackBase = 2;
        break;
      }
    }
    v17 = &HalpIommuFaultIgnoreListSpinLock;
    goto LABEL_45;
  }
LABEL_49:
  if ( !StackBase )
  {
    if ( matched )
      KeBugCheckEx(0xE6u, 0x27uLL, *((_QWORD *)SListFaultAddress + 1), v9, BugCheckParameter4);
    KeBugCheckEx(0xE6u, 0x28uLL, BugCheckParameter2, v9, BugCheckParameter4);
  }
LABEL_50:
  if ( StackBase == 1 )
    HalpIommuTraceFault(BugCheckParameter2, v9, BugCheckParameter4, v21);
}
