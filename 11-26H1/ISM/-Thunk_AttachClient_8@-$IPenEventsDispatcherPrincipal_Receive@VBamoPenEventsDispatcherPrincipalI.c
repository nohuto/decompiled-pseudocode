/*
 * XREFs of ?Thunk_AttachClient_8@?$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18003CFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IPenEventsDispatcherPrincipal_Receive<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::Thunk_AttachClient_8(
        BamoImpl::BamoPenEventsDispatcherPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoPenEventsDispatcherPrincipalImpl::AttachClient(a1, **a2);
}
