/*
 * XREFs of ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ @ 0x180244370
 * Callers:
 *     ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ @ 0x180244330 (-OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180242EC0 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1802432E4 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnAllReadersDisconnected(
        BamoImpl::BamoDataProviderProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r8
  int v7; // eax
  unsigned int v8; // edi
  struct IMessageCallSendHost *v9; // rcx
  char *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  _QWORD savedregs[3]; // [rsp+40h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v14; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+28h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+70h] [rbp+30h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B2F,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
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
      (void *)0x2B38,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v16 = 0LL;
    v14 = 0;
    v15 = 0;
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v16, &v14, &v15);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v16;
      if ( *((_BYTE *)this + 31) )
      {
        v10 = (char *)v16 - 16;
        if ( !v16 )
          v10 = 0LL;
        v10[72] = 1;
      }
      return CoreUICallSend(v9, &v11, 2LL, 0LL, 2, &unk_180373363, v14, v15, savedregs[0]);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B3F,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
