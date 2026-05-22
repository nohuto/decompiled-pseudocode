/*
 * XREFs of ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x18002E940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??$emplace@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18002EA78 (--$emplace@AEAIAEAV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@-$.c)
 *     ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x18002EBC4 (-GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18002ED44 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?count@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x180146F20 (-count@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenEventsDispatcherPrincipal::AttachClient(
        PenEventsDispatcherPrincipal *this,
        struct BamoPenEventsDispatcherStub *a2,
        struct BamoPenEventsClientProxy *a3)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  struct BamoPenEventsClientProxy *v9; // rbx
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int ProcessId; // [rsp+50h] [rbp+8h] BYREF
  struct BamoPenEventsClientProxy *v14; // [rsp+60h] [rbp+18h] BYREF
  char v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a3;
  if ( a3 )
    (**(void (__fastcall ***)(struct BamoPenEventsClientProxy *, struct BamoPenEventsDispatcherStub *))a3)(a3, a2);
  LOBYTE(v5) = PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(this);
  v6 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)a3 + 1) + 48LL))((char *)a3 + 8, v5);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x96,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevent"
                    "sdispatcherprincipal.cpp",
      (const char *)(unsigned int)v6,
      v11[0]);
  LOBYTE(v7) = *((_DWORD *)this + 51) != 0;
  v8 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)a3 + 1) + 72LL))((char *)a3 + 8, v7);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevent"
                    "sdispatcherprincipal.cpp",
      (const char *)(unsigned int)v8,
      v11[0]);
  *((_QWORD *)a3 + 7) = this;
  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a3 + 4) + 16LL));
  std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::emplace<unsigned int &,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> &>(
    (char *)this + 64,
    &v15,
    &ProcessId,
    &v14);
  v9 = v14;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v14 + 1) + 128LL))((__int64)v14 + 8)
    && !std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::count(
          (char *)this + 128,
          &ProcessId) )
  {
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
      (char *)this + 128,
      v11,
      &ProcessId);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct BamoPenEventsClientProxy *))(*(_QWORD *)v9 + 8LL))(v9);
  return 0LL;
}
