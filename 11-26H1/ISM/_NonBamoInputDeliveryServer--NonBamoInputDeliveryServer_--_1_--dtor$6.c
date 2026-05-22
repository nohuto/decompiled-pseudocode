/*
 * XREFs of _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$6 @ 0x1801DBCFE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
           *(_QWORD *)(a2 + 64) + 72LL,
           a2);
}
