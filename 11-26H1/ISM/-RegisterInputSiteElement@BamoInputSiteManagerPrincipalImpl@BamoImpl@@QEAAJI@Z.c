/*
 * XREFs of ?RegisterInputSiteElement@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18003D570
 * Callers:
 *     ?Thunk_RegisterInputSiteElement_8@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18003D560 (-Thunk_RegisterInputSiteElement_8@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrin.c)
 * Callees:
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@@Z @ 0x180036CD8 (--0-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180037644 (--1-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D8AC (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveRegisterInputSiteElement@BamoInputSiteManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputSiteElementProxy@@@Z @ 0x18008BFA4 (-LogReceiveRegisterInputSiteElement@BamoInputSiteManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElement(
        BamoImpl::BamoInputSiteManagerPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  __int64 v6; // r13
  Microsoft::BamoImpl::BaseBamoPeerImpl *v7; // r14
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v9; // rbx
  struct BamoInputSiteElementProxy *v10; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  int v16; // eax
  unsigned int v17; // ebx
  int v18[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v7 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v8 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v7 + 3) + 32LL);
  v9 = 0LL;
  v10 = 0LL;
  if ( !a2 )
    goto LABEL_4;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v7, a2);
  v9 = Proxy;
  if ( Proxy )
  {
    v10 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
LABEL_4:
    BamoImpl::BamoInputSiteManagerPrincipalImpl::LogReceiveRegisterInputSiteElement(this, v10);
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
        (__int64)v18,
        v8,
        (void (__fastcall ***)(_QWORD))this);
      v14 = (*(__int64 (__fastcall **)(char *, __int64, struct BamoInputSiteElementProxy *))(*((_QWORD *)this - 2)
                                                                                           + 112LL))(
              (char *)this - 16,
              v6,
              v10);
      v4 = v14;
      if ( v14 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v8, -2018375668, 0);
      }
      else if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x80F3,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBam"
                        "os_Shared.bamo.h",
          (const char *)(unsigned int)v14,
          v18[0]);
      }
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>((__int64)v18);
    }
    if ( v9 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v9, v12, v13);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8102,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v4,
        v18[0]);
    return (unsigned int)v4;
  }
  v16 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v7 + 3) + 32LL),
          -2018375668,
          0);
  v17 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80DD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v16,
      v18[0]);
  return v17;
}
