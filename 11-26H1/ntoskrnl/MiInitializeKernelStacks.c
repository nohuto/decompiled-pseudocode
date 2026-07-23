/*
 * XREFs of MiInitializeKernelStacks @ 0x140D02980
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MiInitializeDynamicRegion @ 0x140CFFB44 (MiInitializeDynamicRegion.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 *     MiInitializePteInfo @ 0x140D05208 (MiInitializePteInfo.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // esi
  ULONG64 v5; // rax
  struct _KPRCB *CurrentPrcb; // r8
  ULONG64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  unsigned __int64 QpcTimeStamp; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = (((v1 - (unsigned int)KeKernelStackSize) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v2, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v3, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMarkBootGuardPage(v3 - 8);
  MiMarkBootGuardPage(v2 - 8);
  v4 = 13;
  byte_140E34CE4 = (unsigned int)KeKernelStackSize >> 12;
  v5 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = v5;
  v8 = __rdtsc();
  v9 = (v7 << 32) ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ (((v7 >> 28) ^ v8) >> 4);
  v10 = (unsigned __int64)(unsigned int)ExGenRandom(0, (unsigned __int64)HIDWORD(v8) << 32) << 32;
  v12 = v9 ^ (v10 | (unsigned int)ExGenRandom(0, v11));
  if ( !v12 )
    v12 = 1LL;
  v13 = 0LL;
  qword_140E34D20 = v12;
  v14 = qword_140E34B58 + 216LL * (unsigned __int16)KeNumberNodes;
  v15 = 10LL;
  while ( (unsigned int)v13 < 2 )
  {
    v16 = 2 * v15;
    v17 = qword_140E37CF0[v16 + 1];
    v18 = qword_140E37CF0[v16];
    if ( !(unsigned int)MiInitializeDynamicRegion(v4)
      || !(unsigned int)MiInitializePteInfo((unsigned int)&unk_140E34C20 + 96 * v13, v4, 0, 5, v18, v17, 1, v14) )
    {
      return 0LL;
    }
    v13 = (unsigned int)(v13 + 1);
    v15 = 15LL;
    v4 = 15;
    v14 += 72LL * (unsigned __int16)KeNumberNodes;
  }
  return 1LL;
}
