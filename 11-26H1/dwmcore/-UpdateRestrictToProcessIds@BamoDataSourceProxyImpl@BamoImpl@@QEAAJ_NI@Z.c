/*
 * XREFs of ?UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180252A44
 * Callers:
 *     ?Thunk_UpdateRestrictToProcessIds_5@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180252A30 (-Thunk_UpdateRestrictToProcessIds_5@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180252C20 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180161830 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180162208 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162260 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180207FBC (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessIds(
        BamoImpl::BamoDataSourceProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  Microsoft::BamoImpl::BamoProxyImpl *v3; // rsi
  void (__fastcall ***v4)(_QWORD); // rdi
  char v5; // r12
  __int64 v7; // rdi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v9; // eax
  unsigned int v10; // ebx
  _BYTE *v12; // rbp
  char *v13; // r15
  int v14; // eax
  __int64 v15; // r14
  int v16; // eax
  int v17[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = a2;
  if ( (_DWORD)a3 )
  {
    v7 = *((_QWORD *)this + 2);
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v7 + 24) + 32LL),
              *(unsigned int *)(v7 + 36),
              a3);
    v3 = Proxy;
    if ( !Proxy )
    {
      v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
             0x87B2080C,
             0);
      v10 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36E2,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v9);
      return v10;
    }
    v4 = (void (__fastcall ***)(_QWORD))((char *)Proxy - 16);
  }
  v12 = (char *)this + 28;
  v13 = (char *)this + 28;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v17,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v14 = (*(__int64 (__fastcall **)(char *, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 104LL))(
            (char *)this - 16,
            v4);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x36EE,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v14,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v17);
    v13 = (char *)this + 28;
  }
  v15 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v4;
  if ( v4 )
  {
    (**v4)(v4);
    v12 = v13;
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  if ( v3 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v3, a2, a3);
  if ( *v12 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v17,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v16 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x36FE,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v16,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v17);
  }
  if ( v5 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
