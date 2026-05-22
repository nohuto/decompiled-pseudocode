/*
 * XREFs of ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800B6B90
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800B8030 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x18003759C (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??1?$RefPtr@UICoreUIClient@@@@QEAA@XZ @ 0x180046140 (--1-$RefPtr@UICoreUIClient@@@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1800B6620 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  Microsoft::BamoImpl::BamoImplObject *v20; // [rsp+90h] [rbp+28h] BYREF
  struct Microsoft::BamoImpl::BamoStubImpl *v21; // [rsp+98h] [rbp+30h] BYREF
  _QWORD *v22; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+40h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v20,
    *((struct Microsoft::BamoImpl::ConnectionIndirector **)this + 12));
  if ( *((_QWORD *)this + 8) )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(this, &v23, &v22, &v21, (__int64)v17);
    *((_BYTE *)this + 218) = 1;
    Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v20, v7, v8);
    v9 = (_QWORD *)v17[0];
    v10 = v17[1];
    while ( v9 != (_QWORD *)v10 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
      ++v9;
    }
    Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v21);
    v11 = v22;
    if ( v22 )
    {
      do
      {
        v12 = (_QWORD *)v11[8];
        v11[8] = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
        v11 = v12;
      }
      while ( v12 );
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)this + 9);
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)this + 10);
    v13 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)this + 7);
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)this + 6);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v15,
        v16);
    if ( v17[0] )
      std::_Deallocate<16>((void *)v17[0], (struct std::nothrow_t *)((v18 - v17[0]) & 0xFFFFFFFFFFFFFFF8uLL));
    return 0LL;
  }
  else
  {
    v2 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2081A,
           0);
    v5 = v2;
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x354,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v2);
    Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v20, v3, v4);
    if ( v17[0] )
      std::_Deallocate<16>((void *)v17[0], (struct std::nothrow_t *)((v18 - v17[0]) & 0xFFFFFFFFFFFFFFF8uLL));
    return v5;
  }
}
