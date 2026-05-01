/*
 * XREFs of ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006D27C
 * Callers:
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027E6C (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800291F8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18002C870 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180088D30 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004070 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostComputeDigest@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056090 (-RmpActivityHostComputeDigest@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetImportance@@YA?AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005AB8C (-HampHostGetImportance@@YA-AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostResourceSetsChanged(struct _RM_ACTIVITY_HOST *a1)
{
  __int16 v1; // bx
  __int16 v3; // ax
  __int64 v4; // rcx
  __int16 v5; // ax
  __int64 v6; // rcx

  v1 = *((_WORD *)a1 + 584);
  v3 = RmpActivityHostComputeDigest((__int64)a1);
  *((_WORD *)a1 + 584) = v3;
  v4 = *((_QWORD *)a1 + 6);
  v5 = v3 & 0x80;
  if ( (v1 & 0x80u) == 0 )
  {
    if ( v5 )
      ++*(_DWORD *)(v4 + 484);
  }
  else if ( !v5 )
  {
    --*(_DWORD *)(v4 + 484);
  }
  *((_DWORD *)a1 + 360) = HampHostGetImportance((__int64)a1 + 56);
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 179);
  if ( (unsigned int)RmpActivityHostIsRevocable(a1) )
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 6) + 360LL));
  v6 = *((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 152) = 0LL;
  ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(v6 + 3544));
}
