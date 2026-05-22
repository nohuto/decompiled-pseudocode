/*
 * XREFs of ?NotifyTipToGlass@PenEventsDispatcherPrincipal@@QEAAXI@Z @ 0x180199A1C
 * Callers:
 *     ?NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z @ 0x1801BE190 (-NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z.c)
 * Callees:
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18002E670 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18002E88C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PenEventsDispatcherPrincipal::NotifyTipToGlass(PenEventsDispatcherPrincipal *this, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  int v5; // eax
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  PenEventsDispatcherPrincipal::GetShellClients((__int64)this, &v6);
  v3 = v6;
  v4 = v7;
  if ( v6 != v7 )
  {
    do
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v3 + 8) + 136LL))(*v3 + 8) )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*v3 + 8) + 80LL))(*v3 + 8, a2);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x216,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdi"
                 "spatcherprincipal.cpp",
            (const char *)(unsigned int)v5);
      }
      ++v3;
    }
    while ( v3 != v4 );
    v4 = v7;
    v3 = v6;
  }
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(v3, v4);
    std::_Deallocate<16>(v6, (struct std::nothrow_t *)((v8 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
