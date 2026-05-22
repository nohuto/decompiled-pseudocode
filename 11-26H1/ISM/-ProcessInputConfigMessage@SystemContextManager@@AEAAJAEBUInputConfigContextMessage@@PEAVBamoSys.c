/*
 * XREFs of ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18008B5C8
 * Callers:
 *     ?OnInputConfigChanged@SystemContextManager@@QEAAXXZ @ 0x180045FFC (-OnInputConfigChanged@SystemContextManager@@QEAAXXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180141AB0 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18002E88C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x18002FF60 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180052670 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800E640C (--$_Reallocate@$0A@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@AEAAXA.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x18013E9C4 (--$_Reallocate@$0A@@-$vector@V-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy.c)
 *     ??$emplace_back@PEAVAsyncHRESULTPrincipal@@@?$vector@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@$$QEAPEAVAsyncHRESULTPrincipal@@@Z @ 0x18013EA5C (--$emplace_back@PEAVAsyncHRESULTPrincipal@@@-$vector@V-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_e.c)
 *     ??$emplace_back@PEAVBamoInputSpacePayloadPrincipal@@@?$vector@PEAVBamoInputSpacePayloadPrincipal@@V?$allocator@PEAVBamoInputSpacePayloadPrincipal@@@std@@@std@@QEAAAEAPEAVBamoInputSpacePayloadPrincipal@@$$QEAPEAV2@@Z @ 0x18013EAA8 (--$emplace_back@PEAVBamoInputSpacePayloadPrincipal@@@-$vector@PEAVBamoInputSpacePayloadPrincipal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemContextManager::ProcessInputConfigMessage(
        SystemContextManager *this,
        const struct InputConfigContextMessage *a2,
        struct BamoSystemContextEndpointProxy *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r12
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v12; // rdx
  void (__fastcall ****v13)(_QWORD); // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  void *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rdi
  _QWORD *v22; // [rsp+20h] [rbp-40h] BYREF
  __int128 v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  __int128 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+58h] [rbp-8h]
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v27 = *(unsigned int *)a2;
  if ( v27 )
    std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::_Reallocate<0>(&v25, &v27);
  v23 = 0LL;
  v24 = 0LL;
  v27 = *(unsigned int *)a2;
  if ( v27 )
    std::vector<LampUpdateState>::_Reallocate<0>(&v23, &v27);
  v6 = *((_QWORD *)a2 + 1);
  gsl::details::extent_type<-1>::extent_type<-1>(&v22, *(unsigned int *)a2);
  if ( v22 == (_QWORD *)-1LL || !v6 && v22 )
  {
    _o_terminate(v7);
    JUMPOUT(0x18008B81CLL);
  }
  v8 = v6 + 24LL * (_QWORD)v22;
  while ( v6 != v8 )
  {
    v9 = operator new(0x58uLL);
    v10 = v9;
    v22 = v9;
    v11 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
    if ( *(int *)(v11 + 8) <= 0 )
      v12 = 0LL;
    else
      v12 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v11 + 16);
    *v9 = &BamoInputSpacePayloadPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
    v9[1] = &BamoInputSpacePayloadPrincipal::`vftable'{for `IInputSpacePayloadPrincipal'};
    Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v9 + 2), v12);
    v10[2] = &BamoImpl::BamoInputSpacePayloadPrincipalImpl::`vftable';
    v10[7] = 0LL;
    *((_DWORD *)v10 + 16) = 0;
    v10[9] = 0LL;
    *((_DWORD *)v10 + 20) = 0;
    v28 = (__int64)v10;
    v13 = (void (__fastcall ****)(_QWORD))std::vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>::emplace_back<AsyncHRESULTPrincipal *>(
                                            &v25,
                                            &v28);
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      &v27,
      *v13);
    v14 = v27;
    v15 = v27 + 8;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v27 + 8) + 32LL))(v27 + 8, v6);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 48LL))(
      v15,
      *(_QWORD *)(v6 + 16),
      *(unsigned int *)(v6 + 12));
    v28 = v14;
    std::vector<BamoInputSpacePayloadPrincipal *>::emplace_back<BamoInputSpacePayloadPrincipal *>(&v23, &v28);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v27);
    v6 += 24LL;
  }
  v16 = (void *)v23;
  v17 = v23;
  if ( (_QWORD)v23 == *((_QWORD *)&v23 + 1) )
    v17 = 0LL;
  v18 = (__int64)(*((_QWORD *)&v23 + 1) - v23) >> 3;
  if ( a3 )
  {
    (*(void (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)a3 + 1) + 24LL))(
      (char *)a3 + 8,
      v17,
      (unsigned int)v18);
  }
  else
  {
    v19 = *((_QWORD *)this + 8);
    v20 = *((_QWORD *)this + 7);
    if ( v20 == v19 )
      goto LABEL_21;
    do
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v20 + 8LL) + 24LL))(
        *(_QWORD *)v20 + 8LL,
        v17,
        (unsigned int)v18);
      v20 += 8LL;
    }
    while ( v20 != v19 );
  }
  v16 = (void *)v23;
LABEL_21:
  if ( v16 )
  {
    std::_Deallocate<16>(v16, (struct std::nothrow_t *)((v24 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL));
    v23 = 0LL;
    v24 = 0LL;
  }
  if ( (_QWORD)v25 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      (__int64 *)v25,
      *((__int64 **)&v25 + 1));
    std::_Deallocate<16>((void *)v25, (struct std::nothrow_t *)((v26 - v25) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return 0LL;
}
