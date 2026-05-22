/*
 * XREFs of ?ReceivingInput@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180138DB0
 * Callers:
 *     ?ReceivingInput@BamoVirtualTouchpadControllerProxy@@UEAAJ_N@Z @ 0x180138D60 (-ReceivingInput@BamoVirtualTouchpadControllerProxy@@UEAAJ_N@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendReceivingInput@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1801385E8 (-LogSendReceivingInput@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 */

__int64 __fastcall BamoImpl::BamoVirtualTouchpadControllerProxyImpl::ReceivingInput(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r8
  int v7; // eax
  unsigned int v8; // edi
  struct IMessageCallSendHost *v9; // rdi
  char *v10; // rax
  _QWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v13; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB0B1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v5 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0BA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v15 = 0LL;
    v13 = 0;
    v14 = 0;
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v15, &v13, &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v15;
      if ( *((_BYTE *)this + 31) )
      {
        v10 = (char *)v15 - 16;
        if ( !v15 )
          v10 = 0LL;
        v10[72] = 1;
      }
      BamoImpl::BamoVirtualTouchpadControllerProxyImpl::LogSendReceivingInput(this);
      v11[0] = v13;
      v11[1] = v14;
      return CoreUICallSend(v9, v11, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0C1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
