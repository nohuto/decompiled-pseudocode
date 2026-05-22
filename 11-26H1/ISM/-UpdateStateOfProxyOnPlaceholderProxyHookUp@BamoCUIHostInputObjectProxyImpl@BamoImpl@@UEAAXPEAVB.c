/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoCUIHostInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180134B30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateComponentWindowId@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x1801348CC (-UpdateComponentWindowId@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 */

void __fastcall BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoCUIHostInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v4; // r8

  BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateComponentWindowId(this, 0LL, *((_QWORD *)a2 + 4));
  LOBYTE(v4) = *((_BYTE *)a2 + 40);
  BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateIsInputDisabled(this, 0LL, v4);
}
