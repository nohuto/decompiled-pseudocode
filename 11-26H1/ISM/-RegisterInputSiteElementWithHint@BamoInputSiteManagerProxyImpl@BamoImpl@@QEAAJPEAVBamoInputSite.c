/*
 * XREFs of ?RegisterInputSiteElementWithHint@BamoInputSiteManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputSiteElementPrincipal@@AEBUInputSiteId@@@Z @ 0x1801263A0
 * Callers:
 *     ?RegisterInputSiteElementWithHint@BamoInputSiteManagerProxy@@UEAAJPEAVBamoInputSiteElementPrincipal@@AEBUInputSiteId@@@Z @ 0x180126340 (-RegisterInputSiteElementWithHint@BamoInputSiteManagerProxy@@UEAAJPEAVBamoInputSiteElementPrinci.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180074F58 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC6B0 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendRegisterInputSiteElementWithHint@BamoInputSiteManagerProxyImpl@BamoImpl@@AEAAXIAEBUInputSiteId@@@Z @ 0x18011E2AC (-LogSendRegisterInputSiteElementWithHint@BamoInputSiteManagerProxyImpl@BamoImpl@@AEAAXIAEBUInput.c)
 */

__int64 __fastcall BamoImpl::BamoInputSiteManagerProxyImpl::RegisterInputSiteElementWithHint(
        BamoImpl::BamoInputSiteManagerProxyImpl *this,
        struct BamoInputSiteElementPrincipal *a2,
        const struct InputSiteId *a3)
{
  __int64 v3; // r9
  __int64 **v4; // rbx
  __int64 v8; // r9
  unsigned int v10; // r15d
  int v11; // eax
  const struct InputSiteId *v12; // r8
  unsigned int v13; // esi
  struct IMessageCallSendHost *v14; // rsi
  __int128 v15; // xmm0
  struct IMessageCallSendHost *v16[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v19; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+58h] BYREF

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  if ( *(_DWORD *)(v3 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8360,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)v3);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v8 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8369,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a2 )
      v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
              a2);
    else
      v10 = 0;
    v16[0] = 0LL;
    v19 = 0;
    v20 = 0;
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v16, &v19, &v20);
    v13 = v11;
    if ( v11 >= 0 )
    {
      v14 = v16[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v16[0] )
          v4 = (__int64 **)((char *)v16[0] - 16);
        *((_BYTE *)v4 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v4, a2);
      }
      BamoImpl::BamoInputSiteManagerProxyImpl::LogSendRegisterInputSiteElementWithHint(this, v10, v12);
      v15 = *(_OWORD *)a3;
      v16[0] = (struct IMessageCallSendHost *)v19;
      v16[1] = (struct IMessageCallSendHost *)v20;
      v17 = v15;
      return CoreUICallSend(v14, v16, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8371,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v11);
      return v13;
    }
  }
}
