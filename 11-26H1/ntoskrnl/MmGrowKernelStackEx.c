/*
 * XREFs of MmGrowKernelStackEx @ 0x1403D4420
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140262F40 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     MmGrowKernelStack @ 0x1406F8470 (MmGrowKernelStack.c)
 *     KxSwitchKernelStackCallout @ 0x14072D6D0 (KxSwitchKernelStackCallout.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1403D4C70 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // r14d
  __int64 Blink_high; // rcx
  __int64 v8; // r13
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  _QWORD v13[4]; // [rsp+20h] [rbp-60h] BYREF
  int v14; // [rsp+40h] [rbp-40h]
  char v15; // [rsp+44h] [rbp-3Ch]
  struct _KTHREAD *v16; // [rsp+48h] [rbp-38h]
  int v17; // [rsp+50h] [rbp-30h]
  int v18; // [rsp+54h] [rbp-2Ch]
  __int64 v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h]

  memset_0(v13, 0, 0x58uLL);
  CurrentThread = KeGetCurrentThread();
  if ( (char *)CurrentThread->StackBase - (*((_QWORD *)CurrentThread->InitialStack + 1) & 0xFFFFFFFFFFFFFFFEuLL) < (void *)(unsigned int)KeKernelLargeStackSize )
    return 3221225659LL;
  v6 = 0;
  Blink_high = HIWORD(CurrentThread->Process[2].ProcessListEntry.Blink);
  v8 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    LOBYTE(Blink_high) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Blink_high, v4);
  }
  v10 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v11 < v10 )
  {
    if ( v11 < ((*((_QWORD *)CurrentThread->InitialStack + 1) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_140E34CE0;
      v6 = -1073741571;
    }
    else
    {
      v17 = MI_GET_NODE_FROM_VALID_PTE((((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
      v18 = -1;
      v13[0] = v8;
      v13[3] = ((__int64)(v10 - v11 - 8) >> 3) + 1;
      v13[1] = v11;
      v14 = 2;
      v16 = CurrentThread;
      v15 = 2;
      v21 = 0LL;
      v19 = 5LL;
      v20 = 1;
      if ( (unsigned int)MiAllocateKernelStackPages(v13) )
        CurrentThread->StackLimit = (void *volatile)((__int64)(v11 << 25) >> 16);
      else
        v6 = -1073741670;
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v6;
}
