/*
 * XREFs of ?ActivationRequested@BamoActivationWatcherStubImpl@BamoImpl@@QEAAJPEAVBamoActivatableEntityPrincipal@@0@Z @ 0x1800AEF80
 * Callers:
 *     ?ActivationRequested@BamoActivationWatcherStub@@UEAAJPEAVBamoActivatableEntityPrincipal@@0@Z @ 0x1800AEF20 (-ActivationRequested@BamoActivationWatcherStub@@UEAAJPEAVBamoActivatableEntityPrincipal@@0@Z.c)
 *     ?CallActivationRequestedOnStub@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoActivatableEntityPrincipal@@1@Z @ 0x1800AF1F8 (-CallActivationRequestedOnStub@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@.c)
 * Callees:
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180034D40 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180050C5C (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendActivationRequested@BamoActivationWatcherStubImpl@BamoImpl@@AEAAXII@Z @ 0x1800AF4A8 (-LogSendActivationRequested@BamoActivationWatcherStubImpl@BamoImpl@@AEAAXII@Z.c)
 */

__int64 __fastcall BamoImpl::BamoActivationWatcherStubImpl::ActivationRequested(
        BamoImpl::BamoActivationWatcherStubImpl *this,
        struct BamoActivatableEntityPrincipal *a2,
        struct BamoActivatableEntityPrincipal *a3,
        const char *a4)
{
  __int64 v6; // rcx
  unsigned int v8; // r14d
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // edi
  struct IMessageCallSendHost *v12; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v15; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+A8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x78CB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( *((_BYTE *)this + 56) )
  {
    if ( a2 )
      v8 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
             (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
             a2);
    else
      v8 = 0;
    if ( a3 )
      v9 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
             (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
             a3);
    else
      v9 = 0;
    v12 = 0LL;
    v15 = 0;
    v16 = 0;
    v10 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v12, &v15, &v16);
    v11 = v10;
    if ( v10 >= 0 )
    {
      BamoImpl::BamoActivationWatcherStubImpl::LogSendActivationRequested(this, v8, v9);
      v13[0] = v15;
      v13[1] = v16;
      return CoreUICallSend(v12, v13, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78DD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 16) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78D4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
