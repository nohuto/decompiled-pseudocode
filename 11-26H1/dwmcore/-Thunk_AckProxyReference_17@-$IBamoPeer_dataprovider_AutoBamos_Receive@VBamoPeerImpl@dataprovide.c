/*
 * XREFs of ?Thunk_AckProxyReference_17@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180161FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_17(
        Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        __int64 a2)
{
  return Microsoft::BamoImpl::BaseBamoPeerImpl::AckProxyReference(a1, **(_DWORD **)a2, **(_BYTE **)(a2 + 8));
}
