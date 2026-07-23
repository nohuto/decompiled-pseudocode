/*
 * XREFs of SeDeleteAccessState @ 0x1408F7CA0
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x1407F84B0 (PspCheckCpuPartitionCreateAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F8814 (PspReferenceCpuPartitionByHandle.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     CMFCheckAccess @ 0x1408480B8 (CMFCheckAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x14085FB38 (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14091B690 (PspOneDirectionSecurityDomainCombine.c)
 *     PspCombineSecurityDomains @ 0x14091CFB8 (PspCombineSecurityDomains.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140946274 (CmpCheckKeySecurityDescriptorAccess.c)
 *     NtGetNextThread @ 0x140949FE0 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x1409BA3B0 (NtGetNextProcess.c)
 *     WmipCreateGuidObject @ 0x140A0F220 (WmipCreateGuidObject.c)
 *     PsOpenThread @ 0x140A0F720 (PsOpenThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB430C (SepCopyAnonymousTokenAndSetSilo.c)
 *     PspCreateProcess @ 0x140AD9D10 (PspCreateProcess.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4DB2C (CmKeyBodyRemapToVirtual.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     SepDeleteAccessState @ 0x14040CC90 (SepDeleteAccessState.c)
 */

LONG_PTR __fastcall SeDeleteAccessState(__int64 a1)
{
  signed __int64 v2; // r8
  _KPROCESS *Process; // rcx
  LONG_PTR result; // rax
  LONG_PTR v5; // rtt
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  SepDeleteAccessState(a1);
  if ( SeTokenLeakTracking )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 1144) + 284LL));
      if ( *(struct _LIST_ENTRY **)(a1 + 48) == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 1144) + 284LL));
      if ( *(struct _LIST_ENTRY **)(a1 + 32) == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
  v2 = *(_QWORD *)(a1 + 48);
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&Process[1].ActiveProcessors);
  result = (LONG_PTR)Process[1].ActiveProcessors;
  do
  {
    if ( (v2 ^ (unsigned __int64)result) >= 0xF )
    {
      result = ObfDereferenceObjectWithTag((PVOID)v2, 0x75536553u);
      goto LABEL_7;
    }
    v5 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].ActiveProcessors, result + 1, result);
  }
  while ( v5 != result );
  if ( ObpTraceFlags )
    result = ObpPushStackInfo(v2 - 48, -1, 0x75536553u);
LABEL_7:
  v6 = *(void **)(a1 + 32);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v6 )
    result = ObfDereferenceObjectWithTag(v6, 0x75536553u);
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
