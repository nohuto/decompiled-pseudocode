/*
 * XREFs of MiFinishVadDeletion @ 0x140442CA8
 * Callers:
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     MiDecrementVadsBeingDeleted @ 0x140442E60 (MiDecrementVadsBeingDeleted.c)
 *     MiGetVadWakeList @ 0x140442EA0 (MiGetVadWakeList.c)
 *     MiRemoveVadCharges @ 0x14095C7D4 (MiRemoveVadCharges.c)
 *     MiReturnVadQuotaCharges @ 0x140A79C0C (MiReturnVadQuotaCharges.c)
 *     MiDeleteVadHotPatchState @ 0x140B55460 (MiDeleteVadHotPatchState.c)
 */

__int64 __fastcall MiFinishVadDeletion(_DWORD *P, __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // r14
  BOOL v5; // r10d
  unsigned int v6; // ebx
  _KPROCESS *Process; // rsi
  int v9; // r15d
  __int64 v10; // rdi
  __int64 VadWakeList; // rax
  _QWORD *v12; // rsi
  __int64 v13; // r8
  _QWORD *v15; // rbx
  __int64 v16; // rdx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = P[12];
  Process = CurrentThread->ApcState.Process;
  v9 = v6 & 0x80000;
  if ( (v6 & 0x80000) == 0 )
    v5 = ((unsigned int)P[13] | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 32)) < 0x7FFFFFFFDLL;
  if ( a3 <= *(_QWORD *)&Process[1].PrimaryGroup && (a4 & 1) == 0 )
    *(_QWORD *)&Process[1].AutoBoostState.TreeCount = a2 + *(_QWORD *)&Process[1].AutoBoostState.TreeCount - a3 - 1;
  v10 = (__int64)&Process[2].ActiveProcessors[3].StaticBitmap[12];
  _InterlockedAdd((volatile signed __int32 *)&Process[2].ActiveProcessors[4].StaticBitmap[8], 1u);
  if ( MiVadPageSizes[(v6 >> 17) & 3] == 16 )
  {
    if ( v9 )
      --*(_QWORD *)(v10 + 472);
    else
      --*(_QWORD *)(v10 + 480);
  }
  MiReturnVadQuotaCharges(P, Process, v5);
  MiRemoveVadCharges(P, Process);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Process);
  VadWakeList = MiGetVadWakeList(P, 1LL);
  *((_QWORD *)P + 2) = -1LL;
  v12 = (_QWORD *)VadWakeList;
  if ( VadWakeList )
    --CurrentThread->KernelApcDisable;
  if ( !v9 && (v6 & 0x1C) == 8 && (v6 & 0x600000) != 0 )
    MiDeleteVadHotPatchState(P);
  MiUnlockAndDereferenceVad(P);
  if ( v12 )
  {
    do
    {
      v15 = (_QWORD *)*v12;
      KeSignalGate((__int64)(v12 + 3), 1LL, v13);
      v12 = v15;
    }
    while ( v15 );
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, v13);
  }
  return MiDecrementVadsBeingDeleted(v10);
}
