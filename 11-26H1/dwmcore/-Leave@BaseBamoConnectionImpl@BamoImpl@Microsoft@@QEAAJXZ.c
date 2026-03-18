/*
 * XREFs of ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ @ 0x18023FBA4
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1802405B0 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180162998 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162B54 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x18023F38C (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x1802407F0 (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v1; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD *i; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  char v17; // [rsp+90h] [rbp+28h] BYREF
  struct Microsoft::BamoImpl::BamoStubImpl *v18; // [rsp+98h] [rbp+30h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+40h] BYREF

  v1 = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)this + 12);
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v17, v1);
  if ( *((_QWORD *)this + 8) )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(this, &v20, &v19, &v18, (__int64)&v14);
    *((_BYTE *)this + 218) = 1;
    Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v17);
    v7 = (_QWORD *)*((_QWORD *)&v14 + 1);
    for ( i = (_QWORD *)v14; i != v7; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
    Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v18);
    v8 = (_QWORD *)v19;
    if ( v19 )
    {
      do
      {
        v9 = (_QWORD *)v8[8];
        v8[8] = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
        v8 = v9;
      }
      while ( v9 );
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 9);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
    v10 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 7);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 6);
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v12,
        v13);
    if ( (_QWORD)v14 )
      std::_Deallocate<16>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
    return 0LL;
  }
  else
  {
    v3 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2081A,
           0);
    v4 = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x354,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v3);
    Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v17);
    if ( (_QWORD)v14 )
      std::_Deallocate<16>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
    return v4;
  }
}
