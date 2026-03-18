/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180252C20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x180208100 (-UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z.c)
 *     ?UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180252A44 (-UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDataSourceProxyImpl *this,
        const struct _LUID *a2)
{
  struct _LUID v4; // r8

  BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(this, 0LL, a2 + 4);
  v4 = a2[5];
  if ( v4 )
    BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessIds(this, 0LL, *(unsigned int *)(*(_QWORD *)&v4 + 40LL));
}
