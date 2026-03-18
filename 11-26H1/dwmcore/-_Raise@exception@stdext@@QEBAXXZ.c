/*
 * XREFs of ?_Raise@exception@stdext@@QEBAXXZ @ 0x180209E68
 * Callers:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __noreturn stdext::exception::_Raise(stdext::exception *this)
{
  if ( std::_Raise_handler )
    std::_Raise_handler(this);
  (*(void (__fastcall **)(stdext::exception *))(*(_QWORD *)this + 16LL))(this);
  _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
