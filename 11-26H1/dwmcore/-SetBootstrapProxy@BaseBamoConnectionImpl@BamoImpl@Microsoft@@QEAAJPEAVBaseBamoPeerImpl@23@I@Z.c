/*
 * XREFs of ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180240BD0
 * Callers:
 *     ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180241140 (-Thunk_SetBootstrapProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180161830 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1801DC2F0 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180207FBC (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3)
{
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64); // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(this, *((unsigned int *)a2 + 9), a3);
  v5 = Proxy;
  if ( Proxy )
  {
    v9 = *((_QWORD *)this + 2);
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 64LL);
    v11 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)Proxy + 56LL))(Proxy);
    v12 = v10(v9, v11);
    v7 = v12;
    if ( v12 < 0 )
    {
      if ( v12 != -2018375668 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x73A,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v12,
          v15);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
        0x87B2080C,
        0);
    }
    else if ( *((_BYTE *)v5 + 30) )
    {
      Microsoft::BamoImpl::BamoProxyImpl::Disconnect(v5, 0);
    }
    else
    {
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v5, v13, v14);
    }
  }
  else
  {
    v6 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2080C,
           0);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70B,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v6);
  }
  return v7;
}
