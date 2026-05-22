/*
 * XREFs of ?UpdateRegionsRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800939E0
 * Callers:
 *     ?PushStateToProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800938E0 (-PushStateToProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@.c)
 *     ?UpdateRegionsRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180143740 (-UpdateRegionsRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180050C5C (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateRegionsRemoteCache(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-30h]
  _QWORD v4[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  unsigned int v6; // [rsp+60h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+70h] [rbp+20h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+78h] [rbp+28h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v8 = 0LL;
    v6 = 0;
    v7 = 0;
    v2 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(a2, &v8, &v6, &v7);
    if ( v2 < 0 || (v4[0] = v6, v4[1] = v7, LOWORD(v3) = 1, v2 = CoreUICallSend(v8, v4, 2LL), v2 < 0) )
    {
      if ( v2 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3460,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v2,
          v3);
    }
  }
}
