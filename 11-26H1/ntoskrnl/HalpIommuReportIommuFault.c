/*
 * XREFs of HalpIommuReportIommuFault @ 0x1405A2AB0
 * Callers:
 *     IvtIommuFaultLogWorkerRoutine @ 0x1405A9D20 (IvtIommuFaultLogWorkerRoutine.c)
 *     HsaIommuEventLogWorkerRoutine @ 0x1405AC7D0 (HsaIommuEventLogWorkerRoutine.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HalpGetCpuInfo @ 0x1404BEF80 (HalpGetCpuInfo.c)
 *     HalpIommuTraceFault @ 0x1404FC840 (HalpIommuTraceFault.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     Feature_IommuStage1FaultSuppresion__private_IsEnabledDeviceUsageNoInline @ 0x140589DB4 (Feature_IommuStage1FaultSuppresion__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuMatchFaultDevice @ 0x1405A2A58 (HalpIommuMatchFaultDevice.c)
 */

void __fastcall HalpIommuReportIommuFault(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  char *SListFaultAddress; // rdi
  int StackLimit_high; // ebx
  bool matched; // bp
  ULONG_PTR BugCheckParameter4; // r13
  ULONG_PTR v9; // r12
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // r8
  struct _KTHREAD *i; // r11
  __int64 v13; // rdx
  unsigned int *v14; // r9
  struct _KTHREAD **v15; // r11
  unsigned __int8 v16; // si
  int IsEnabledDeviceUsageNoInline; // eax
  int v18; // ecx
  volatile LONG *v19; // rcx
  __int64 v20; // r8
  unsigned __int64 j; // r11
  unsigned __int64 *v22; // r11
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+10h]

  BugCheckParameter2 = a2;
  SListFaultAddress = 0LL;
  if ( HalpHvIommu )
  {
    StackLimit_high = HIDWORD(HalpDeviceBlockUnblockPushLock.StackLimit);
  }
  else
  {
    StackLimit_high = 0;
    LOBYTE(v23) = 0;
    if ( HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&v23) )
      StackLimit_high = (_BYTE)v23 == 1;
  }
  matched = 0;
  BugCheckParameter4 = *(unsigned int *)(a3 + 28);
  v9 = *(_QWORD *)(a3 + 16);
  v23 = *(unsigned int *)(a3 + 40);
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
        goto LABEL_52;
      IsEnabledDeviceUsageNoInline = Feature_IommuStage1FaultSuppresion__private_IsEnabledDeviceUsageNoInline();
      v18 = *((_DWORD *)SListFaultAddress + 103);
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( v18 == 1 || v18 == 2 && *(_BYTE *)(a3 + 4) )
          StackLimit_high = 2;
      }
      else if ( v18 == 1 )
      {
        StackLimit_high = 2;
      }
      if ( *((_QWORD *)SListFaultAddress + 12) )
      {
        StackLimit_high = 2;
        if ( !SListFaultAddress[420] && _InterlockedExchange((volatile __int32 *)SListFaultAddress + 4, 2) != 1 )
        {
          *((_OWORD *)SListFaultAddress + 7) = *(_OWORD *)a3;
          *((_OWORD *)SListFaultAddress + 8) = *(_OWORD *)(a3 + 16);
          *((_OWORD *)SListFaultAddress + 9) = *(_OWORD *)(a3 + 32);
          *((_QWORD *)SListFaultAddress + 20) = *(_QWORD *)(a3 + 48);
          SListFaultAddress[420] = KiInsertQueueDpc((ULONG_PTR)(SListFaultAddress + 168), 0LL, 0LL, 0LL, 0);
        }
      }
      v19 = (volatile LONG *)(SListFaultAddress + 416);
LABEL_51:
      ExReleaseSpinLockExclusiveFromDpcLevel(v19);
LABEL_52:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      __writecr8(v16);
      goto LABEL_55;
    }
  }
  if ( StackLimit_high )
    goto LABEL_56;
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
      goto LABEL_52;
    for ( j = HalpDeviceBlockUnblockPushLock.QuantumTarget;
          (unsigned __int64 *)j != &HalpDeviceBlockUnblockPushLock.QuantumTarget;
          j = *v22 )
    {
      if ( HalpIommuMatchFaultDevice(a1, *(_QWORD *)(j + 24), v20, *(unsigned int **)(j + 32)) )
      {
        StackLimit_high = 2;
        break;
      }
    }
    v19 = &HalpIommuFaultIgnoreListSpinLock;
    goto LABEL_51;
  }
LABEL_55:
  if ( !StackLimit_high )
  {
    if ( !matched )
      KeBugCheckEx(0xE6u, 0x28uLL, BugCheckParameter2, v9, BugCheckParameter4);
    KeBugCheckEx(0xE6u, 0x27uLL, *((_QWORD *)SListFaultAddress + 1), v9, BugCheckParameter4);
  }
LABEL_56:
  if ( StackLimit_high == 1 )
    HalpIommuTraceFault(BugCheckParameter2, v9, BugCheckParameter4, v23);
}
