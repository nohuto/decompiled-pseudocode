/*
 * XREFs of CmpCleanupParseContext @ 0x14093E860
 * Callers:
 *     CmpCreatePredefined @ 0x14085135C (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x140855630 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140855850 (NtQueryOpenSubKeysEx.c)
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140869E38 (CmpDoReOpenTransKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A4C1F8 (CmpStartSiloRegistryNamespace.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4DB2C (CmKeyBodyRemapToVirtual.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCleanupParseContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rcx

  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( (_BYTE)a2 )
    {
      CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
    }
    else
    {
      CmpLockRegistry(a1, a2, a3, a4);
      CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
      CmpUnlockRegistry(v8);
    }
  }
  v5 = (_QWORD *)(a1 + 144);
  v6 = (_QWORD *)*v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 )
    goto LABEL_12;
  result = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 )
    goto LABEL_12;
  *v5 = result;
  *(_QWORD *)(result + 8) = v5;
  if ( v6 != v5 )
  {
    while ( 1 )
    {
      if ( v6[4] )
        guard_dispatch_icall_no_overrides((__int64)(v6 + 2), (__int64)(v6 + 6));
      CmpFreeTransientPoolWithTag(v6, 0x50454D43u);
      v6 = (_QWORD *)*v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 )
        break;
      result = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        break;
      *v5 = result;
      *(_QWORD *)(result + 8) = v5;
      if ( v6 == v5 )
        return result;
    }
LABEL_12:
    __fastfail(3u);
  }
  return result;
}
