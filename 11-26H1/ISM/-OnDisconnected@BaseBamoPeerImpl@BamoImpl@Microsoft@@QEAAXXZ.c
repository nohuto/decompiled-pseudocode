/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180037280
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x180029D6C (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x18003745C (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003750C (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180037540 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x18003759C (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct Microsoft::BamoImpl::BamoStubImpl *v5; // r14
  struct Microsoft::BamoImpl::BamoStubImpl *v6; // rbx
  struct Microsoft::BamoImpl::BamoStubImpl *v7; // rcx
  __int64 v8; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *i; // rax
  __int64 v10; // rdx
  _QWORD *j; // rbx
  _QWORD *v12; // rsi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v13; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v14; // rbx
  unsigned int k; // esi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(_QWORD); // rax
  int v20; // eax
  __int128 v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h]
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v23; // [rsp+38h] [rbp-18h]
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  int v25; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v21 = 0LL;
  v22 = 0LL;
  *((_BYTE *)this + 49) = 1;
  v5 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 7);
  v6 = v5;
  for ( *((_QWORD *)this + 7) = 0LL; v6; v6 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v6 + 6) )
  {
    v7 = 0LL;
    v8 = *((_QWORD *)v6 + 3);
    for ( i = *(struct Microsoft::BamoImpl::BamoStubImpl **)(v8 + 32);
          i;
          i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 5) )
    {
      if ( i == v6 )
      {
        v10 = *((_QWORD *)v6 + 5);
        if ( v7 )
          *((_QWORD *)v7 + 5) = v10;
        else
          *(_QWORD *)(v8 + 32) = v10;
        *((_QWORD *)v6 + 5) = 0LL;
        break;
      }
      v7 = i;
    }
    if ( !i )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2DE,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        a4);
    Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(v6, 0LL, &v21);
  }
  v12 = (_QWORD *)*((_QWORD *)&v21 + 1);
  for ( j = (_QWORD *)v21; j != v12; ++j )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 8LL))(*j);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v5);
  v13 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL);
  v24 = 0LL;
  v25 = 0;
  v14 = 0LL;
  v23 = 0LL;
  if ( !*((_DWORD *)v13 + 47) )
  {
    v14 = v13;
    v23 = v13;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v13);
  }
  for ( k = 0; ; ++k )
  {
    v16 = *((_QWORD *)this + 9);
    if ( k >= (unsigned __int64)((*((_QWORD *)this + 10) - v16) >> 5) )
      break;
    v18 = 32LL * k;
    v19 = *(__int64 (__fastcall **)(_QWORD))(v18 + v16 + 16);
    if ( v19 )
    {
      v20 = v19(*(_QWORD *)(v18 + v16 + 8));
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFB,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoAsyncOperationCoordinator.inl",
          (const char *)(unsigned int)v20,
          v21);
    }
  }
  if ( v14 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v14);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v24);
  v17 = *((_QWORD *)this + 9);
  if ( v17 != *((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v17;
  if ( (_QWORD)v21 )
    std::_Deallocate<16>(v21, (v22 - v21) & 0xFFFFFFFFFFFFFFF8uLL);
}
