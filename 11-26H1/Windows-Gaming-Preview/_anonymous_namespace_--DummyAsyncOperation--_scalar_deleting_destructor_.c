/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::_scalar_deleting_destructor_ @ 0x180011DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _anonymous_namespace_::DummyAsyncOperation::_DummyAsyncOperation @ 0x180011920 (_anonymous_namespace_--DummyAsyncOperation--_DummyAsyncOperation.c)
 */

_QWORD *__fastcall anonymous_namespace_::DummyAsyncOperation::_scalar_deleting_destructor_(_QWORD *a1, char a2)
{
  anonymous_namespace_::DummyAsyncOperation::_DummyAsyncOperation(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xB0);
  return a1;
}
