/*
 * XREFs of ?StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x1801283D0
 * Callers:
 *     ?StartAnimation@BamoGestureServicesProxy@@UEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x180128350 (-StartAnimation@BamoGestureServicesProxy@@UEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAV.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180074F58 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x1800955B0 (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x180097744 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC6B0 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendStartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIPEBIIIW4GestureProcessorType@@@Z @ 0x18011EBD0 (-LogSendStartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIPEBIIIW4GestureProcessorType.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoGestureServicesProxyImpl::StartAnimation(
        __int64 a1,
        unsigned int a2,
        struct Microsoft::Bamo::BamoPrincipal **a3,
        const char *a4,
        struct Microsoft::Bamo::BamoPrincipal *a5,
        int a6)
{
  __int64 v6; // r12
  __int64 **v9; // rbx
  __int64 v10; // r10
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // r13
  struct IMessageCallSendHost *Buffer; // rax
  struct IMessageCallSendHost *v14; // r15
  __int64 v15; // r13
  struct IMessageCallSendHost *v16; // rsi
  int v17; // eax
  int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // r14d
  struct IMessageCallSendHost *v21; // r14
  unsigned int v22; // ebx
  unsigned int v23; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v24; // [rsp+64h] [rbp-15h] BYREF
  struct IMessageCallSendHost *v25[11]; // [rsp+68h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v27; // [rsp+D0h] [rbp+57h]
  int v28; // [rsp+D0h] [rbp+57h]

  v6 = (unsigned int)a4;
  v9 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xEACE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v10 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v10 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEAD7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v12 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v10 + 24) + 32LL);
    v27 = v12;
    Buffer = (struct IMessageCallSendHost *)Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(
                                              v12,
                                              4 * (int)v6);
    v14 = Buffer;
    v25[3] = Buffer;
    v25[2] = v12;
    if ( (_DWORD)v6 )
    {
      v15 = v6;
      v16 = Buffer;
      do
      {
        if ( *a3 )
          v17 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
                  (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
                  *a3);
        else
          v17 = 0;
        *(_DWORD *)v16 = v17;
        ++a3;
        v16 = (struct IMessageCallSendHost *)((char *)v16 + 4);
        --v15;
      }
      while ( v15 );
      v12 = v27;
    }
    if ( a5 )
      v28 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
              a5);
    else
      v28 = 0;
    v25[0] = 0LL;
    v23 = 0;
    v24 = 0;
    v18 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v25,
            &v23,
            &v24);
    v20 = v18;
    if ( v18 >= 0 )
    {
      v21 = v25[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v25[0] )
          v9 = (__int64 **)((char *)v25[0] - 16);
        *((_BYTE *)v9 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v9, a5);
      }
      BamoImpl::BamoGestureServicesProxyImpl::LogSendStartAnimation(a1, a2, v19, (unsigned int)v6, v28, a6);
      v25[0] = (struct IMessageCallSendHost *)v23;
      v25[1] = (struct IMessageCallSendHost *)v24;
      v22 = CoreUICallSend(v21, v25, 2LL);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v12, v14);
      return v22;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEAE6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v18);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v12, v14);
      return v20;
    }
  }
}
