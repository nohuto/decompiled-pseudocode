/*
 * XREFs of ?UpdateAttachableInputObjectSample@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18003A924
 * Callers:
 *     ?Thunk_UpdateAttachableInputObjectSample_8@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18003A910 (-Thunk_UpdateAttachableInputObjectSample_8@-$IInputSiteElementProxy_Receive@VBamoInputSiteElemen.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180133650 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180037930 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellGesturesClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180038638 (--0-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft_ea_180038638.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D8AC (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnAttachableInputObjectSampleChanged@BamoInputSiteElementProxy@@AEAAXXZ @ 0x18008C70C (-LogOnAttachableInputObjectSampleChanged@BamoInputSiteElementProxy@@AEAAXXZ.c)
 *     ?LogOnAttachableInputObjectSampleChanging@BamoInputSiteElementProxy@@AEAAXPEAVBamoAttachableInputObjectSampleProxy@@@Z @ 0x18008CCF0 (-LogOnAttachableInputObjectSampleChanging@BamoInputSiteElementProxy@@AEAAXPEAVBamoAttachableInpu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateAttachableInputObjectSample(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        char a2,
        unsigned int a3)
{
  __int64 v5; // rbx
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rbp
  struct BamoAttachableInputObjectSampleProxy *v7; // rsi
  __int64 v8; // rbx
  int v10; // eax
  int v11; // eax
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 2), a3);
  v6 = Proxy;
  if ( Proxy )
  {
    v7 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
LABEL_2:
    if ( *((_BYTE *)this + 28) )
    {
      BamoInputSiteElementProxy::LogOnAttachableInputObjectSampleChanging(
        (BamoImpl::BamoInputSiteElementProxyImpl *)((char *)this - 16),
        v7);
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
        (__int64)v15,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
        (void (__fastcall ***)(_QWORD))this,
        1);
      v11 = (*(__int64 (__fastcall **)(char *, struct BamoAttachableInputObjectSampleProxy *))(*((_QWORD *)this - 2)
                                                                                             + 216LL))(
              (char *)this - 16,
              v7);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2880,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v11,
          v15[0]);
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v15);
    }
    v8 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = v7;
    if ( v7 )
      (**(void (__fastcall ***)(struct BamoAttachableInputObjectSampleProxy *))v7)(v7);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v6 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6);
    if ( *((_BYTE *)this + 28) )
    {
      BamoInputSiteElementProxy::LogOnAttachableInputObjectSampleChanged((BamoImpl::BamoInputSiteElementProxyImpl *)((char *)this - 16));
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
        (__int64)v15,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
        (void (__fastcall ***)(_QWORD))this,
        2);
      v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 224LL))((char *)this - 16);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2893,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v10,
          v15[0]);
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v15);
    }
    if ( a2 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(this);
    return 0LL;
  }
  v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL),
          -2018375668,
          0);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2871,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v13,
      v15[0]);
  return v14;
}
