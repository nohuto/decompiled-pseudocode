/*
 * XREFs of ??1BamoDataSourceProxyImpl@BamoImpl@@UEAA@XZ @ 0x180242BB8
 * Callers:
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x180242C08 (--1DataSourceProxy@@UEAA@XZ.c)
 *     ??_GBamoDataSourceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1802518B0 (--_GBamoDataSourceProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

void __fastcall BamoImpl::BamoDataSourceProxyImpl::~BamoDataSourceProxyImpl(BamoImpl::BamoDataSourceProxyImpl *this)
{
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 2);
}
