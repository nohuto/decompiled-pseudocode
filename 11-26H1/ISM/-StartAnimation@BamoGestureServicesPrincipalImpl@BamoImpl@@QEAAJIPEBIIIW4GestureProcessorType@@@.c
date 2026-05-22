/*
 * XREFs of ?StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@Z @ 0x180146208
 * Callers:
 *     ?Thunk_StartAnimation_211@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180146AF0 (-Thunk_StartAnimation_211@-$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D8AC (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x18003DB04 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003DBDC (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x1800955B0 (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x180097744 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 *     ?LogReceiveStartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXIPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180145A98 (-LogReceiveStartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXIPEBQEAVBamoAnimationT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::StartAnimation(
        int *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // rbp
  int v8; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v10; // r14
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // r12
  _QWORD *Buffer; // rsi
  __int64 v13; // r8
  __int64 i; // rbx
  unsigned int v15; // edx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  Microsoft::BamoImpl::BamoProxyImpl *v20; // rbx
  __int64 v21; // r15
  struct Microsoft::BamoImpl::BamoProxyImpl *v22; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  _QWORD *v27; // r14
  __int64 v28; // [rsp+40h] [rbp-68h]
  _BYTE v29[80]; // [rsp+58h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v6 = a4;
  v8 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller((Microsoft::BamoImpl::BamoPrincipalImpl *)a1);
  v28 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v10 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v11 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v10 + 3) + 32LL);
  Buffer = Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(v11, 8 * (int)v6);
  for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
  {
    Buffer[i] = 0LL;
    v15 = *(_DWORD *)(a3 + 4 * i);
    if ( v15 )
    {
      Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v10, v15);
      if ( !Proxy )
      {
        v17 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
                *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v10 + 3) + 32LL),
                0x87B2080C,
                0);
        v18 = v17;
        if ( v17 < 0 )
        {
          v19 = 58931LL;
          goto LABEL_13;
        }
        goto LABEL_14;
      }
      Buffer[i] = (char *)Proxy - 16;
    }
  }
  v20 = 0LL;
  v21 = 0LL;
  if ( a5 )
  {
    v22 = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v10, a5);
    v20 = v22;
    if ( !v22 )
    {
      v17 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v10 + 3) + 32LL),
              0x87B2080C,
              0);
      v18 = v17;
      if ( v17 < 0 )
      {
        v19 = 58953LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v17);
      }
LABEL_14:
      Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v11, Buffer);
      return v18;
    }
    v21 = (__int64)v22 - 16;
  }
  BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveStartAnimation((__int64)a1, a2, v13, (unsigned int)v6, v21, a6);
  if ( a1[2] > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v29,
      (__int64)v11,
      (__int64)a1);
    v26 = (*(__int64 (__fastcall **)(int *, __int64, _QWORD, _QWORD *))(*((_QWORD *)a1 - 2) + 128LL))(
            a1 - 4,
            v28,
            a2,
            Buffer);
    v8 = v26;
    if ( v26 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        (struct Microsoft::BamoImpl::ConnectionIndirector **)v11,
        0x87B2080C,
        0);
    }
    else if ( v26 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE65F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v26,
        v6);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v29);
  }
  if ( (_DWORD)v6 )
  {
    v27 = Buffer;
    do
    {
      if ( *v27 )
        Microsoft::BamoImpl::BamoProxyImpl::AckReference((Microsoft::BamoImpl::BamoProxyImpl *)(*v27 + 16LL), v24, v25);
      ++v27;
      --v6;
    }
    while ( v6 );
  }
  if ( v20 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v20, v24, v25);
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE676,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v11, Buffer);
  return (unsigned int)v8;
}
