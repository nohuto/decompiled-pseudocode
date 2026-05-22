/*
 * XREFs of ?Thunk_UpdateHitTestConfiguration_16@?$IResizeControllerClientProxy_Receive@VBamoResizeControllerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801294F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IResizeControllerClientProxy_Receive<BamoImpl::BamoResizeControllerClientProxyImpl>::Thunk_UpdateHitTestConfiguration_16(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoResizeControllerClientProxyImpl::UpdateHitTestConfiguration(a1, a2, *v2);
}
