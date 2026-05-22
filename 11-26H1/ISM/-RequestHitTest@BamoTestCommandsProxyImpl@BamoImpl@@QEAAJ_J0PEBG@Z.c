/*
 * XREFs of ?RequestHitTest@BamoTestCommandsProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x180126CC0
 * Callers:
 *     ?RequestHitTest@BamoTestCommandsProxy@@UEAAJ_J0PEBG@Z @ 0x180126C50 (-RequestHitTest@BamoTestCommandsProxy@@UEAAJ_J0PEBG@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendRequestHitTest@BamoTestCommandsProxyImpl@BamoImpl@@AEAAX_J0PEBG@Z @ 0x18011E518 (-LogSendRequestHitTest@BamoTestCommandsProxyImpl@BamoImpl@@AEAAX_J0PEBG@Z.c)
 */

__int64 __fastcall BamoImpl::BamoTestCommandsProxyImpl::RequestHitTest(
        BamoImpl::BamoTestCommandsProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v8; // r10
  int v10; // eax
  unsigned int v11; // edi
  struct IMessageCallSendHost *v12; // rdi
  char *v13; // rax
  unsigned int v14; // [rsp+50h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v15[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v17; // [rsp+A0h] [rbp+30h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA64B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v8 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA654,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v15[0] = 0LL;
    v17 = 0;
    v14 = 0;
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v15, &v17, &v14);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = v15[0];
      if ( *((_BYTE *)this + 31) )
      {
        v13 = (char *)v15[0] - 16;
        if ( !v15[0] )
          v13 = 0LL;
        v13[72] = 1;
      }
      BamoImpl::BamoTestCommandsProxyImpl::LogSendRequestHitTest(this, a2, a3, (const unsigned __int16 *)a4);
      v15[0] = (struct IMessageCallSendHost *)v17;
      v15[1] = (struct IMessageCallSendHost *)v14;
      return CoreUICallSend(v12, v15, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA65B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
}
