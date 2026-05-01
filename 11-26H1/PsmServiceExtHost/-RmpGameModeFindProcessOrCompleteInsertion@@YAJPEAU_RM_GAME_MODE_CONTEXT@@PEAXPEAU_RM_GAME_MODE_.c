/*
 * XREFs of ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x1800871A0
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x180087984 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180087C14 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180069AB4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x180086D7C (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180087250 (-RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MO.c)
 *     ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087508 (-RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeFindProcessOrCompleteInsertion(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a3,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS **a4)
{
  volatile signed __int64 *RecipientProcessByHandle; // rax
  __int64 result; // rax

  RecipientProcessByHandle = (volatile signed __int64 *)RmpGameModeFindRecipientProcessByHandle(a1, a2);
  if ( RecipientProcessByHandle )
  {
    if ( _InterlockedIncrement64(RecipientProcessByHandle) <= 1 )
      __fastfail(0xEu);
    *a4 = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)RecipientProcessByHandle;
    RmpGameModeDereferenceRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)RecipientProcessByHandle);
  }
  else
  {
    result = RmpGameModeAllocateObjectsForRecipientProcess(a3, a2);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
      __fastfail(0xEu);
    RmpGameModeInsertRecipientProcess(a3);
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
      __fastfail(0xEu);
    *a4 = a3;
  }
  return 0LL;
}
