/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x140ABF810
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetSharedVm @ 0x140441D90 (MiGetSharedVm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     ExInitializeAutoExpandPushLock @ 0x14046E140 (ExInitializeAutoExpandPushLock.c)
 *     MiInsertNewProcess @ 0x1404CABCC (MiInsertNewProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x1404D1810 (MiAllowWorkingSetExpansion.c)
 *     MiCopyWorkingSetFields @ 0x1406E9088 (MiCopyWorkingSetFields.c)
 *     MiAllocateProcessShadow @ 0x140ABFF40 (MiAllocateProcessShadow.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  _KPROCESS *Process; // rsi
  __int64 v3; // rbp
  __int64 *SharedVm; // r14
  __int64 result; // rax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(a1 + 40) = Process->DirectoryTableBase;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20u);
  *(_BYTE *)(a1 + 1774) = -1;
  *(_QWORD *)(a1 + 600) = 0LL;
  v3 = a1 + 1024;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 1728) = a1 + 1720;
  *(_QWORD *)(a1 + 1720) = a1 + 1720;
  *(_QWORD *)(a1 + 1712) = 0LL;
  SharedVm = MiGetSharedVm(a1 + 1024);
  result = MiAllocateProcessShadow(a1, 0LL);
  if ( (int)result >= 0 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(72LL, 0x680uLL, 844130637, CurrentProcessorColor | 0x80000000);
    v8 = PoolMm;
    if ( PoolMm )
    {
      *SharedVm = PoolMm + 320;
      ExInitializeAutoExpandPushLock((_QWORD *)(PoolMm + 1312), 1);
      *(_QWORD *)(a1 + 1368) = 0LL;
      *(_QWORD *)(a1 + 872) = *(_QWORD *)&Process[1].PrimaryGroup;
      MiCopyWorkingSetFields(v3, (__int64)&Process[2].ReadyListHead.Blink, v8);
      v9 = *(_QWORD **)(a1 + 1040);
      v9[104] = 0LL;
      v9[107] = 0LL;
      v9[108] = 0LL;
      v9 += 105;
      v9[1] = v9;
      *v9 = v9;
      *(_QWORD *)(a1 + 648) = Process[1].Padding[0];
      *(_DWORD *)(a1 + 1956) = 1;
      MiInsertNewProcess(a1);
      MiAllowWorkingSetExpansion(v3);
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
