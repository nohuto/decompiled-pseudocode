/*
 * XREFs of CmpCleanupParseContext @ 0x14097C850
 * Callers:
 *     CmpCreatePredefined @ 0x14084B04C (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x14084F320 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14084F540 (NtQueryOpenSubKeysEx.c)
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140863A58 (CmpDoReOpenTransKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A31298 (CmpStartSiloRegistryNamespace.c)
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rcx

  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( a2 )
    {
      CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
    }
    else
    {
      CmpLockRegistry(a1);
      CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
      CmpUnlockRegistry(v6);
    }
  }
  v3 = (_QWORD *)(a1 + 144);
  v4 = (_QWORD *)*v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_12;
  result = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 )
    goto LABEL_12;
  *v3 = result;
  *(_QWORD *)(result + 8) = v3;
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      if ( v4[4] )
        guard_dispatch_icall_no_overrides((__int64)(v4 + 2), (__int64)(v4 + 6));
      CmpFreeTransientPoolWithTag(v4, 0x50454D43u);
      v4 = (_QWORD *)*v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 )
        break;
      result = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 )
        break;
      *v3 = result;
      *(_QWORD *)(result + 8) = v3;
      if ( v4 == v3 )
        return result;
    }
LABEL_12:
    __fastfail(3u);
  }
  return result;
}
