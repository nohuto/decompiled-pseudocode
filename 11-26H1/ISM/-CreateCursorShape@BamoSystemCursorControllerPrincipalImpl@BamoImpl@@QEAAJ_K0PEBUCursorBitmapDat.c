/*
 * XREFs of ?CreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F842C
 * Callers:
 *     ?Thunk_CreateCursorShape_394@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F9A30 (-Thunk_CreateCursorShape_394@-$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControl.c)
 * Callees:
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x18003DB04 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003DBDC (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveCreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAX_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F8FE8 (-LogReceiveCreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAX_K0PEBUCurso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::CreateCursorShape(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        const struct CursorBitmapDataHeader *a4,
        unsigned int a5,
        const unsigned __int8 *a6,
        unsigned int a7)
{
  int v7; // r13d
  int v11; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  struct Microsoft::BamoImpl::ConnectionIndirector **v13; // rbx
  const struct CursorBitmapDataHeader *v14; // r9
  int v15; // eax
  const unsigned __int8 *v17; // [rsp+28h] [rbp-70h]
  _BYTE v18[32]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v20; // [rsp+A0h] [rbp+8h]

  v7 = (int)a4;
  v11 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v20 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v13 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(*((_QWORD *)CurrentCaller + 4) + 24LL) + 32LL);
  BamoImpl::BamoSystemCursorControllerPrincipalImpl::LogReceiveCreateCursorShape(this, a2, a3, v14, a5, v17, a7);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v18,
      (__int64)v13,
      (__int64)this);
    v15 = (*(__int64 (__fastcall **)(char *, __int64, unsigned __int64, unsigned __int64))(*((_QWORD *)this - 2) + 152LL))(
            (char *)this - 16,
            v20,
            a2,
            a3);
    v11 = v15;
    if ( v15 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v13, 0x87B2080C, 0);
    }
    else if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9AF6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15,
        v7);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v18);
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9AFA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
  }
  return (unsigned int)v11;
}
