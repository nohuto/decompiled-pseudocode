/*
 * XREFs of ?RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSiteId@@@Z @ 0x18003D6E8
 * Callers:
 *     ?Thunk_RegisterInputSiteElementWithHint_268@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801331A0 (-Thunk_RegisterInputSiteElementWithHint_268@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteM.c)
 * Callees:
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@@Z @ 0x180036CD8 (--0-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180037644 (--1-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D8AC (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveRegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x18008BA58 (-LogReceiveRegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@AEAAXPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElementWithHint(
        BamoImpl::BamoInputSiteManagerPrincipalImpl *this,
        unsigned int a2,
        const struct InputSiteId *a3)
{
  int v6; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  const struct InputSiteId *v8; // r8
  Microsoft::BamoImpl::BaseBamoPeerImpl *v9; // r14
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v11; // rbx
  struct BamoInputSiteElementProxy *v12; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // [rsp+20h] [rbp-58h]
  _BYTE v21[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v23; // [rsp+98h] [rbp+20h]

  v6 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v23 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v9 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v10 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v9 + 3) + 32LL);
  v11 = 0LL;
  v12 = 0LL;
  if ( !a2 )
    goto LABEL_4;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v9, a2);
  v11 = Proxy;
  if ( Proxy )
  {
    v12 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
LABEL_4:
    BamoImpl::BamoInputSiteManagerPrincipalImpl::LogReceiveRegisterInputSiteElementWithHint(this, v12, v8);
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
        (__int64)v21,
        v10,
        (void (__fastcall ***)(_QWORD))this);
      v17 = (*(__int64 (__fastcall **)(char *, __int64, struct BamoInputSiteElementProxy *, const struct InputSiteId *))(*((_QWORD *)this - 2) + 120LL))(
              (char *)this - 16,
              v23,
              v12,
              a3);
      v6 = v17;
      if ( v17 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v10, -2018375668, 0);
      }
      else if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8136,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBam"
                        "os_Shared.bamo.h",
          (const char *)(unsigned int)v17,
          v20);
      }
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>((__int64)v21);
    }
    if ( v11 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v11, v14, v15);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8145,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v6,
        v20);
    return (unsigned int)v6;
  }
  v18 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v9 + 3) + 32LL),
          -2018375668,
          0);
  v19 = v18;
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8120,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v18,
      v20);
  return v19;
}
