/*
 * XREFs of ?ResizeCancelled@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z @ 0x180126EB0
 * Callers:
 *     ?ResizeCancelled@BamoResizeControllerClientProxy@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@3456@AEBUtagPOINT@@2@Z @ 0x180126E30 (-ResizeCancelled@BamoResizeControllerClientProxy@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Wi.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendResizeCancelled@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z @ 0x18011E5B0 (-LogSendResizeCancelled@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIW4InputResizeRegion@.c)
 */

__int64 __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::ResizeCancelled(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4,
        struct IMessageCallSendHost **a5,
        struct IMessageCallSendHost **a6)
{
  char *v6; // rbx
  unsigned int v7; // r14d
  __int64 v11; // r10
  int v13; // eax
  unsigned int v14; // esi
  struct IMessageCallSendHost *v15; // rsi
  struct IMessageCallSendHost *v16; // rcx
  int v17; // [rsp+20h] [rbp-49h]
  int v18; // [rsp+28h] [rbp-41h]
  unsigned int v19; // [rsp+60h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v20[2]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v21[3]; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+4Fh]
  unsigned int v23; // [rsp+C0h] [rbp+57h] BYREF

  v6 = 0LL;
  v7 = (unsigned int)a4;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7BE4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v11 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v11 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BED,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v20[0] = 0LL;
    v23 = 0;
    v19 = 0;
    v13 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v20,
            &v23,
            &v19);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v15 = v20[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v20[0] )
          v6 = (char *)v20[0] - 16;
        v6[72] = 1;
      }
      BamoImpl::BamoResizeControllerClientProxyImpl::LogSendResizeCancelled(a1, a2, a3, v7, v17, v18);
      v20[0] = *a6;
      v16 = *a5;
      v21[0] = v23;
      v21[1] = v19;
      v20[1] = v16;
      return CoreUICallSend(v15, v21, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7BF4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13);
      return v14;
    }
  }
}
