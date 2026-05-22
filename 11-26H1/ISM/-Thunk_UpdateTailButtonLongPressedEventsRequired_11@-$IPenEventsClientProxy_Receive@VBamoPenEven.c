/*
 * XREFs of ?Thunk_UpdateTailButtonLongPressedEventsRequired_11@?$IPenEventsClientProxy_Receive@VBamoPenEventsClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180092F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IPenEventsClientProxy_Receive<BamoImpl::BamoPenEventsClientProxyImpl>::Thunk_UpdateTailButtonLongPressedEventsRequired_11(
        BamoImpl::BamoPenEventsClientProxyImpl *a1,
        _BYTE **a2)
{
  _BYTE *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  LOBYTE(v2) = *v2;
  return BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonLongPressedEventsRequired(a1, (__int64)a2, (__int64)v2);
}
