/*
 * XREFs of ?Thunk_UpdateDeviceType_16@?$ISimpleHapticsControllerProxy_Receive@VBamoSimpleHapticsControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801292C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISimpleHapticsControllerProxy_Receive<BamoImpl::BamoSimpleHapticsControllerProxyImpl>::Thunk_UpdateDeviceType_16(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateDeviceType(a1, a2, *v2);
}
