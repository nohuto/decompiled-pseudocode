/*
 * XREFs of ?UpdateTouchpadDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180191EAC
 * Callers:
 *     ?PushStateToProxy@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018FF48 (-PushStateToProxy@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsof.c)
 *     ?UpdateTouchpadDevicesRemoteCacheStatic@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180191F94 (-UpdateTouchpadDevicesRemoteCacheStatic@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBa.c)
 * Callees:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x180034D70 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180050C5C (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180070558 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdateTouchpadDevicesRemoteCache(
        BamoImpl::BamoHapticDeviceManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  struct Microsoft::Bamo::BamoPrincipal *v3; // rcx
  signed int v4; // eax
  unsigned int v5; // eax
  int v6; // [rsp+20h] [rbp-30h]
  _QWORD v7[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v9; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+88h] [rbp+38h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 6);
    if ( v3 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v3,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 4) + 16LL));
    v11 = 0LL;
    v9 = 0;
    v10 = 0;
    v4 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v11, &v9, &v10);
    if ( v4 < 0 || (v7[0] = v9, v7[1] = v10, LOWORD(v6) = 1, v4 = CoreUICallSend(v11, v7, 2LL), v4 < 0) )
    {
      if ( v4 != -2018375675 )
      {
        v5 = wil::verify_hresult<long>(v4);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xEEE0,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v5,
          v6);
      }
    }
  }
}
