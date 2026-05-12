/*
 * XREFs of NvmeControllerGetNamespace @ 0x1400317F0
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeAdapterCompleteControllerQueueRequest @ 0x1400E51B0 (NvmeAdapterCompleteControllerQueueRequest.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E8524 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400EDDD0 (NvmeAdapterStartFabricControllerNamespaces.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerRequeueSQPendingRequests @ 0x1400F9ED4 (NvmeControllerRequeueSQPendingRequests.c)
 *     NvmeGetNamespaceDescriptorListIdentify @ 0x1400FEB00 (NvmeGetNamespaceDescriptorListIdentify.c)
 *     NvmeGetNamespaceIoCommandSetIdentify @ 0x1400FED48 (NvmeGetNamespaceIoCommandSetIdentify.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall NvmeControllerGetNamespace(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rsi
  __int64 (__fastcall *v4)(_QWORD *); // r15
  __int64 (__fastcall *v5)(__int64, __int64); // r12
  unsigned int v6; // ebx
  __int64 v7; // rbp
  unsigned int v8; // edx
  int v9; // ebx
  _QWORD **v10; // r14
  _QWORD *i; // rdi
  __int64 v12; // rax
  int v13; // eax
  _QWORD *result; // rax

  v3 = 0LL;
  if ( !a2 )
    return 0LL;
  v4 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 688);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 696);
  v6 = *(_DWORD *)(a1 + 668);
  v7 = a2;
  v8 = (*(unsigned int (__fastcall **)(_QWORD))(a1 + 704))(a2) % v6;
  v9 = -1073741275;
  v10 = (_QWORD **)(16LL * v8 + *(_QWORD *)(a1 + 680));
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v12 = v4(i);
    v13 = v5(v12, v7);
    if ( !v13 )
    {
      v9 = 0;
      v3 = i;
      break;
    }
    if ( v13 < 0 )
      break;
  }
  result = v3 - 5;
  if ( v9 < 0 )
    return 0LL;
  return result;
}
