/*
 * XREFs of ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180014CE4
 * Callers:
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C1C (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C6C (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x18001B5E8 (-ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z.c)
 *     ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180067CC0 (-ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074E44 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ArManagerReleaseLockExclusive(struct _ACTIVITY_RESTARTER *a1)
{
  char *v1; // rcx
  __int64 *Value; // rax
  __int64 v3; // rdx

  v1 = (char *)a1 + 48;
  *((_DWORD *)v1 + 2) = 0;
  RtlReleaseSRWLockExclusive(v1);
  if ( ArLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(ArLockTrackerId);
    v3 = *Value;
    if ( (*Value & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[2]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFFFFDuLL;
  }
}
