/*
 * XREFs of ??$construct@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@?$_Default_allocator_traits@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@SAXAEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@1@QEAUUserResizeVisual@Transitions@Udwm@winrt@@AEBU3456@@Z @ 0x1800DD024
 * Callers:
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800DCDF8 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 *     ??$_Uninitialized_copy_n@PEBUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEBU1234@_KPEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800DCF08 (--$_Uninitialized_copy_n@PEBUUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800DD1F8 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>::construct<winrt::Udwm::Transitions::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a3;
  *a2 = *a3;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
