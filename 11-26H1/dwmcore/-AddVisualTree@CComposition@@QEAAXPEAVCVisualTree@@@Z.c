/*
 * XREFs of ?AddVisualTree@CComposition@@QEAAXPEAVCVisualTree@@@Z @ 0x1800AEFD0
 * Callers:
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x1800AEF90 (-Initialize@CVisualTree@@MEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisualTree@@_K0@Z @ 0x1800AF1B4 (-reserve_region@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vlibera.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::AddVisualTree(struct _RTL_CRITICAL_SECTION *this, struct CVisualTree *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const char *v5; // r9
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 9;
  EnterCriticalSection(this + 9);
  if ( LOBYTE(this[141].OwningThread) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x94E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
      v5);
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
    v6 = 0LL;
  else
    v6 = (__int64)(*(_QWORD *)&this[10].LockCount - (unsigned __int64)this[10].DebugInfo) >> 3;
  *(_QWORD *)detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::reserve_region(
               &this[10],
               v6) = a2;
  if ( v2 )
    LeaveCriticalSection(v2);
}
