/*
 * XREFs of ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180143AD0
 * Callers:
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxy@@UEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180143A70 (-OnInputConfigChanged@BamoSystemContextEndpointProxy@@UEAAJPEBQEAVBamoInputSpacePayloadPrincipal.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180035E08 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180036954 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180074F58 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x1800955B0 (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x180097744 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 *     ?LogSendOnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXPEBII@Z @ 0x18014388C (-LogSendOnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXPEBII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::OnInputConfigChanged(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this,
        struct Microsoft::Bamo::BamoPrincipal **a2,
        unsigned int a3)
{
  struct IMessageCallSendHost *v3; // r15
  __int64 v6; // r9
  struct IMessageCallSendHost *v7; // r12
  __int64 v8; // r9
  unsigned int v9; // ebx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // r13
  struct IMessageCallSendHost *Buffer; // rax
  struct IMessageCallSendHost *v12; // r14
  struct IMessageCallSendHost *v13; // rdi
  int v14; // eax
  int v15; // eax
  const unsigned int *v16; // rdx
  unsigned int v17; // edi
  struct IMessageCallSendHost *v19; // rdi
  struct IMessageCallSendHost *v20; // rax
  struct IMessageCallSendHost *v21[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v23; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+58h] BYREF

  v3 = (struct IMessageCallSendHost *)a3;
  v6 = *((_QWORD *)this + 2);
  v7 = 0LL;
  if ( *(_DWORD *)(v6 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9659,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v6);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    v9 = -2018375660;
    if ( v8 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9662,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
  }
  else
  {
    v10 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 32LL);
    Buffer = (struct IMessageCallSendHost *)Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(
                                              v10,
                                              4 * (int)v3);
    v12 = Buffer;
    v21[3] = Buffer;
    v21[2] = v10;
    if ( (_DWORD)v3 )
    {
      v7 = v3;
      v13 = Buffer;
      do
      {
        if ( *a2 )
          v14 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
                  (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
                  *a2);
        else
          v14 = 0;
        *(_DWORD *)v13 = v14;
        ++a2;
        v13 = (struct IMessageCallSendHost *)((char *)v13 + 4);
        v7 = (struct IMessageCallSendHost *)((char *)v7 - 1);
      }
      while ( v7 );
    }
    v21[0] = v7;
    v23 = (unsigned int)v7;
    v24 = (unsigned int)v7;
    v15 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v21, &v23, &v24);
    v17 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9670,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v10, v12);
      return v17;
    }
    v19 = v21[0];
    if ( *((_BYTE *)this + 31) != (_BYTE)v7 )
    {
      v20 = (struct IMessageCallSendHost *)((char *)v21[0] - 16);
      if ( !v21[0] )
        v20 = v7;
      *((_BYTE *)v20 + 72) = 1;
    }
    BamoImpl::BamoSystemContextEndpointProxyImpl::LogSendOnInputConfigChanged(this, v16);
    v21[0] = (struct IMessageCallSendHost *)v23;
    v21[1] = (struct IMessageCallSendHost *)v24;
    v9 = CoreUICallSend(v19, v21, 2LL);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v10, v12);
  }
  return v9;
}
