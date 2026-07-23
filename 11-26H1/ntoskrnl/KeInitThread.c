/*
 * XREFs of KeInitThread @ 0x140C0D634
 * Callers:
 *     KiAllocatePrcbThread @ 0x1405EECFC (KiAllocatePrcbThread.c)
 *     KiInitializeAndStartInitialThread @ 0x1405F921C (KiInitializeAndStartInitialThread.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 * Callees:
 *     KiAllocateXStateStack @ 0x1403D3C80 (KiAllocateXStateStack.c)
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 *     KiInitializeContextThread @ 0x1403D7E1C (KiInitializeContextThread.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     KiAbInitializeThreadState @ 0x140491674 (KiAbInitializeThreadState.c)
 *     KeCopyXfdMaskToTeb @ 0x1404E3478 (KeCopyXfdMaskToTeb.c)
 *     KeGetIdealNodeNumberProcess @ 0x1404E9DE4 (KeGetIdealNodeNumberProcess.c)
 *     KiInitializeKThreadExtension @ 0x1405232F0 (KiInitializeKThreadExtension.c)
 *     KiDeleteXStateStack @ 0x1405EEF34 (KiDeleteXStateStack.c)
 *     KiDeleteKernelShadowStack @ 0x140A7BD54 (KiDeleteKernelShadowStack.c)
 *     KiCreateKernelShadowStack @ 0x140A90E48 (KiCreateKernelShadowStack.c)
 */

__int64 __fastcall KeInitThread(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // r12
  unsigned int v8; // edx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int16 IdealNodeNumberProcess; // r13
  __int64 v13; // r10
  __int64 v14; // rdx
  int KernelStack; // ebx
  struct _KTHREAD *v16; // rdx
  bool v17; // al
  int v19; // edx
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // rax
  __int128 v23; // [rsp+50h] [rbp-88h] BYREF
  __int64 v24; // [rsp+60h] [rbp-78h]
  int v25; // [rsp+68h] [rbp-70h] BYREF
  int v26; // [rsp+6Ch] [rbp-6Ch]
  __int64 v27; // [rsp+70h] [rbp-68h]
  __int64 v28; // [rsp+78h] [rbp-60h]
  _OWORD v29[5]; // [rsp+80h] [rbp-58h] BYREF
  char v30; // [rsp+E8h] [rbp+10h]
  char v31; // [rsp+F0h] [rbp+18h]

  *(_QWORD *)&v23 = 0LL;
  v31 = 0;
  v4 = 5;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 784) = a1 + 776;
  *(_QWORD *)(a1 + 776) = a1 + 776;
  v5 = (__int64 *)(a1 + 344);
  v6 = 4LL;
  do
  {
    *v5 = a1;
    v5 += 6;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 120) ^ ((unsigned __int8)*(_DWORD *)(a1 + 120) ^ (unsigned __int8)(4 * *(_DWORD *)(*(_QWORD *)(a2 + 48) + 136LL))) & 4 | 0x20040;
  *(_DWORD *)(a1 + 84) = 16 * KiShortExecutionCycles;
  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 544) = *(_QWORD *)(a2 + 48);
  v7 = (unsigned int *)(a1 + 116);
  v24 = a1 + 116;
  v8 = *(_DWORD *)(a1 + 116) & 0xFFFFBFFF;
  if ( (*(_BYTE *)(a2 + 60) & 2) == 0 )
    v8 = *(_DWORD *)(a1 + 116) | 0x4000;
  *v7 = v8;
  *(_BYTE *)(a1 + 390) = ((*(_DWORD *)(a2 + 60) & 2) != 0) + 1;
  if ( !*(_QWORD *)(a2 + 32) )
  {
    if ( (*(_DWORD *)(a2 + 60) & 0x10) != 0 )
      v19 = v8 | 0x100;
    else
      v19 = v8 | 0x400;
    *v7 = v19;
  }
  KeInitializeApc(
    a1 + 648,
    a1,
    0,
    (__int64)xHalTimerWatchdogStop,
    (__int64)xHalTimerWatchdogStop,
    (__int64)KiSchedulerApc,
    0,
    a1);
  KeInitializeEvent((PRKEVENT)(a1 + 736), NotificationEvent, 1u);
  KeInitializeTimer((PKTIMER)(a1 + 256));
  *(_QWORD *)(a1 + 304) = KiWaitNever ^ __ROR8__(
                                          (a1 + 256) ^ _byteswap_uint64((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink),
                                          KiWaitNever);
  v9 = (_QWORD *)(a1 + 464);
  *(_DWORD *)(a1 + 480) = 16909313;
  v10 = a1 + 264;
  v11 = *(_QWORD *)(a1 + 264);
  if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
    __fastfail(3u);
  *v9 = v11;
  *(_QWORD *)(a1 + 472) = v10;
  *(_QWORD *)(v11 + 8) = v9;
  *(_QWORD *)v10 = v9;
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 40);
  KiInitializeKThreadExtension((_QWORD *)a1, *(_QWORD *)(a2 + 32) != 0LL, *(_QWORD *)(a2 + 72));
  *(_BYTE *)a1 = 6;
  if ( *(_DWORD *)(a2 + 56) )
    IdealNodeNumberProcess = *(_WORD *)(a2 + 56) - 1;
  else
    IdealNodeNumberProcess = KeGetIdealNodeNumberProcess(*(_QWORD *)(a2 + 48));
  v13 = 0LL;
  if ( (*(_DWORD *)(a2 + 60) & 2) == 0 )
    v13 = a1;
  *((_QWORD *)&v23 + 1) = v13;
  v30 = 0;
  v14 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    memset(v29, 0, 24);
    v25 = 8;
    v26 = 5;
    v27 = IdealNodeNumberProcess;
    v28 = v13;
    KernelStack = MmCreateKernelStack((__int64)&v25);
    if ( KernelStack < 0 )
      goto LABEL_22;
    v14 = *(_QWORD *)&v29[0];
    v30 = 1;
    v13 = *((_QWORD *)&v23 + 1);
  }
  *(_QWORD *)(a1 + 40) = v14;
  *(_QWORD *)(a1 + 56) = v14;
  v16 = (struct _KTHREAD *)(v14 - (unsigned int)KeKernelStackSize);
  *(_QWORD *)(a1 + 48) = v16;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v20 = *v7;
    *v7 |= 0x400000u;
    v21 = *(_DWORD *)(a2 + 60);
    if ( (v21 & 1) == 0 )
    {
      if ( (v21 & 8) != 0 )
      {
        v4 = 2;
      }
      else if ( (v20 & 0x400) != 0 )
      {
        v4 = 1;
      }
      else
      {
        v4 = (v20 >> 8) & 1;
      }
      KernelStack = KiCreateKernelShadowStack(v13, v4, 0, IdealNodeNumberProcess, &v23);
      if ( KernelStack < 0 )
        goto LABEL_22;
      v31 = 1;
      *(_QWORD *)(a1 + 1032) = 0LL;
      *(_QWORD *)(a1 + 1040) = 8LL;
      v22 = v23;
      *(_QWORD *)(a1 + 1048) = v23;
      v16 = (struct _KTHREAD *)(v4 | *(_QWORD *)(a1 + 1056) & 0xFFFFFFFFFFFFFFF8uLL ^ (*(_QWORD *)(a1 + 1056) ^ (v22 - 12288)) & 0xFFFFFFFFFFFFF000uLL);
      *(_QWORD *)(a1 + 1056) = v16;
    }
  }
  KiAbInitializeThreadState((AutoBoost *)a1, v16);
  *(_QWORD *)(a1 + 880) = 1LL;
  *(_QWORD *)(a1 + 1008) = 1LL;
  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    *(_QWORD *)(a1 + 1064) = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(a2 + 64) & 0x40000;
    if ( (*v7 & 0x400) == 0 )
      KeCopyXfdMaskToTeb((_QWORD *)a1);
    v17 = *(_QWORD *)(a2 + 64) != 0LL;
  }
  else
  {
    v17 = 0;
  }
  if ( !v17 || (KernelStack = KiAllocateXStateStack(a1, IdealNodeNumberProcess), KernelStack >= 0) )
  {
    if ( (*(_DWORD *)(a2 + 60) & 4) == 0 )
      KiInitializeContextThread(a1, a2);
    *(_DWORD *)(a1 + 1100) = (*v7 & 0x400) == 0 ? 0xAAAAAAAA : 0;
    KeInitializeApc(a1 + 1824, a1, 0, (__int64)xHalTimerWatchdogStop, 0LL, (__int64)KiUpdateTebApc, 0, a1);
    KernelStack = 0;
  }
LABEL_22:
  if ( KernelStack < 0 )
  {
    if ( v30 )
    {
      v27 = 0LL;
      *(_OWORD *)((char *)v29 + 8) = 0LL;
      v25 = 2;
      v26 = 5;
      *(_QWORD *)&v29[0] = *(_QWORD *)(a1 + 56);
      v28 = a1;
      MmDeleteKernelStack(&v25);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    if ( (*v7 & 0x800000) != 0 )
      KiDeleteXStateStack(a1);
    if ( v31 )
    {
      KiDeleteKernelShadowStack(a1, *(_QWORD *)(a1 + 1048), v4, 0, *(_QWORD *)(a1 + 1032));
      *(_QWORD *)(a1 + 1032) = 0LL;
    }
  }
  return (unsigned int)KernelStack;
}
