/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140262F40 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 *     KiSwitchKernelStackAndCallout @ 0x14072D640 (KiSwitchKernelStackAndCallout.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r13
  int v7; // edx
  struct _KTHREAD *CurrentThread; // r14
  int v9; // esi
  unsigned __int8 v10; // bl
  LARGE_INTEGER *v11; // r15
  int v12; // r12d
  char SameThreadTransientFlags; // al
  signed __int8 v14; // al
  signed __int8 v15; // tt
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // ecx
  __int64 IdealProcessor; // rax
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  char v22; // al
  unsigned __int64 CurrentStackPointer; // rax
  unsigned int v24; // eax
  unsigned int v25; // r15d
  unsigned __int8 v26; // al
  bool v27; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v30; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-39h] BYREF
  char *v32; // [rsp+40h] [rbp-31h] BYREF
  __int64 CurrentIrql; // [rsp+48h] [rbp-29h]
  int v34; // [rsp+50h] [rbp-21h] BYREF
  int v35; // [rsp+54h] [rbp-1Dh]
  __int64 v36; // [rsp+58h] [rbp-19h]
  struct _KTHREAD *v37; // [rsp+60h] [rbp-11h]
  _OWORD v38[5]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v41; // [rsp+E0h] [rbp+6Fh]
  int v42; // [rsp+E8h] [rbp+77h]

  v5 = a5;
  v6 = a3;
  v7 = 0;
  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = a4;
  v42 = 0;
  v10 = 0;
  HIDWORD(v36) = 0;
  v11 = 0LL;
  memset(v38, 0, 24);
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 )
  {
    v10 = 0;
    v11 = (LARGE_INTEGER *)&v30;
    if ( a5 )
      v10 = 16;
  }
  if ( (a4 & 8) != 0 && a5 )
    v10 = 16;
  v12 = 0;
  if ( a3 > (unsigned int)KeKernelStackSize )
  {
    v7 = 1;
    v10 |= 1u;
    v42 = 1;
    v12 = 1;
    if ( a5 && *(_BYTE *)(a5 + 4) )
      v12 = 5;
  }
  else
  {
    v9 = a4 | 4;
    v6 = 0LL;
  }
  if ( (v10 & 0xF0) == 0 )
  {
    v18 = v12 | 2;
    if ( (v9 & 2) != 0 )
      v18 = v12;
    if ( (v9 & 4) != 0 )
      v42 = v7 | 4;
    v35 = 5;
    v12 = v18 | 0x10;
    v37 = 0LL;
    IdealProcessor = CurrentThread->IdealProcessor;
    if ( (v9 & 4) == 0 )
      v12 = v18;
    v34 = v12;
    LODWORD(v36) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[IdealProcessor] + 192) + 138LL);
    if ( v9 < 0 )
      v34 = v12 | 0x40;
    else
      v37 = CurrentThread;
    MmCreateKernelStack(&v34);
    v17 = *(_QWORD *)&v38[0];
    v41 = *(_QWORD *)&v38[0];
    if ( *(_QWORD *)&v38[0] )
      goto LABEL_27;
  }
  if ( !v5 || (v10 & 1) != 0 && !*(_BYTE *)(v5 + 4) )
    return 3221225495LL;
  SameThreadTransientFlags = CurrentThread->SameThreadTransientFlags;
  if ( (SameThreadTransientFlags & 2) != 0 )
    v10 |= 4u;
  else
    CurrentThread->SameThreadTransientFlags = SameThreadTransientFlags | 2;
  if ( (v9 & 0x40000000) == 0 )
  {
    if ( KeWaitForSingleObject((PVOID)(v5 + 8), WrCalloutStack, 0, 0, v11) != 258 )
      goto LABEL_14;
LABEL_60:
    result = 3221227272LL;
    CurrentThread->SameThreadTransientFlags ^= (CurrentThread->SameThreadTransientFlags ^ (v10 >> 1)) & 2;
    return result;
  }
  _m_prefetchw((const void *)(v5 + 7));
  v14 = *(_BYTE *)(v5 + 7);
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange8((volatile signed __int8 *)(v5 + 7), v14 | 2, v14);
  }
  while ( v15 != v14 );
  if ( (v14 & 2) != 0 )
    goto LABEL_60;
LABEL_14:
  v16 = *(unsigned __int8 *)(v5 + 6);
  if ( (unsigned __int8)v16 >= *(_BYTE *)(v5 + 5) )
  {
    KeReleaseMutantEx((struct _KTHREAD *)(v5 + 8));
    return 3221225495LL;
  }
  v17 = *(_QWORD *)(v5 + 8 * v16 + 64);
  v10 |= 8u;
  v41 = v17;
  *(_BYTE *)(v5 + 6) = v16 + 1;
  if ( (v10 & 1) == 0 && *(_BYTE *)(v5 + 4) )
  {
    v6 = (unsigned int)KeMaximumKernelStackExpansionSize;
    LOBYTE(v12) = 5;
    v10 |= 1u;
  }
LABEL_27:
  v20 = (v17 - 80) & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)v20 = v17;
  if ( (v10 & 1) != 0 )
    v21 = (unsigned int)KeKernelLargeStackSize;
  else
    v21 = (unsigned int)KeKernelStackSize;
  *(_QWORD *)(((v17 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v17 - v21 + 1;
  *(_QWORD *)(((v17 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = CurrentThread->StackBase;
  *(_QWORD *)(((v17 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = CurrentThread->InitialStack;
  *(_QWORD *)(((v17 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
  *(_QWORD *)(((v17 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  *(_QWORD *)(((v17 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_QWORD *)(((v17 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  if ( (v12 & 1) != 0 )
  {
    v20 |= 1uLL;
    if ( (v12 & 4) != 0 )
      v20 |= 2uLL;
  }
  v22 = CurrentThread->SameThreadTransientFlags;
  if ( (v22 & 1) != 0 )
    v10 |= 2u;
  else
    CurrentThread->SameThreadTransientFlags = v22 | 1;
  v32 = 0LL;
  v31 = 0LL;
  LODWORD(a5) = 0;
  CurrentStackPointer = KeGetCurrentStackPointer();
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &a5, &v32, &v31);
  if ( (_DWORD)a5 == 10 )
  {
    __writegsbyte(0x88E6u, 1u);
    v24 = KiSwitchKernelStackAndCallout(a2, a1, v20, v6);
    __writegsbyte(0x88E6u, 0);
  }
  else
  {
    v24 = KiSwitchKernelStackAndCallout(a2, a1, v20, v6);
  }
  v25 = v24;
  if ( (v10 & 8) != 0 )
  {
    v27 = (*(_BYTE *)(v5 + 6))-- == 1;
    if ( v27 && (v10 & 4) == 0 )
      CurrentThread->SameThreadTransientFlags &= ~2u;
    if ( (v9 & 0x40000000) != 0 )
      _InterlockedAnd8((volatile signed __int8 *)(v5 + 7), 0xFDu);
    else
      KeReleaseMutantEx((struct _KTHREAD *)(v5 + 8));
  }
  else if ( v9 < 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    RtlpInterlockedPushEntrySList(&CurrentPrcb->KstackFreeList, (PSLIST_ENTRY)(v41 - 16));
    KiInsertQueueDpc((ULONG_PTR)&CurrentPrcb->KstackFreeDpc, 0);
  }
  else
  {
    v36 = 0LL;
    *(_OWORD *)((char *)v38 + 8) = 0LL;
    v34 = v42;
    v35 = 5;
    *(_QWORD *)&v38[0] = v41;
    v37 = CurrentThread;
    MmDeleteKernelStack(&v34);
  }
  if ( (v10 & 2) == 0 )
    CurrentThread->SameThreadTransientFlags &= ~1u;
  if ( KeGetCurrentIrql() != (_BYTE)CurrentIrql )
  {
    v26 = KeGetCurrentIrql();
    KeBugCheckEx(0xC8u, (((unsigned __int8)CurrentIrql | ((unsigned __int64)v26 << 8)) << 8) | 2, a1, a2, 0LL);
  }
  return v25;
}
