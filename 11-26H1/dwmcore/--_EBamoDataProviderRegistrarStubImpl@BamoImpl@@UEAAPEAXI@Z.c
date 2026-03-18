/*
 * XREFs of ??_EBamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1802413D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::BamoDataProviderRegistrarStubImpl *__fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::`vector deleting destructor'(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
