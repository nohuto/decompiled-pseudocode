/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a541461e8d66da6faf437e54554206d1__void_enum_CallOnThreadExit::CallbackReason_::_Delete_this @ 0x1800AE4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_a541461e8d66da6faf437e54554206d1__void_enum_CallOnThreadExit::CallbackReason_::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
