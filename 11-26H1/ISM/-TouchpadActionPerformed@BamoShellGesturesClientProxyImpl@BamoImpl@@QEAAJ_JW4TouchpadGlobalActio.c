/*
 * XREFs of ?TouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x18015D8C0
 * Callers:
 *     ?TouchpadActionPerformed@BamoShellGesturesClientProxy@@UEAAJ_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x18015D860 (-TouchpadActionPerformed@BamoShellGesturesClientProxy@@UEAAJ_JW4TouchpadGlobalAction@Input@Inter.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendTouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@AEAAX_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x18015CE78 (-LogSendTouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@AEAAX_JW4TouchpadGlob.c)
 */

__int64 __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::TouchpadActionPerformed(__int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // r9
  int v5; // eax
  unsigned int v6; // edi
  struct IMessageCallSendHost *v7; // rdi
  char *v8; // rax
  struct IMessageCallSendHost *v9[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v11; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v1 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x81B5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v1);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v3 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v3 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81BE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v9[0] = 0LL;
    v11 = 0;
    v12 = 0;
    v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v9,
           &v11,
           &v12);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v9[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v8 = (char *)v9[0] - 16;
        if ( !v9[0] )
          v8 = 0LL;
        v8[72] = 1;
      }
      BamoImpl::BamoShellGesturesClientProxyImpl::LogSendTouchpadActionPerformed();
      v9[0] = (struct IMessageCallSendHost *)v11;
      v9[1] = (struct IMessageCallSendHost *)v12;
      return CoreUICallSend(v7, v9, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81C5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
}
