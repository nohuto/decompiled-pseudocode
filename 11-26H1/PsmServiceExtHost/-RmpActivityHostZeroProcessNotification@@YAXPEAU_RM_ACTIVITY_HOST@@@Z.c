/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800291F8
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180027FB8 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18002D080 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180063950 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006D27C (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x1800896DC (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(char *P)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  ExecutionModel::ExternalResourceSet *v4; // rsi
  char *v5; // rcx

  v2 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 6) + 3544LL) + 88LL);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v4 = (ExecutionModel::ExternalResourceSet *)v3[4];
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = (char *)*((_QWORD *)v4 + 167);
    v3 = (_QWORD *)*v3;
    if ( P == v5 )
    {
      if ( v5 )
      {
        RmpObjectRelease(v5);
        *((_QWORD *)v4 + 167) = 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 56LL))(v4) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v4);
      else
        ExecutionModel::ExternalResourceSet::Revoke(v4, 1);
    }
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)P + 171) = 0LL;
  *((_QWORD *)P + 172) = 0LL;
  *((_DWORD *)P + 346) = 0;
  RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)P);
  if ( *((_QWORD *)P + 160) && *((_QWORD *)P + 161) )
  {
    CempListEntryRemoveAndClear((_QWORD *)P + 160);
    RmpObjectRelease(P);
  }
  if ( *((_QWORD *)P + 176) )
    RmpActivityHostRemoveFromRemediationGroup(P, 1u);
  else
    SetEvent(*(HANDLE *)(*((_QWORD *)P + 6) + 352LL));
  RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)P);
}
