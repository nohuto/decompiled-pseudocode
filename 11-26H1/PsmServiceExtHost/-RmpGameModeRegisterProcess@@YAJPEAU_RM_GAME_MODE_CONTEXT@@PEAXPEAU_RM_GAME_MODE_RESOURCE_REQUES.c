/*
 * XREFs of ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180087C14
 * Callers:
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180082B78 (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F294 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180069AB4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x1800871A0 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087330 (-RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE.c)
 */

__int64 __fastcall RmpGameModeRegisterProcess(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v4; // rdi
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *Heap; // rax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v8; // rbp
  unsigned int v9; // ebx
  int ProcessOrCompleteInsertion; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  Heap = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)HampAllocateHeap(0xB0uLL);
  v8 = Heap;
  if ( Heap )
  {
    RmpGameModeInitializeRecipientProcess(a1, a3, Heap);
    RmpGameModeAcquireLock(a1);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 3536LL) & 1) != 0 )
    {
      v9 = -1073741077;
    }
    else
    {
      ProcessOrCompleteInsertion = RmpGameModeFindProcessOrCompleteInsertion(a1, a2, v8, &v12);
      v4 = v12;
      v9 = ProcessOrCompleteInsertion;
      if ( ProcessOrCompleteInsertion >= 0 )
        v9 = v8 != v12 ? 0xC0000718 : 0;
    }
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    if ( v4 )
      RmpGameModeDereferenceRecipientProcess(v4);
    RmpGameModeDereferenceRecipientProcess(v8);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
