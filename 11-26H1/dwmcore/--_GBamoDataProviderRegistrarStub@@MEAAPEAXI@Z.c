/*
 * XREFs of ??_GBamoDataProviderRegistrarStub@@MEAAPEAXI@Z @ 0x180241390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

BamoDataProviderRegistrarStub *__fastcall BamoDataProviderRegistrarStub::`scalar deleting destructor'(
        BamoDataProviderRegistrarStub *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 6);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
