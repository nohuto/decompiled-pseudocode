/*
 * XREFs of ?OnEnumerationCompleted@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801873F0
 * Callers:
 *     ?OnEnumerationCompleted@BamoDeviceDockClientProxy@@UEAAJXZ @ 0x1801873B0 (-OnEnumerationCompleted@BamoDeviceDockClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendOnEnumerationCompleted@BamoDeviceDockClientProxyImpl@BamoImpl@@AEAAXXZ @ 0x180186A20 (-LogSendOnEnumerationCompleted@BamoDeviceDockClientProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

__int64 __fastcall BamoImpl::BamoDeviceDockClientProxyImpl::OnEnumerationCompleted(
        BamoImpl::BamoDeviceDockClientProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // esi
  struct IMessageCallSendHost *v10; // rsi
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v13; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+28h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB055,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
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
      (void *)0xB05E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v15 = 0LL;
    v13 = 0;
    v14 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v15, &v13, &v14);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v15;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v15 )
          v4 = (char *)v15 - 16;
        v4[72] = 1;
      }
      BamoImpl::BamoDeviceDockClientProxyImpl::LogSendOnEnumerationCompleted(this);
      v11[0] = v13;
      v11[1] = v14;
      return CoreUICallSend(v10, v11, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB065,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
