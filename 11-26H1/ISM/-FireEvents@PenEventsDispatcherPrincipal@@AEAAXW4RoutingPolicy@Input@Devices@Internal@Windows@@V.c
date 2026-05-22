/*
 * XREFs of ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x180198E14
 * Callers:
 *     ?OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199AE4 (-OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199D7C (-OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199DF4 (-OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199E64 (-OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180199ED4 (-OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18002E670 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18002E88C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x18002FF60 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?count@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x180146F20 (-count@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 *     ??R?$_Func_class@_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@std@@QEBA_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z @ 0x180198BC8 (--R-$_Func_class@_NV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N.c)
 *     ?GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x180198FCC (-GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClien.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall PenEventsDispatcherPrincipal::FireEvents(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r12d
  char v6; // r15
  __int64 *v7; // rdi
  __int64 *v8; // r14
  void (__fastcall ***v9)(_QWORD); // rbx
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rcx
  void (__fastcall ***v13)(_QWORD); // [rsp+20h] [rbp-28h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+38h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+48h] BYREF
  int v18; // [rsp+98h] [rbp+50h]
  __int64 v19; // [rsp+A0h] [rbp+58h]
  __int64 v20; // [rsp+A8h] [rbp+60h] BYREF

  v19 = a3;
  v18 = a2;
  v4 = a2;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 192) )
    goto LABEL_11;
  if ( (_DWORD)a2 )
  {
    PenEventsDispatcherPrincipal::GetClientsForProcess(a1, &v14);
    v7 = v14;
    v8 = v15;
    if ( v14 != v15 )
    {
      do
      {
        wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
          &v13,
          (void (__fastcall ***)(_QWORD))*v7);
        v9 = v13;
        wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
          &v20,
          v13);
        if ( std::_Func_class<bool,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,bool>::operator()(
               a3,
               &v20,
               0) )
        {
          LODWORD(v17) = Microsoft::Bamo::BaseBamoPeer::GetProcessId((Microsoft::Bamo::BaseBamoPeer *)v9[4][2]);
          if ( !std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::count(
                  a1 + 128,
                  (const unsigned __int8 *)&v17) )
            v6 = 1;
        }
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v13);
        ++v7;
      }
      while ( v7 != v8 );
      v8 = v15;
      v7 = v14;
      v4 = v18;
    }
    if ( v7 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(v7, v8);
      std::_Deallocate<16>(v14, (struct std::nothrow_t *)((v16 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
    }
LABEL_11:
    if ( v4 == 1 && v6 )
      goto LABEL_18;
  }
  PenEventsDispatcherPrincipal::GetShellClients(a1, &v14);
  v10 = v14;
  v11 = v15;
  if ( v14 != v15 )
  {
    do
    {
      wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
        &v17,
        (void (__fastcall ***)(_QWORD))*v10);
      std::_Func_class<bool,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,bool>::operator()(
        a3,
        &v17,
        v6);
      ++v10;
    }
    while ( v10 != v11 );
    v11 = v15;
    v10 = v14;
  }
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(v10, v11);
    std::_Deallocate<16>(v14, (struct std::nothrow_t *)((v16 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
  }
LABEL_18:
  v12 = *(_QWORD *)(a3 + 56);
  if ( v12 )
  {
    LOBYTE(a2) = v12 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, a2);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
