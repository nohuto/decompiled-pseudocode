/*
 * XREFs of ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005EED8
 * Callers:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?RmpSystemResourceTimerDelete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAX@Z @ 0x180064220 (-RmpSystemResourceTimerDelete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAX@Z.c)
 */

void __fastcall HampHostCleanup(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  void *v2; // rcx
  _QWORD *v3; // rcx
  void *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx

  v2 = (void *)*((_QWORD *)a1 + 72);
  if ( v2 )
    NtClose(v2);
  v3 = (_QWORD *)*((_QWORD *)a1 + 132);
  if ( v3 )
    CemRcObjectDereference(v3);
  v4 = (void *)*((_QWORD *)a1 + 100);
  if ( v4 )
    RmpSystemResourceTimerDelete(a1, v4);
  v5 = *((_QWORD *)a1 + 104);
  if ( v5 )
    TpReleaseTimer(v5);
  v6 = *((_QWORD *)a1 + 80);
  if ( v6 )
    TpReleaseWork(v6);
  v7 = *((_QWORD *)a1 + 79);
  if ( v7 )
    TpReleaseWork(v7);
  v8 = *((_QWORD *)a1 + 81);
  if ( v8 )
    TpReleaseWork(v8);
  v9 = (_QWORD *)*((_QWORD *)a1 + 73);
  if ( v9 )
    CemRcObjectDereference(v9);
  v10 = (_QWORD *)*((_QWORD *)a1 + 99);
  if ( v10 )
    CemRcObjectDereference(v10);
}
