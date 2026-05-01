/*
 * XREFs of ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x1800644A0
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ECE0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180064558 (-RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_R.c)
 */

void __fastcall RmpGameModeApplyNewRecipientPolicies(struct _RM_GAME_MODE_CONTEXT *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v7; // rax

  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  while ( 1 )
  {
    Flink = a2->Flink;
    if ( a2->Flink == a2 )
      break;
    if ( Flink->Blink != a2 )
      goto LABEL_5;
    v7 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink
      || (a2->Flink = v7,
          v7->Blink = a2,
          *Flink = 0LL,
          RmpGameModeAcquireAndApplyRecipientResources(a1, (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)&Flink[-6].Blink),
          BYTE3(Flink[5].Flink) &= ~1u,
          v5 = (struct _LIST_ENTRY *)((char *)a1 + 16 * SLODWORD(Flink[1].Flink) + 88),
          Blink = v5->Blink,
          Blink->Flink != v5) )
    {
LABEL_5:
      __fastfail(3u);
    }
    Flink->Flink = v5;
    Flink->Blink = Blink;
    Blink->Flink = Flink;
    v5->Blink = Flink;
  }
  RmpGameModeAcquireLock(a1);
}
