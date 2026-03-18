/*
 * XREFs of ??_EBamoDataProviderProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180251870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::BamoDataProviderProxyImpl *__fastcall BamoImpl::BamoDataProviderProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoDataProviderProxyImpl *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
