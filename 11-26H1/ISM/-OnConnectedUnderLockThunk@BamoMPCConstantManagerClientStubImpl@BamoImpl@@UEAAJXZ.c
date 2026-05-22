/*
 * XREFs of ?OnConnectedUnderLockThunk@BamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAAJXZ @ 0x1800804D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientStubImpl::OnConnectedUnderLockThunk(
        BamoImpl::BamoMPCConstantManagerClientStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 72LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
