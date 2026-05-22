/*
 * XREFs of _lambda_62513fe2106ea5be335490f61af9321d_::_lambda_invoker_cdecl_ @ 0x180090FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_62513fe2106ea5be335490f61af9321d_::_lambda_invoker_cdecl_(unsigned int *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v3; // edi

  if ( SessionMonitor::_instance
    && (v2 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*((_QWORD *)SessionMonitor::_instance + 1)) != 0LL )
  {
    v3 = (**v2)(v2, *a1, a1[1]);
  }
  else
  {
    v3 = 1;
  }
  operator delete(a1, (const struct std::nothrow_t *)8);
  return v3;
}
