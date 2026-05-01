/*
 * XREFs of ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180067DD4
 * Callers:
 *     ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180067CC0 (-ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C1C (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C6C (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     CemRcTableGetNext @ 0x18003BDF0 (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18003C4D4 (CemRcTableGetFirst.c)
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180064A38 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 */

void __fastcall ArManagerRestartActivitiesForPhase(struct _ACTIVITY_RESTARTER *a1)
{
  unsigned __int64 i; // rax
  __int64 v2; // rcx
  char v3; // al
  struct _AR_ACTIVITY_HOST *v4; // rbx

  for ( i = CemRcTableGetFirst((__int64)a1); ; i = CemRcTableGetNext(v4) )
  {
    v4 = (struct _AR_ACTIVITY_HOST *)i;
    if ( !i )
      break;
    if ( *(_QWORD *)(i + 600) )
    {
      ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)i);
      v2 = *((_QWORD *)v4 + 75);
      if ( v2 )
      {
        v3 = *(_BYTE *)(v2 + 32);
        if ( v3 != 2 && v3 != 1 && (*(_BYTE *)(v2 + 28) & 1) != 0 )
          ArActStartAsync((struct _AR_ACTIVITY *)v2);
      }
      ArHostClearChangeInProgress(v4);
    }
  }
}
