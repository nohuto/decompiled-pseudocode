/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__ @ 0x1802252C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *(__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__())(int *a1, _WORD *a2, __int64 a3, _BYTE *a4)
{
  int *(__fastcall *result)(int *, _WORD *, __int64, _BYTE *); // rax

  wil::details::g_pfnRunFunctorWithExceptionFilter = (int (*)(struct wil::details::IFunctor *, struct wil::details::IFunctorHost *, void *))wil::details::RunFunctorWithExceptionFilter;
  wil::details::g_pfnRethrow = (void (*)(void))wil::details::Rethrow;
  wil::details::g_pfnThrowResultException = (void (*)(const struct wil::FailureInfo *))wil::details::ThrowResultExceptionInternal;
  result = wil::details::ResultFromCaughtExceptionInternal;
  g_pfnResultFromCaughtExceptionInternal = (__int64)wil::details::ResultFromCaughtExceptionInternal;
  return result;
}
