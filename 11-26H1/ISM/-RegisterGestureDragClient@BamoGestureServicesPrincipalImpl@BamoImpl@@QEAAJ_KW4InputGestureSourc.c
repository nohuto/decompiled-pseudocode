/*
 * XREFs of ?RegisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJ_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@I@Z @ 0x18003D3A4
 * Callers:
 *     ?Thunk_RegisterGestureDragClient_225@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180146A90 (-Thunk_RegisterGestureDragClient_225@-$IGestureServicesPrincipal_Receive@VBamoGestureServicesPri.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D8AC (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x18003DB04 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003DBDC (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveRegisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientProxy@@@Z @ 0x180097900 (-LogReceiveRegisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAX_KW4InputGe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::RegisterGestureDragClient(
        int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v8; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v10; // r14
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v12; // rbx
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r8
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // [rsp+20h] [rbp-68h]
  int v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  _BYTE v24[24]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller((Microsoft::BamoImpl::BamoPrincipalImpl *)a1);
  v23 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v10 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v11 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v10 + 3) + 32LL);
  v12 = 0LL;
  v13 = 0;
  if ( !a5 )
    goto LABEL_2;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v10, a5);
  v12 = Proxy;
  if ( Proxy )
  {
    v13 = (_DWORD)Proxy - 16;
LABEL_2:
    v22 = v13;
    BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveRegisterGestureDragClient(a1, a2, a3, a4);
    if ( a1[2] > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
        v24,
        v11,
        a1);
      v22 = a4;
      v20 = (*(__int64 (__fastcall **)(int *, __int64, __int64, _QWORD))(*((_QWORD *)a1 - 2) + 144LL))(
              a1 - 4,
              v23,
              a2,
              a3);
      v8 = v20;
      if ( v20 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v11, -2018375668, 0);
      }
      else if ( v20 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE6F0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v20,
          a4);
      }
      Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>(v24);
    }
    if ( v12 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v12, v14, v15);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE6FF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v22);
    return (unsigned int)v8;
  }
  v18 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v10 + 3) + 32LL),
          -2018375668,
          0);
  v19 = v18;
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6DA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v18,
      v21);
  return v19;
}
