/*
 * XREFs of ?Thunk_UpdateInputSinkData_355@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18015E6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IShellGesturesClientProxy_Receive<BamoImpl::BamoShellGesturesClientProxyImpl>::Thunk_UpdateInputSinkData_355(
        BamoImpl::BamoShellGesturesClientProxyImpl *a1,
        const struct InputSinkData **a2)
{
  const struct InputSinkData *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoShellGesturesClientProxyImpl::UpdateInputSinkData(a1, (__int64)a2, v2);
}
