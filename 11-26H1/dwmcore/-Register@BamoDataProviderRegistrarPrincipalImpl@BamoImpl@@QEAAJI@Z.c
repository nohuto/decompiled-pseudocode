/*
 * XREFs of ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180161E00
 * Callers:
 *     ?Thunk_Register_5@?$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180242010 (-Thunk_Register_5@-$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180161830 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180162208 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801622A0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180162A70 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180207FBC (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18021C1AC (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x18023FFE8 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::Register(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // r13
  Microsoft::BamoImpl::BamoProxyImpl *v11; // rbx
  char *v12; // r15
  __int64 v13; // rax
  struct Microsoft::BamoImpl::ConnectionIndirector **v14; // rsi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v16; // eax
  unsigned int v17; // ebx
  int v19; // eax
  Microsoft::BamoImpl::CalloutWrapperObject *v20; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h] BYREF
  char v23; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v9 = *((_QWORD *)CurrentCaller + 4);
  v10 = v6;
  v11 = 0LL;
  v12 = 0LL;
  v13 = *(_QWORD *)(v9 + 24);
  v14 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v13 + 32);
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32),
              *(_DWORD *)(v9 + 36),
              a2);
    v11 = Proxy;
    if ( !Proxy )
    {
      v16 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
              0x87B2080C,
              0);
      v17 = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D3B,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v16);
      return v17;
    }
    v12 = (char *)Proxy - 16;
  }
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      &v21,
      v14);
    v19 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 80LL))(
            (char *)this - 16,
            v10,
            v12);
    v4 = v19;
    if ( v19 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v14, 0x87B2080C, 0);
    }
    else if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2D4F,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v19,
        (int)v21);
    }
    if ( v22 && (v23 & 2) != 0 )
      Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(v20);
    if ( v21 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v21);
    wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v22);
  }
  if ( v11 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v11, v7, v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D5E,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
