/*
 * XREFs of ?RegisterDeviceDockClient@BamoDeviceDockServerProxyImpl@BamoImpl@@QEAAJPEAVBamoDeviceDockClientPrincipal@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x180125890
 * Callers:
 *     ?RegisterDeviceDockClient@BamoDeviceDockServerProxy@@UEAAJPEAVBamoDeviceDockClientPrincipal@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x180125830 (-RegisterDeviceDockClient@BamoDeviceDockServerProxy@@UEAAJPEAVBamoDeviceDockClientPrincipal@@W4D.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180074F58 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC6B0 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendRegisterDeviceDockClient@BamoDeviceDockServerProxyImpl@BamoImpl@@AEAAXIW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18011DF80 (-LogSendRegisterDeviceDockClient@BamoDeviceDockServerProxyImpl@BamoImpl@@AEAAXIW4DockWatcherRout.c)
 */

__int64 __fastcall BamoImpl::BamoDeviceDockServerProxyImpl::RegisterDeviceDockClient(
        __int64 a1,
        struct Microsoft::Bamo::BamoPrincipal *a2)
{
  __int64 v2; // r9
  __int64 v5; // r9
  int v7; // eax
  unsigned int v8; // edi
  struct IMessageCallSendHost *v9; // rdi
  __int64 **v10; // rcx
  struct IMessageCallSendHost *v11[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v13; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v2 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB324,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v2);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v5 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB32D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a2 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
        a2);
    v11[0] = 0LL;
    v13 = 0;
    v14 = 0;
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v11,
           &v13,
           &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v11[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v10 = (__int64 **)((char *)v11[0] - 16);
        if ( !v11[0] )
          v10 = 0LL;
        *((_BYTE *)v10 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v10, a2);
      }
      BamoImpl::BamoDeviceDockServerProxyImpl::LogSendRegisterDeviceDockClient();
      v11[0] = (struct IMessageCallSendHost *)v13;
      v11[1] = (struct IMessageCallSendHost *)v14;
      return CoreUICallSend(v9, v11, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB335,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
