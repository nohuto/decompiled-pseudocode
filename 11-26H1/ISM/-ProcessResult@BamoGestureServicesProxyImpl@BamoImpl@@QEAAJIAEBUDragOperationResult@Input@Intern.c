/*
 * XREFs of ?ProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientPrincipal@@@Z @ 0x180123F2C
 * Callers:
 *     ?ProcessResult@BamoGestureServicesProxy@@UEAAJIAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientPrincipal@@@Z @ 0x180123EC0 (-ProcessResult@BamoGestureServicesProxy@@UEAAJIAEBUDragOperationResult@Input@Internal@UI@Windows.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180074F58 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC6B0 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIAEBUDragOperationResult@Input@Internal@UI@Windows@@I@Z @ 0x18011DE7C (-LogSendProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIAEBUDragOperationResult@Input.c)
 */

__int64 __fastcall BamoImpl::BamoGestureServicesProxyImpl::ProcessResult(
        BamoImpl::BamoGestureServicesProxyImpl *this,
        unsigned int a2,
        struct IMessageCallSendHost **a3,
        struct BamoDragManagerClientPrincipal *a4)
{
  __int64 **v4; // rbx
  __int64 v9; // r10
  int v11; // eax
  const struct Windows::UI::Internal::Input::DragOperationResult *v12; // r8
  unsigned int v13; // esi
  struct IMessageCallSendHost *v14; // rsi
  unsigned int v15; // [rsp+50h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v19; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xEB13,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB1C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a4 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        a4);
    v16 = 0LL;
    v19 = 0;
    v15 = 0;
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v16, &v19, &v15);
    v13 = v11;
    if ( v11 >= 0 )
    {
      v14 = v16;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v16 )
          v4 = (__int64 **)((char *)v16 - 16);
        *((_BYTE *)v4 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v4, a4);
      }
      BamoImpl::BamoGestureServicesProxyImpl::LogSendProcessResult(this, a2, v12);
      v16 = *a3;
      v17[0] = v19;
      v17[1] = v15;
      return CoreUICallSend(v14, v17, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEB24,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v13;
    }
  }
}
