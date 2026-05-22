/*
 * XREFs of ?UpdateParentIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180035C80
 * Callers:
 *     ?PushStateToProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180034B60 (-PushStateToProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@.c)
 *     ?UpdateParentIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B0B14 (-UpdateParentIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImp.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800366D4 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateParentIdRemoteCache(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl *v3; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rcx
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v6; // r8
  struct IMessageCallSendHost *v7; // rbp
  unsigned int *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // [rsp+20h] [rbp-48h]
  _QWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a2 + 4);
    v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v3 + 3) + 32LL);
    if ( *((_BYTE *)a2 + 56) && *((_QWORD *)v4 + 8) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v3);
      v6 = *((_QWORD *)a2 + 3);
      v7 = SendHost;
      v8 = (unsigned int *)(v6 + 24);
      v9 = *(unsigned int *)(*((_QWORD *)a2 + 4) + 36LL);
      if ( !*(_DWORD *)(v6 + 24) && *(int *)(v6 + 8) > 0 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 32LL);
        v13 = *(_QWORD *)(v12 + 64);
        if ( v13 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v13 + 24LL))(
                  v13,
                  *(unsigned int *)(v12 + 28),
                  v6,
                  v6 + 24);
          if ( v14 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x42B,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v14,
              v15);
        }
      }
      v10 = *v8;
      ++*((_DWORD *)a2 + 4);
      *((_BYTE *)a2 + 60) = 1;
      v16[1] = v10;
      LOWORD(v15) = 1;
      v16[0] = v9;
      v11 = CoreUICallSend(v7, v16, 2LL);
      if ( v11 < 0 && v11 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x67C2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v11,
          v15);
    }
    else
    {
      if ( v4 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v4, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v15);
    }
  }
}
