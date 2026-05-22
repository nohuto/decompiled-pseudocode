/*
 * XREFs of ?ProcessResult@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBUDragOperationResult@Input@Internal@UI@Windows@@I@Z @ 0x180145D54
 * Callers:
 *     ?Thunk_ProcessResult_218@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180146A70 (-Thunk_ProcessResult_218@-$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@B.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D8AC (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x18003DB04 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003DBDC (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveProcessResult@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXIAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180145944 (-LogReceiveProcessResult@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXIAEBUDragOperationResul.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::ProcessResult(
        BamoImpl::BamoGestureServicesPrincipalImpl *this,
        unsigned int a2,
        const struct Windows::UI::Internal::Input::DragOperationResult *a3,
        unsigned int a4)
{
  int v7; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  const struct Windows::UI::Internal::Input::DragOperationResult *v9; // r8
  Microsoft::BamoImpl::BaseBamoPeerImpl *v10; // r14
  struct Microsoft::BamoImpl::ConnectionIndirector **v11; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v12; // rbx
  struct BamoDragManagerClientProxy *v13; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-48h]
  _BYTE v22[24]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v21 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v10 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v11 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v10 + 3) + 32LL);
  v12 = 0LL;
  v13 = 0LL;
  if ( a4 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v10, a4);
    v12 = Proxy;
    if ( !Proxy )
    {
      v15 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v10 + 3) + 32LL),
              0x87B2080C,
              0);
      v16 = v15;
      if ( v15 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE695,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v15);
      return v16;
    }
    v13 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
  }
  BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveProcessResult(this, a2, v9, v13);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v22,
      (__int64)v11,
      (__int64)this);
    v20 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, const struct Windows::UI::Internal::Input::DragOperationResult *))(*((_QWORD *)this - 2) + 136LL))(
            (char *)this - 16,
            v21,
            a2,
            a3);
    v7 = v20;
    if ( v20 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v11, 0x87B2080C, 0);
    }
    else if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE6AB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v20,
        (int)v13);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v22);
  }
  if ( v12 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v12, v18, v19);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6BA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
