/*
 * XREFs of ReferenceDwmProcess @ 0x140057AD0
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1400578F0 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1400579D4 (OpenDwmHandle.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140227130 (NtDCompositionSendDwmLpcMessage.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x140235B00 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237FD4 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140238788 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceDwmProcess(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_QWORD *)(UserSessionState + 70552);
  if ( v3 )
    ObReferenceObjectByPointer(*(PVOID *)(UserSessionState + 70552), 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  return v3;
}
