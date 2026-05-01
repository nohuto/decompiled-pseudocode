/*
 * XREFs of _std::vector_int_std::allocator_int___::_Reallocate_0__::_1_::catch$0 @ 0x1806D1E08
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@H@std@@QEAAXQEAH_K@Z @ 0x1801DCB84 (-deallocate@-$allocator@H@std@@QEAAXQEAH_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_int_std::allocator_int___::_Reallocate_0__::_1_::catch_0(__int64 a1, __int64 a2)
{
  std::allocator<int>::deallocate(a1, *(void **)(a2 + 40), **(_QWORD **)(a2 + 32));
  throw;
}
