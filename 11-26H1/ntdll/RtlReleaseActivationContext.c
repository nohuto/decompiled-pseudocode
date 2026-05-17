/*
 * XREFs of RtlReleaseActivationContext @ 0x18004DE10
 * Callers:
 *     LdrRemoveLoadAsDataTable @ 0x180032E70 (LdrRemoveLoadAsDataTable.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180066FE0 (RtlpTpWorkUnposted.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     RtlFreeActivationContextStack @ 0x180088C30 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180088D10 (RtlDeactivateActivationContext.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlDispatchAPC @ 0x1800DCDF0 (RtlDispatchAPC.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180010460 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x1800A1EC8 (RtlpFreeActivationContext.c)
 */

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  int v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    while ( 1 )
    {
      v2 = *a1;
      if ( *a1 == 0x7FFFFFFF )
        break;
      v3 = v2 - 1;
      if ( v2 == _InterlockedCompareExchange(a1, v2 - 1, v2) )
        goto LABEL_6;
    }
    v3 = 0x7FFFFFFF;
LABEL_6:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&a1[8 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(a1);
      else
        RtlpFreeActivationContext(a1);
    }
  }
}
