/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@2@AEBI@Z @ 0x18019B5C0
 * Callers:
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18002E670 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 *     ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x18007CB64 (-OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientPr.c)
 *     ?GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x180198FCC (-GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClien.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180031330 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::equal_range(
        __int64 a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // r10
  __int64 *v10; // r9
  __int64 *v11; // rax
  int v12; // edx
  __int64 *v13; // rcx
  bool v14; // zf
  _QWORD *result; // rax

  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v7 = v6[3];
  v8 = (__int64 *)v6[1];
  v9 = 2 * (v6[6] & appended);
  v10 = *(__int64 **)(v7 + 16 * (v6[6] & appended));
  if ( v10 == v8 )
  {
LABEL_2:
    v11 = (__int64 *)v6[1];
  }
  else
  {
    v12 = *(_DWORD *)a3;
    while ( *((_DWORD *)v10 + 4) != v12 )
    {
      if ( v10 == *(__int64 **)(v7 + 16 * (v6[6] & appended) + 8) )
        goto LABEL_2;
      v10 = (__int64 *)*v10;
    }
    v11 = v10;
    do
    {
      v13 = (__int64 *)*v10;
      v14 = v10 == *(__int64 **)(v7 + 8 * v9 + 8);
      v10 = (__int64 *)*v10;
    }
    while ( !v14 && v12 == *((_DWORD *)v13 + 4) );
    v8 = v10;
  }
  *a2 = v11;
  result = a2;
  a2[1] = v8;
  return result;
}
