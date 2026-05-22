/*
 * XREFs of ?Docked@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180198CE0
 * Callers:
 *     ?Docked@BamoPenEventsClientProxy@@UEAAJ_N@Z @ 0x180198C90 (-Docked@BamoPenEventsClientProxy@@UEAAJ_N@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendDocked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1801996D4 (-LogSendDocked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 */

__int64 __fastcall BamoImpl::BamoPenEventsClientProxyImpl::Docked(
        BamoImpl::BamoPenEventsClientProxyImpl *this,
        bool a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  __int64 v7; // r8
  int v9; // eax
  unsigned int v10; // esi
  struct IMessageCallSendHost *v11; // rsi
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v14; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6984,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x698D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v16 = 0LL;
    v14 = 0;
    v15 = 0;
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v16, &v14, &v15);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v16;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v16 )
          v4 = (char *)v16 - 16;
        v4[72] = 1;
      }
      BamoImpl::BamoPenEventsClientProxyImpl::LogSendDocked(this, a2);
      v12[0] = v14;
      v12[1] = v15;
      return CoreUICallSend(v11, v12, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6994,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
