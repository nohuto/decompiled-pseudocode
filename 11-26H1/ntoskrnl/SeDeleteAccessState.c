/*
 * XREFs of SeDeleteAccessState @ 0x1408F16E0
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x1407F2950 (PspCheckCpuPartitionCreateAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F2CB4 (PspReferenceCpuPartitionByHandle.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     CMFCheckAccess @ 0x140842C28 (CMFCheckAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1408597A8 (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     PsOpenProcess @ 0x1408EFC40 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObReferenceObjectByName @ 0x1408F2260 (ObReferenceObjectByName.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     NtGetNextThread @ 0x140956360 (NtGetNextThread.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140984264 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1409FE890 (PspOneDirectionSecurityDomainCombine.c)
 *     PspCombineSecurityDomains @ 0x140A0021C (PspCombineSecurityDomains.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 *     WmipCreateGuidObject @ 0x140A10030 (WmipCreateGuidObject.c)
 *     PsOpenThread @ 0x140A10530 (PsOpenThread.c)
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB2F6C (SepCopyAnonymousTokenAndSetSilo.c)
 *     PspCreateProcess @ 0x140ADC7C0 (PspCreateProcess.c)
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     SepDeleteAccessState @ 0x140418680 (SepDeleteAccessState.c)
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
      if ( *(_KTRAP_FRAME **)(a1 + 48) == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 1144) + 284LL));
      if ( *(_KTRAP_FRAME **)(a1 + 32) == RtlpBootStatHandleLock.TrapFrame )
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
