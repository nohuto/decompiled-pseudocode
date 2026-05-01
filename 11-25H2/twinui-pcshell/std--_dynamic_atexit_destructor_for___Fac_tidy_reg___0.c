/*
 * XREFs of std::_dynamic_atexit_destructor_for___Fac_tidy_reg___0 @ 0x1806E0460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void std::_dynamic_atexit_destructor_for___Fac_tidy_reg___0()
{
  __int64 v0; // rcx
  void (__fastcall ***v1)(_QWORD, __int64); // rax
  void *v2; // rbx

  while ( 1 )
  {
    v2 = qword_180899090;
    if ( !qword_180899090 )
      break;
    v0 = *((_QWORD *)qword_180899090 + 1);
    qword_180899090 = *(void **)qword_180899090;
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
    if ( v1 )
      (**v1)(v1, 1LL);
    operator delete(v2, (const struct std::nothrow_t *)0x10);
  }
}
