/*
 * XREFs of ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x1800AA06C
 * Callers:
 *     ?Thunk_OnInputConfigChanged_382@?$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800AA6D0 (-Thunk_OnInputConfigChanged_382@-$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndp.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D878 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D8AC (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x18003DB04 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003DBDC (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveOnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@AEAAXPEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x18009308C (-LogReceiveOnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@AEAAXPEBQEAVBam.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x1800955B0 (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x180097744 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoSystemContextEndpointPrincipalImpl::OnInputConfigChanged(
        BamoImpl::BamoSystemContextEndpointPrincipalImpl *this,
        const unsigned int *a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  int v5; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v7; // r12
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // r15
  struct BamoInputSpacePayloadProxy *const *v9; // rdx
  _QWORD *Buffer; // rbx
  __int64 i; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  _QWORD *v17; // r14
  int v19; // [rsp+20h] [rbp-78h]
  _BYTE v20[88]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v23; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v5 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v23 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v7 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v8 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v7 + 3) + 32LL);
  Buffer = Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(v8, 8 * (int)v3);
  for ( i = 0LL; (unsigned int)i < (unsigned int)v3; i = (unsigned int)(i + 1) )
  {
    Buffer[i] = 0LL;
    v9 = (struct BamoInputSpacePayloadProxy *const *)a2[i];
    if ( (_DWORD)v9 )
    {
      Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v7, (unsigned int)v9);
      if ( !Proxy )
      {
        v5 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
               *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v7 + 3) + 32LL),
               0x87B2080C,
               0);
        if ( v5 >= 0 )
          goto LABEL_21;
        v13 = 37946LL;
        goto LABEL_20;
      }
      Buffer[i] = (char *)Proxy - 16;
    }
  }
  BamoImpl::BamoSystemContextEndpointPrincipalImpl::LogReceiveOnInputConfigChanged(this, v9);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v20,
      (__int64)v8,
      (__int64)this);
    v16 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD *, _QWORD))(*((_QWORD *)this - 2) + 144LL))(
            (char *)this - 16,
            v23,
            Buffer,
            (unsigned int)v3);
    v5 = v16;
    if ( v16 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        (struct Microsoft::BamoImpl::ConnectionIndirector **)v8,
        0x87B2080C,
        0);
    }
    else if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9451,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v16,
        v19);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v20);
  }
  if ( (_DWORD)v3 )
  {
    v17 = Buffer;
    do
    {
      if ( *v17 )
        Microsoft::BamoImpl::BamoProxyImpl::AckReference((Microsoft::BamoImpl::BamoProxyImpl *)(*v17 + 16LL), v14, v15);
      ++v17;
      --v3;
    }
    while ( v3 );
  }
  if ( v5 < 0 )
  {
    v13 = 37988LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
  }
LABEL_21:
  Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v8, Buffer);
  return (unsigned int)v5;
}
