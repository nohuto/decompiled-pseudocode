/*
 * XREFs of MiFinishVadDeletion @ 0x14043B7B8
 * Callers:
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     MiDecrementVadsBeingDeleted @ 0x14043B970 (MiDecrementVadsBeingDeleted.c)
 *     MiGetVadWakeList @ 0x14043B9B0 (MiGetVadWakeList.c)
 *     MiRemoveVadCharges @ 0x140A02094 (MiRemoveVadCharges.c)
 *     MiReturnVadQuotaCharges @ 0x140A81B4C (MiReturnVadQuotaCharges.c)
 *     MiDeleteVadHotPatchState @ 0x140B57CFC (MiDeleteVadHotPatchState.c)
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return MiDecrementVadsBeingDeleted(v10);
}
