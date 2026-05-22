/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012BB2C (-UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateId@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18012CA54 (-UpdateId@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateType@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18013013C (-UpdateType@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoEdgyDragSourceClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v4; // r8

  BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateType(this, 0, (const struct _GUID *)a2 + 2);
  BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateId(this, 0LL, *((_QWORD *)a2 + 6));
  v4 = *((_QWORD *)a2 + 7);
  if ( v4 )
    BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateGestureRecognitionConfiguration(this, 0, *(_DWORD *)(v4 + 40));
  BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateControlPoints(
    this,
    0,
    *((struct tagPOINT **)a2 + 8),
    (const char *)*((unsigned int *)a2 + 18));
}
