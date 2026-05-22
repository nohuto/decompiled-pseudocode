/*
 * XREFs of ?GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x180198FCC
 * Callers:
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x180198E14 (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncStringPrincipal@@@Z @ 0x18002E75C (--$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@U.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x18002FF60 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@2@AEBI@Z @ 0x18019B5C0 (-equal_range@-$_Hash@V-$_Umap_traits@IV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall PenEventsDispatcherPrincipal::GetClientsForProcess(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *i; // rbx
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::equal_range(
    a1 + 64,
    v6,
    &v7);
  for ( i = (_QWORD *)v6[0]; i != (_QWORD *)v6[1]; i = (_QWORD *)*i )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(i[3] + 8LL) + 128LL))(i[3] + 8LL) )
    {
      if ( a2[1] == a2[2] )
      {
        std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncStringPrincipal *>(
          a2,
          a2[1],
          i + 3);
      }
      else
      {
        wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
          (_QWORD *)a2[1],
          (void (__fastcall ***)(_QWORD))i[3]);
        a2[1] += 8LL;
      }
    }
  }
  return a2;
}
