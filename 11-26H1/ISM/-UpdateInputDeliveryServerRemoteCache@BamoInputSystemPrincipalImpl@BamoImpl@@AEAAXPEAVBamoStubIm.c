/*
 * XREFs of ?UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180034594
 * Callers:
 *     ?PushStateToProxy@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180032FB0 (-PushStateToProxy@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z.c)
 *     ?UpdateInputDeliveryServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131C5C (-UpdateInputDeliveryServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoSt.c)
 * Callees:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x180034D70 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800366D4 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180036710 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        Microsoft::BamoImpl::BamoPrincipalImpl **a2)
{
  struct Microsoft::Bamo::BamoPrincipal *v3; // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl **v4; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rcx
  struct IMessageCallSendHost *SendHost; // rdi
  __int64 v7; // rbx
  unsigned int ItemId; // eax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-38h]
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 11);
    v4 = a2 + 4;
    if ( v3 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v3,
        *((struct Microsoft::Bamo::BaseBamoPeer **)*v4 + 2));
    v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)*v4 + 3) + 32LL);
    if ( *((_BYTE *)a2 + 56) && *((_QWORD *)v5 + 8) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*v4);
      v7 = *((unsigned int *)*v4 + 9);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(a2[3]);
      ++*((_DWORD *)a2 + 4);
      v11[1] = ItemId;
      *((_BYTE *)a2 + 60) = 1;
      v11[0] = v7;
      LOWORD(v10) = 6;
      v9 = CoreUICallSend(SendHost, v11, 2LL);
      if ( v9 < 0 && v9 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3AEA,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v9,
          v10);
    }
    else
    {
      if ( v5 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v5, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v10);
    }
  }
}
