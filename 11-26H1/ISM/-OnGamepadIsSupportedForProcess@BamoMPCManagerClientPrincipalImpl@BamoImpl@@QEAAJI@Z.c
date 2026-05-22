/*
 * XREFs of ?OnGamepadIsSupportedForProcess@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016B9D0
 * Callers:
 *     ?Thunk_OnGamepadIsSupportedForProcess_25@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016C4E0 (-Thunk_OnGamepadIsSupportedForProcess_25@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerCli.c)
 * Callees:
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036A00 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800379CC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnGamepadIsSupportedForProcess(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  __int64 v6; // r14
  __int64 v7; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v8; // rbx
  int v9; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v7 = *(_QWORD *)(*((_QWORD *)CurrentCaller + 4) + 24LL);
  v8 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v7 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v7 + 32));
    v9 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v6, a2);
    v4 = v9;
    if ( v9 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v8, 0x87B2080C, 0);
    }
    else if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E6C,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v11);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E70,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v4;
}
