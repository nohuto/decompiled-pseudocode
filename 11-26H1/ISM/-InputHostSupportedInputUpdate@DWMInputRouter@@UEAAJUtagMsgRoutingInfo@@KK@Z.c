/*
 * XREFs of ?InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180031370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x1801A4698 (-find@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@UtagMsgRou.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::InputHostSupportedInputUpdate(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD **); // rdi
  __int64 (__fastcall *v8)(_QWORD, GUID *, _QWORD **); // rbx
  int v9; // eax
  int v10; // eax
  _QWORD *v11; // rbx
  __int64 (__fastcall *v12)(_QWORD *, GUID *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v17[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  _QWORD *v19; // [rsp+50h] [rbp+20h] BYREF

  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::find(
    a1 + 32,
    &v19,
    a2);
  if ( v19 != *(_QWORD **)(a1 + 40) )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v19[7];
    v19 = 0LL;
    v8 = **v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    v9 = v8(v7, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, &v19);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x378,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v9,
        v17[0]);
    v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v19 + 24LL))(v19, a3, a4);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x37A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v10,
        v17[0]);
    v17[0] = 0LL;
    v11 = v19;
    v12 = *(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v19;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
    v13 = v12(v11, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, v17);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x37D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v13,
        v17[0]);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 56) + 88LL))(a1 - 56, v17[0]);
    v14 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
    }
  }
  return 0LL;
}
