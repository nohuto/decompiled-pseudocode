/*
 * XREFs of ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18005D8E4
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ECE0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180087250 (-RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MO.c)
 * Callees:
 *     ?RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18005D994 (-RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RM_GAME_MODE_RECIPIENT_PROCESS *__fastcall RmpGameModeFindRecipientProcessById(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2)
{
  char v2; // si
  unsigned __int64 v3; // rcx
  int v4; // esi
  unsigned __int64 v5; // rbp
  char *v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // rax

  v2 = *((_BYTE *)a1 + 16);
  v3 = (unsigned __int64)a1 + 8;
  v4 = v2 & 1;
  v5 = a2;
  v6 = 0LL;
  v7 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v7 )
      return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v6;
    v7 ^= v3;
  }
  if ( v7 )
  {
    do
    {
      v8 = RmpGameModeCompareRecipientProcessNode((void *)v5, (struct _RTL_BALANCED_NODE *)v7);
      if ( v8 < 0 )
      {
        v9 = *(_QWORD *)v7;
      }
      else
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(v7 + 8);
      }
      if ( v4 && v9 )
        v7 ^= v9;
      else
        v7 = v9;
    }
    while ( v7 );
    if ( v7 )
    {
      v6 = (char *)(v7 - 8);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 - 8)) <= 1 )
        __fastfail(0xEu);
    }
  }
  return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v6;
}
