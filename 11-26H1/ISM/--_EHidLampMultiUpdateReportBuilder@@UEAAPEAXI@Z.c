/*
 * XREFs of ??_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z @ 0x180021510
 * Callers:
 *     <none>
 * Callees:
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x180021658 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

HidLampMultiUpdateReportBuilder *__fastcall HidLampMultiUpdateReportBuilder::`vector deleting destructor'(
        HidLampMultiUpdateReportBuilder *this,
        char a2)
{
  HidLampMultiUpdateReportBuilder::~HidLampMultiUpdateReportBuilder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x50);
    else
      free(this);
  }
  return this;
}
