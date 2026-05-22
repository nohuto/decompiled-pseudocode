/*
 * XREFs of ?BroadcastSetQuaternionValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801036A8
 * Callers:
 *     ?BroadcastSetQuaternionValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x180103620 (-BroadcastSetQuaternionValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM@Z_NIMMMM@Z @ 0x180102024 (--$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetQuaternionValue(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( *(_QWORD *)(v5 + 64) )
    return Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float,float>(
             (__int64)this,
             (__int64 (__fastcall *)(__int64, _QWORD))BamoImpl::BamoDataSourcePrincipalImpl::CallSetQuaternionValueOnStub,
             (__int64)this,
             a2);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)v5,
    0x87B20814,
    0);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30D5,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x87B20814LL);
  return 2276591636LL;
}
