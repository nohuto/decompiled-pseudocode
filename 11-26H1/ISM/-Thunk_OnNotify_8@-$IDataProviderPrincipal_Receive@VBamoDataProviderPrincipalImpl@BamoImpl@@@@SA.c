/*
 * XREFs of ?Thunk_OnNotify_8@?$IDataProviderPrincipal_Receive@VBamoDataProviderPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180107500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataProviderPrincipal_Receive<BamoImpl::BamoDataProviderPrincipalImpl>::Thunk_OnNotify_8(
        int *a1,
        __int64 a2)
{
  return BamoImpl::BamoDataProviderPrincipalImpl::OnNotify(a1, **(_QWORD **)a2, **(_DWORD **)(a2 + 8));
}
