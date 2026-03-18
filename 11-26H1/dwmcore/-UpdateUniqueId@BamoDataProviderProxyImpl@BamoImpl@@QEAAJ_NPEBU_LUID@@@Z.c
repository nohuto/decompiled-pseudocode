/*
 * XREFs of ?UpdateUniqueId@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x1801E1ED8
 * Callers:
 *     ?Thunk_UpdateUniqueId_12@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180218400 (-Thunk_UpdateUniqueId_12@-$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJ.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180252C00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAVBamoPro.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180161830 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180162208 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162260 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateUniqueId(
        BamoImpl::BamoDataProviderProxyImpl *this,
        __int64 a2,
        const struct _LUID *a3)
{
  char *v3; // rdi
  char v5; // bp
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (char *)this - 16;
  v5 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v7 = (*(__int64 (__fastcall **)(char *, const struct _LUID *))(*(_QWORD *)v3 + 88LL))(v3, a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2C12,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v7,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v11);
  }
  v8 = *((_BYTE *)this + 28) == 0;
  *((struct _LUID *)this + 4) = *a3;
  if ( !v8 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 96LL))(v3);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2C1D,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v11);
  }
  if ( v5 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
