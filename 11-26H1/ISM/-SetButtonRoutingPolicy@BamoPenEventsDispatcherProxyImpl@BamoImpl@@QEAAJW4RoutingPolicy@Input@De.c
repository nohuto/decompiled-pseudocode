/*
 * XREFs of ?SetButtonRoutingPolicy@BamoPenEventsDispatcherProxyImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180127D10
 * Callers:
 *     ?SetButtonRoutingPolicy@BamoPenEventsDispatcherProxy@@UEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180127CC0 (-SetButtonRoutingPolicy@BamoPenEventsDispatcherProxy@@UEAAJW4RoutingPolicy@Input@Devices@Interna.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendSetButtonRoutingPolicy@BamoPenEventsDispatcherProxyImpl@BamoImpl@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x18011E9D0 (-LogSendSetButtonRoutingPolicy@BamoPenEventsDispatcherProxyImpl@BamoImpl@@AEAAXW4RoutingPolicy@I.c)
 */

__int64 __fastcall BamoImpl::BamoPenEventsDispatcherProxyImpl::SetButtonRoutingPolicy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // esi
  struct IMessageCallSendHost *v10; // rsi
  _QWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v13; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6F97,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6FA0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v15 = 0LL;
    v13 = 0;
    v14 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           &v15,
           &v13,
           &v14);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v15;
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v15 )
          v4 = (char *)v15 - 16;
        v4[72] = 1;
      }
      BamoImpl::BamoPenEventsDispatcherProxyImpl::LogSendSetButtonRoutingPolicy();
      v11[0] = v13;
      v11[1] = v14;
      return CoreUICallSend(v10, v11, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6FA7,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
