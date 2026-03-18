/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180240030
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x180240314 (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180162208 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162260 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x180240150 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x1802407F0 (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  __int128 i; // rdi
  unsigned int j; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(_QWORD); // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  _BYTE v12[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Microsoft::BamoImpl::BamoStubImpl *v14; // [rsp+80h] [rbp+20h] BYREF
  __int64 v15; // [rsp+88h] [rbp+28h] BYREF

  v11 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v10 = 0LL;
  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
    (_DWORD)this,
    0,
    (unsigned int)&v10,
    (unsigned int)&v14,
    (__int64)&v15);
  for ( i = v10; (_QWORD)i != *((_QWORD *)&i + 1); *(_QWORD *)&i = i + 8 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)i + 8LL))(*(_QWORD *)i);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v14);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v12,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  for ( j = 0; ; ++j )
  {
    v4 = *((_QWORD *)this + 9);
    if ( j >= (unsigned __int64)((*((_QWORD *)this + 10) - v4) >> 5) )
      break;
    v5 = 32LL * j;
    v6 = *(__int64 (__fastcall **)(_QWORD))(v5 + v4 + 16);
    if ( v6 )
    {
      v7 = v6(*(_QWORD *)(v5 + v4 + 8));
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFB,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoAsyncOperationCoordinator.inl",
          (const char *)(unsigned int)v7,
          v9);
    }
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v12);
  v8 = *((_QWORD *)this + 9);
  if ( v8 != *((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v8;
  if ( (_QWORD)v10 )
    std::_Deallocate<16>((void *)v10, (v11 - v10) & 0xFFFFFFFFFFFFFFF8uLL);
}
