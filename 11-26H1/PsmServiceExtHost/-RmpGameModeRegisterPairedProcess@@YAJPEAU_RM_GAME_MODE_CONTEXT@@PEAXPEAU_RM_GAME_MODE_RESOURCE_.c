/*
 * XREFs of ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x180087984
 * Callers:
 *     ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x1800828F0 (-RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F294 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180069AB4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180087018 (-RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x1800871A0 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180087250 (-RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MO.c)
 *     ?RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087330 (-RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE.c)
 *     ?RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x1800873B0 (-RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z.c)
 *     ?RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087650 (-RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeRegisterPairedProcess(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        HANDLE Process)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v5; // rsi
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v9; // r12
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v10; // rbp
  struct _RM_GAME_MODE_PROCESS_PAIRING *Heap; // rdi
  unsigned int v12; // ebx
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessByHandle; // rax
  __int64 v14; // r8
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v15; // rax
  int ProcessOrCompleteInsertion; // eax
  void *v17; // r13
  unsigned __int64 v18; // rbx
  int v19; // r15d
  int v20; // eax
  unsigned __int64 v21; // rax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v23; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Heap = (struct _RM_GAME_MODE_PROCESS_PAIRING *)HampAllocateHeap(0x40uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  RmpGameModeAcquireLock(a1);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 3536LL) & 1) != 0 )
    goto LABEL_4;
  RecipientProcessByHandle = RmpGameModeFindRecipientProcessByHandle(a1, Process);
  v10 = RecipientProcessByHandle;
  if ( !RecipientProcessByHandle || !RmpGameModeIsProcessValidPairingTarget(RecipientProcessByHandle) )
  {
    v12 = -1073741583;
    goto LABEL_34;
  }
  v23 = RmpGameModeFindRecipientProcessByHandle(a1, a2);
  v5 = v23;
  if ( v23 )
    goto LABEL_13;
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  v15 = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)HampAllocateHeap(0xB0uLL);
  v9 = v15;
  if ( v15 )
  {
    RmpGameModeInitializeRecipientProcess(a1, a3, v15);
    *((_BYTE *)v9 + 170) |= 8u;
    RmpGameModeAcquireLock(a1);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 3536LL) & 1) != 0 )
    {
LABEL_4:
      v12 = -1073741077;
      goto LABEL_34;
    }
    ProcessOrCompleteInsertion = RmpGameModeFindProcessOrCompleteInsertion(a1, a2, v9, &v23);
    v5 = v23;
    v12 = ProcessOrCompleteInsertion;
    if ( ProcessOrCompleteInsertion < 0 )
    {
LABEL_34:
      *((_DWORD *)a1 + 20) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 72);
      if ( v9 )
        RmpGameModeDereferenceRecipientProcess(v9);
      goto LABEL_36;
    }
LABEL_13:
    if ( (*((_BYTE *)v5 + 170) & 8) == 0 )
    {
LABEL_14:
      v12 = -1073740008;
      goto LABEL_34;
    }
    v17 = (void *)*((unsigned int *)v5 + 27);
    v18 = *((_QWORD *)v10 + 9);
    v19 = *((_BYTE *)v10 + 80) & 1;
    if ( (*((_BYTE *)v10 + 80) & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_29;
      v18 ^= (unsigned __int64)v10 + 72;
    }
    if ( v18 )
    {
      do
      {
        v20 = RmpGameModeComparePairingByAuxiliaryId(v17, (struct _RTL_BALANCED_NODE *)v18);
        if ( v20 >= 0 )
        {
          if ( v20 <= 0 )
            break;
          v21 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v21 = *(_QWORD *)v18;
        }
        if ( v19 && v21 )
          v18 ^= v21;
        else
          v18 = v21;
      }
      while ( v18 );
      if ( v18 )
        goto LABEL_14;
    }
LABEL_29:
    *((_QWORD *)Heap + 6) = 0LL;
    *((_QWORD *)Heap + 7) = 0LL;
    *(_QWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 1) = 0LL;
    *((_QWORD *)Heap + 2) = -1LL;
    *((_QWORD *)Heap + 3) = 0LL;
    *((_QWORD *)Heap + 4) = 0LL;
    *((_QWORD *)Heap + 5) = -1LL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v10) <= 1 )
      __fastfail(0xEu);
    *((_QWORD *)Heap + 6) = v10;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v5) <= 1 )
      __fastfail(0xEu);
    *((_QWORD *)Heap + 7) = v5;
    RmpGameModeInsertProcessPairing(Heap, 1LL, v14);
    Heap = 0LL;
    v12 = 0;
    goto LABEL_34;
  }
  v12 = -1073741801;
LABEL_36:
  if ( v5 )
    RmpGameModeDereferenceRecipientProcess(v5);
  if ( v10 )
    RmpGameModeDereferenceRecipientProcess(v10);
  if ( Heap )
    HampFreeHeap(Heap);
  return v12;
}
