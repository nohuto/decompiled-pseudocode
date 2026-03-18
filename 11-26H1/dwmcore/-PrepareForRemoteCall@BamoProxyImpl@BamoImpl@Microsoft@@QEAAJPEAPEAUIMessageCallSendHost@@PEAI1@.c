/*
 * XREFs of ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1802432E4
 * Callers:
 *     ?OnFirstDataRead@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x180242FF0 (-OnFirstDataRead@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1802431BC (-OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1802441FC (-OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ @ 0x180244370 (-OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ.c)
 *     ?OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x180244520 (-OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z.c)
 *     ?OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1802446B0 (-OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnReaderDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x180244830 (-OnReaderDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1802449AC (-OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18023FA30 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180242EC0 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  _DWORD *v7; // r9
  int v8; // eax
  int v9; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) || *((_BYTE *)this + 31) )
  {
    *v7 = *((_DWORD *)this + 6);
  }
  else
  {
    v8 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
           0x87B20805,
           0);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
        (const char *)(unsigned int)v8);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x171,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  *a2 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 2));
  result = 0LL;
  *a3 = *(_DWORD *)(*((_QWORD *)this + 2) + 36LL);
  return result;
}
