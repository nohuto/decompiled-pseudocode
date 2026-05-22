/*
 * XREFs of ?RequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x1801A6CC0
 * Callers:
 *     ?Thunk_RequestHitTest_33@?$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801A6F40 (-Thunk_RequestHitTest_33@-$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImp.c)
 * Callees:
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x18003DB04 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003DBDC (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveRequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@AEAAX_J0PEBG@Z @ 0x1801A6A44 (-LogReceiveRequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@AEAAX_J0PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoTestCommandsPrincipalImpl::RequestHitTest(
        BamoImpl::BamoTestCommandsPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  int v8; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  __int64 v10; // r12
  struct Microsoft::BamoImpl::ConnectionIndirector **v11; // rbx
  int v12; // eax
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v10 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v11 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(*((_QWORD *)CurrentCaller + 4) + 24LL) + 32LL);
  BamoImpl::BamoTestCommandsPrincipalImpl::LogReceiveRequestHitTest(this, a2, a3, a4);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v14,
      (__int64)v11,
      (__int64)this);
    v12 = (*(__int64 (__fastcall **)(char *, __int64, __int64, __int64))(*((_QWORD *)this - 2) + 112LL))(
            (char *)this - 16,
            v10,
            a2,
            a3);
    v8 = v12;
    if ( v12 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v11, 0x87B2080C, 0);
    }
    else if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA47B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12,
        (int)a4);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v14);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA47F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
  }
  return (unsigned int)v8;
}
