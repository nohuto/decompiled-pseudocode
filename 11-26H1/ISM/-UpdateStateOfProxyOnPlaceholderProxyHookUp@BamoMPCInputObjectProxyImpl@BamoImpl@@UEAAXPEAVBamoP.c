/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012F480
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEventSubscriptions@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012B7A0 (-UpdateEventSubscriptions@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoMPCInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v4; // r8

  BamoImpl::BamoMPCInputObjectProxyImpl::UpdateEventSubscriptions(this, 0LL, *((unsigned int *)a2 + 8));
  LOBYTE(v4) = *((_BYTE *)a2 + 36);
  BamoImpl::BamoMPCInputObjectProxyImpl::UpdateCalledGetDetectedSourcesAtTimestampRecently(this, 0LL, v4);
}
