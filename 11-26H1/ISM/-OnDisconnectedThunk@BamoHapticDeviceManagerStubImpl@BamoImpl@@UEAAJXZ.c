/*
 * XREFs of ?OnDisconnectedThunk@BamoHapticDeviceManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x18018FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoHapticDeviceManagerPrincipalImpl@1@@Z @ 0x18018D38C (--0-$CalloutWrapper@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PE.c)
 *     ??1?$CalloutWrapper@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18018DA28 (--1-$CalloutWrapper@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoHapticDeviceManagerStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoHapticDeviceManagerStubImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rbx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( *(int *)(v3 + 8) > 0 )
  {
    v4 = v3 - 16;
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHapticDeviceManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoHapticDeviceManagerPrincipalImpl>(
      (__int64)v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      v3);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 96LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHapticDeviceManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoHapticDeviceManagerPrincipalImpl>((__int64)v6);
  }
  return v2;
}
