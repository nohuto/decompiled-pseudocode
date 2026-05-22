/*
 * XREFs of ?RegisterInputSiteElement@BamoInputSiteManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputSiteElementPrincipal@@@Z @ 0x1801261D0
 * Callers:
 *     ?RegisterInputSiteElement@BamoInputSiteManagerProxy@@UEAAJPEAVBamoInputSiteElementPrincipal@@@Z @ 0x180126180 (-RegisterInputSiteElement@BamoInputSiteManagerProxy@@UEAAJPEAVBamoInputSiteElementPrincipal@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180074F58 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC6B0 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendRegisterInputSiteElement@BamoInputSiteManagerProxyImpl@BamoImpl@@AEAAXI@Z @ 0x18011E234 (-LogSendRegisterInputSiteElement@BamoInputSiteManagerProxyImpl@BamoImpl@@AEAAXI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoInputSiteManagerProxyImpl::RegisterInputSiteElement(
        BamoImpl::BamoInputSiteManagerProxyImpl *this,
        struct BamoInputSiteElementPrincipal *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // esi
  struct IMessageCallSendHost *v10; // rsi
  __int64 **v11; // rcx
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v14; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8323,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x832C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a2 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        a2);
    v16 = 0LL;
    v14 = 0;
    v15 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v16, &v14, &v15);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v16;
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (__int64 **)((char *)v16 - 16);
        if ( !v16 )
          v11 = 0LL;
        *((_BYTE *)v11 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v11, a2);
      }
      BamoImpl::BamoInputSiteManagerProxyImpl::LogSendRegisterInputSiteElement(this);
      v12[0] = v14;
      v12[1] = v15;
      return CoreUICallSend(v10, v12, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8334,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
