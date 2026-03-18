/*
 * XREFs of ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x18023F38C
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ @ 0x18023FBA4 (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18023F354 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x180240150 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 *v5; // r14
  __int64 v7; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 i; // rbp
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v5 = (__int64 *)((char *)this + 64);
  v7 = *((_QWORD *)this + 8);
  *a2 = v7;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *a3 = *((_QWORD *)this + 14);
  *a4 = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(this, v10, v11, v12);
  v14 = *((_QWORD *)this + 14);
  for ( i = 0LL; v14; i = v21 )
  {
    v16 = *v5;
    LOBYTE(v13) = 1;
    *((_QWORD *)this + 14) = *(_QWORD *)(v14 + 64);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v16 + 72LL))(
            v16,
            *(unsigned int *)(v14 + 36),
            0LL,
            v13);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3E1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v17,
        (int)Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown);
    LOBYTE(v18) = 1;
    v20 = 0LL;
    v21 = 0LL;
    Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(v14, v18, a5, (unsigned int)&v20, (__int64)&v21);
    if ( *a4 )
      *(_QWORD *)(i + 48) = v20;
    else
      *a4 = v20;
    v14 = *((_QWORD *)this + 14);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v5);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(this);
}
