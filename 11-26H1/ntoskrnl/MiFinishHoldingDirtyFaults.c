/*
 * XREFs of MiFinishHoldingDirtyFaults @ 0x140700E74
 * Callers:
 *     MiReleaseHotPatchResources @ 0x140B57DDC (MiReleaseHotPatchResources.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

void __fastcall MiFinishHoldingDirtyFaults(__int64 *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 **v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v6 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, a2, a3);
  v7 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v8 = (__int64 **)a1[1], *v8 != a1) )
LABEL_12:
    __fastfail(3u);
  *v8 = (__int64 *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v6);
  v10 = a1 + 4;
  while ( 1 )
  {
    v11 = *v10;
    if ( (__int64 *)*v10 == v10 )
      break;
    if ( *(__int64 **)(v11 + 8) != v10 )
      goto LABEL_12;
    v12 = *(_QWORD *)v11;
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_12;
    *v10 = v12;
    *(_QWORD *)(v12 + 8) = v10;
    KeSetEvent((PRKEVENT)(v11 + 16), 0, 0);
  }
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11, v9);
}
