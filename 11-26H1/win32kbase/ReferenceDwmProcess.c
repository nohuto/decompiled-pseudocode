/*
 * XREFs of ReferenceDwmProcess @ 0x1400B2E10
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1400B2C30 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140229300 (NtDCompositionSendDwmLpcMessage.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x14023F190 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceDwmProcess(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = *(_QWORD *)(UserSessionState + 70544);
  if ( v4 )
    ObReferenceObjectByPointer(*(PVOID *)(UserSessionState + 70544), 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  return v4;
}
