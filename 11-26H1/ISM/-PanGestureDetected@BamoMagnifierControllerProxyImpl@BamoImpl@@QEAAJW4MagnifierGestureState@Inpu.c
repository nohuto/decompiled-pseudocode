/*
 * XREFs of ?PanGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x18015B584
 * Callers:
 *     ?PanGestureDetected@BamoMagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18015B518 (-PanGestureDetected@BamoMagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendPanGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@AEAAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x18015B2F4 (-LogSendPanGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@AEAAXW4MagnifierGestureSta.c)
 */

__int64 __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::PanGestureDetected(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4)
{
  char *v4; // rbx
  __int64 v9; // r10
  int v11; // eax
  unsigned int v12; // esi
  struct IMessageCallSendHost *v13; // rsi
  struct IMessageCallSendHost *v14; // xmm0_8
  unsigned int v15; // [rsp+50h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v19; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x53EE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53F7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v16 = 0LL;
    v19 = 0;
    v15 = 0;
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            &v16,
            &v19,
            &v15);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = v16;
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v16 )
          v4 = (char *)v16 - 16;
        v4[72] = 1;
      }
      BamoImpl::BamoMagnifierControllerProxyImpl::LogSendPanGestureDetected(a1, a2, a3);
      v14 = *(struct IMessageCallSendHost **)a4;
      v17[0] = v19;
      v17[1] = v15;
      v16 = v14;
      return CoreUICallSend(v13, v17, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53FE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
}
