/*
 * XREFs of ?UpdateInterfacePathRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018B538
 * Callers:
 *     ?PushStateToProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180189FC4 (-PushStateToProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Micr.c)
 *     ?UpdateInterfacePathRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18018B614 (-UpdateInterfacePathRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAV.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180050C5C (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180070558 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateInterfacePathRemoteCache(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  signed int v2; // eax
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-30h]
  _QWORD v5[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  unsigned int v7; // [rsp+60h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+20h] BYREF
  struct IMessageCallSendHost *v9; // [rsp+78h] [rbp+28h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v9 = 0LL;
    v7 = 0;
    v8 = 0;
    v2 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v9, &v7, &v8);
    if ( v2 < 0 || (v5[0] = v7, v5[1] = v8, LOWORD(v4) = 1, v2 = CoreUICallSend(v9, v5, 2LL), v2 < 0) )
    {
      if ( v2 != -2018375675 )
      {
        v3 = wil::verify_hresult<long>(v2);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8B58,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v3,
          v4);
      }
    }
  }
}
