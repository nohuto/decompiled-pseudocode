/*
 * XREFs of ?IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ @ 0x18002EBE0
 * Callers:
 *     ?IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ @ 0x18002FDD0 (-IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ.c)
 * Callees:
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18002E670 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18002E88C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall PenEventsDispatcherPrincipal::IsTipToGlassRequired(PenEventsDispatcherPrincipal *this)
{
  char v1; // di
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 *v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v1 = 0;
  PenEventsDispatcherPrincipal::GetShellClients((__int64)this, &v5);
  v2 = v5;
  v3 = v6;
  while ( v2 != v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v2 + 8) + 136LL))(*v2 + 8) )
    {
      v1 = 1;
      break;
    }
    ++v2;
  }
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(v5, v6);
    std::_Deallocate<16>(v5, (v7 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v1;
}
