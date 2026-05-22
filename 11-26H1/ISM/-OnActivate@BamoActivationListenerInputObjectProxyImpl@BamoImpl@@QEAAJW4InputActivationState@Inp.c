/*
 * XREFs of ?OnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x18003677C
 * Callers:
 *     ?OnActivate@BamoActivationListenerInputObjectProxy@@UEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x180036980 (-OnActivate@BamoActivationListenerInputObjectProxy@@UEAAJW4InputActivationState@Input@UI@Windows.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800366D4 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?LogSendOnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@AEAAXW4InputActivationState@Input@UI@Windows@@@Z @ 0x18008B954 (-LogSendOnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@AEAAXW4InputActivationSt.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoActivationListenerInputObjectProxyImpl::OnActivate(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  __int64 v7; // r8
  _BYTE *v8; // rdi
  unsigned int v9; // ebp
  struct IMessageCallSendHost *SendHost; // rax
  struct IMessageCallSendHost *v11; // rsi
  __int64 v12; // r14
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]
  _QWORD v19[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x75A5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v6 + 24) + 32LL),
        -2018375660,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75AE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v17);
    return 2276591636LL;
  }
  else
  {
    v8 = (_BYTE *)(a1 + 31);
    if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) || *v8 )
    {
      v9 = *(_DWORD *)(a1 + 24);
    }
    else
    {
      v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v7 + 24) + 32LL),
              -2018375675,
              0);
      v15 = v14;
      if ( v14 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18B,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
          (const char *)(unsigned int)v14,
          v17);
      v9 = 0;
      if ( (v15 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x171,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
          (const char *)v15,
          v17);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x75B5,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v15,
          v18);
        return v15;
      }
    }
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*(Microsoft::BamoImpl::BaseBamoPeerImpl **)(a1 + 16));
    v11 = SendHost;
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 36LL);
    if ( *v8 )
    {
      v16 = (__int64)SendHost + 56;
      if ( !SendHost )
        v16 = 72LL;
      *(_BYTE *)v16 = 1;
    }
    BamoImpl::BamoActivationListenerInputObjectProxyImpl::LogSendOnActivate(a1, a2);
    v19[1] = v9;
    v19[0] = v12;
    return CoreUICallSend(v11, v19, 2LL);
  }
}
