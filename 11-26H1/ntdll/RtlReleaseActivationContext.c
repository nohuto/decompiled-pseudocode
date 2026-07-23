/*
 * XREFs of RtlReleaseActivationContext @ 0x180038390
 * Callers:
 *     LdrRemoveLoadAsDataTable @ 0x18001DFD0 (LdrRemoveLoadAsDataTable.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     RtlFreeActivationContextStack @ 0x180080030 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180080110 (RtlDeactivateActivationContext.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x1800870E0 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180087430 (RtlpTpWorkUnposted.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlDispatchAPC @ 0x1800D9D60 (RtlDispatchAPC.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x1800A0FF8 (RtlpFreeActivationContext.c)
 */

void __cdecl RtlReleaseActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // eax
  int v3; // edi

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && (unsigned int)(ActivationContext->RefCount - 1) <= 0x7FFFFFFD )
  {
    while ( 1 )
    {
      RefCount = ActivationContext->RefCount;
      if ( ActivationContext->RefCount == 0x7FFFFFFF )
        break;
      v3 = RefCount - 1;
      if ( RefCount == _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount - 1, RefCount) )
        goto LABEL_6;
    }
    v3 = 0x7FFFFFFF;
LABEL_6:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        &ActivationContext[1].NotificationContext
      + 4
      * (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&ActivationContext[1].NotificationRoutine,
                             1u)
        + 1) & 3),
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(ActivationContext);
      else
        RtlpFreeActivationContext(ActivationContext);
    }
  }
}
