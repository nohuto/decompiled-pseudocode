/*
 * XREFs of ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18008E6D0
 * Callers:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18008E5EC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18008E660 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 * Callees:
 *     _o_terminate_0 @ 0x18008EF0C (_o_terminate_0.c)
 *     __current_exception_0 @ 0x18008EF48 (__current_exception_0.c)
 *     __current_exception_context_0 @ 0x18008EF54 (__current_exception_context_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __ArrayUnwind(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    a1 -= a2;
    a4(a1);
  }
}
