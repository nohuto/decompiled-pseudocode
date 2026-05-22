/*
 * XREFs of ?UnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJ_KI@Z @ 0x18003D200
 * Callers:
 *     ?Thunk_UnregisterGestureDragClient_231@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180146B80 (-Thunk_UnregisterGestureDragClient_231@-$IGestureServicesPrincipal_Receive@VBamoGestureServicesP.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D8AC (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18003DB30 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microso_ea_18003DB30.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003DBDC (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveUnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAX_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18008D5E8 (-LogReceiveUnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAX_KPEAVBam.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::UnregisterGestureDragClient(
        BamoImpl::BamoGestureServicesPrincipalImpl *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  int v6; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v8; // r14
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v10; // rbx
  struct BamoDragManagerClientProxy *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // [rsp+20h] [rbp-58h]
  _BYTE v20[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v22; // [rsp+98h] [rbp+20h]

  v6 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v22 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v8 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v8 + 3) + 32LL);
  v10 = 0LL;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v8, a3);
  v10 = Proxy;
  if ( Proxy )
  {
    v11 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
LABEL_2:
    BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveUnregisterGestureDragClient(this, a2, v11);
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
        v20,
        v9,
        this,
        this != 0LL ? 3 : 0);
      v14 = (*(__int64 (__fastcall **)(char *, __int64, unsigned __int64, struct BamoDragManagerClientProxy *))(*((_QWORD *)this - 2) + 152LL))(
              (char *)this - 16,
              v22,
              a2,
              v11);
      v6 = v14;
      if ( v14 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v9, -2018375668, 0);
      }
      else if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE733,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v14,
          v19);
      }
      Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>(v20);
    }
    if ( v10 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v10, v12, v13);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE742,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v6,
        v19);
    return (unsigned int)v6;
  }
  v17 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v8 + 3) + 32LL),
          -2018375668,
          0);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE71D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v17,
      v19);
  return v18;
}
